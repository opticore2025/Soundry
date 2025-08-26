import AVFoundation
import Factory
import SDWebImageSwiftUI
import APIClient
import SwiftUI
import UIKit
import SVProgressHUD

// MARK: - Models
private enum GeneratorTab: String, CaseIterable, Identifiable {
    case style, mood, language, instrument, lyrics
    var id: String { rawValue }
    var title: String {
        switch self {
        case .style: return "Style"
        case .mood: return "Mood"
        case .language: return "Language"
        case .instrument: return "Instrument"
        case .lyrics: return "Lyrics"
        }
    }
    var systemIcon: String {
        switch self {
        case .style: return "style-icon"
        case .mood: return "mood-img"
        case .language: return "language-icon"
        case .instrument: return "instrument-icon"
        case .lyrics: return "lyrics-icon"
        }
    }
}

private struct OrbitalItem: Identifiable {
    //    let id = UUID()
    var id: GeneratorTab { tab }
    let tab: GeneratorTab
    var angle: Double
    var positionTag: String
    var swipeProgress: CGFloat = 0
}

private struct Star: Identifiable {
    let id = UUID()
    let x: CGFloat
    let y: CGFloat
    let size: CGFloat
    let opacity: Double
}

private struct SmallCapsuleToggleStyle: ToggleStyle {
    let activeTrack: Color
    let inactiveTrack: Color
    let handleColor: Color
    let activeBorder: Color
    let inactiveBorder: Color
    let animationDuration: Double

    func makeBody(configuration: Configuration) -> some View {
        let isOn = configuration.isOn
        return Button(action: {
            withAnimation(.easeInOut(duration: animationDuration)) {
                configuration.isOn.toggle()
            }
        }) {
            ZStack(alignment: isOn ? .trailing : .leading) {
                Capsule()
                    .fill(isOn ? activeTrack : inactiveTrack)
                    .overlay(
                        Capsule()
                            .stroke(
                                isOn ? activeBorder : inactiveBorder,
                                lineWidth: 1
                            )
                    )
                    .frame(width: 42, height: 24)

                Circle()
                    .fill(handleColor)
                    .frame(width: 18, height: 18)
                    .padding(3)
            }
        }
        .buttonStyle(.plain)
        .accessibilityLabel("Toggle")
        .accessibilityValue(isOn ? "On" : "Off")
    }
}

// MARK: - View
struct MusicGenerationView: View {
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel:
        MusicApiViewModel
    @InjectedObject(\.uploadApiViewModel) var uploadApiViewModel: UploadApiViewModel
    @InjectedObject(\.musicPlayerViewModel) var musicPlayer:
        MusicPlayerViewModel
    @InjectedObject(\.appState) var appState: AppState

    // Tabs and selections
    private let tabs: [GeneratorTab] = [
        .style, .mood, .language, .instrument, .lyrics,
    ]
    @State private var currentTabIndex: Int = 0

    @State private var selectedStyles: Set<MusicOption> = []
    @State private var selectedMoods: Set<MusicOption> = []
    @State private var selectedLanguages: Set<MusicOption> = []
    @State private var selectedInstruments: Set<MusicOption> = []
    @State private var lyricsTitle: String = ""
    @State private var lyricsText: String = ""
    @State private var isInstrumental: Bool = false

    // Random stars
    @State private var randomStars: [Star] = []

    // Swipe/gesture
    @State private var isSwipeActive: Bool = false
    @State private var swipeDirection: String = ""  // left | right
    @State private var swipeProgress: CGFloat = 0
    @State private var isTransitioning: Bool = false
    @State private var animationKey: Int = 0
    @State private var centerAngle: Angle = .degrees(0)

    // Orbit geometry
    private let ellipseA: CGFloat = 120
    private let ellipseB: CGFloat = 60

    // Tips overlay
    @State private var isShowTip: Bool = true

    // Result area
    @State private var showResult: Bool = false
    @State private var resultType: String = ""  // voice | text | image
    @State private var resultText: String = ""
    @State private var resultImagePath: String = ""
    @State private var resultVoicePath: String = ""
    @State private var resultVoiceDuration: Double = 0

    @State private var isAudioPlaying: Bool = false
    @State private var voiceCurrentTime: Double = 0
    @State private var voiceDuration: Double = 120

    // AttachGenerate presentation
    @State private var showVoiceGenerate: Bool = false
    @State private var showTextGenerate: Bool = false
    @State private var showImageGenerate: Bool = false

    // Generate state
    @State private var isGenerating: Bool = false
    @State private var showGenerationSubmitSuccessAlert: Bool = false

    @State private var player: AVAudioPlayer?

    // MARK: - Computed
    private var currentTab: GeneratorTab { return tabs[currentTabIndex] }
    private var hasGenerationData: Bool {
        return !selectedStyles.isEmpty
            || !selectedMoods.isEmpty
            || !selectedLanguages.isEmpty
            || !selectedInstruments.isEmpty
            || (!lyricsText.trimmingCharacters(in: .whitespacesAndNewlines)
                .isEmpty
                && !lyricsTitle.trimmingCharacters(in: .whitespacesAndNewlines)
                    .isEmpty)
            || !resultText.isEmpty
            || !resultVoicePath.isEmpty
            || !resultImagePath.isEmpty
    }

    var body: some View {
        ZStack {
            Color.appBackground
                .ignoresSafeArea()
                .onTapGesture { endEditing() }

            VStack(spacing: 0) {
                navigationBar
                VStack {
                    orbitalSwitcher
                    tabContentArea
                    Spacer()
                    actionSection
                        .padding(.bottom, 20)
                    bottomToolbar
                }
            }
        }
        .navigationBarHidden(true)
        .onAppear { generateRandomStars() }
        .fullScreenCover(isPresented: $showVoiceGenerate) {
            AttachGenerate(
                mode: .voice,
                initialValue: nil
            ) { result in
                handleAttachGenerateResult(result)
            }
        }
        .fullScreenCover(isPresented: $showTextGenerate) {
            AttachGenerate(
                mode: .text,
                initialValue: resultText
            ) { result in
                handleAttachGenerateResult(result)
            }
        }
        .fullScreenCover(isPresented: $showImageGenerate) {
            AttachGenerate(
                mode: .image,
                initialValue: nil
            ) { result in
                handleAttachGenerateResult(result)
            }
        }
        .alert("Your music is being generated, please wait.", isPresented: $showGenerationSubmitSuccessAlert) {
            Button("OK", role: .cancel) {
                appState.currentTab = .me
            }
        } message: {
            Text("You can view the completed music in 'Me - My Library'.")
        }
    }

    private func endEditing() {
        UIApplication.shared.sendAction(
            #selector(UIResponder.resignFirstResponder),
            to: nil,
            from: nil,
            for: nil
        )
    }

    // MARK: - Navigation Bar
    private var navigationBar: some View {
        HStack {
            Button {
                appState.currentTab = appState.previousTab
            } label: {
                Image(systemName: "chevron.backward")
                    .font(.system(size: 18, weight: .medium))
                    .foregroundColor(.white)
                    .frame(width: 44, height: 44)
                    .contentShape(Rectangle())
            }
            .buttonStyle(.plain)

            Spacer()
            Text("AI generate music")
                .font(.system(size: 18, weight: .semibold))
                .foregroundColor(.white)
            Spacer()
            Color.clear.frame(width: 44, height: 44)
        }
        .frame(height: 44)
    }

    // MARK: - Orbital Switcher
    private var orbitalSwitcher: some View {
        ZStack {
            centerSphere
            orbitalTrack
            ForEach(animatedOrbitalItems(), id: \.tab) { item in
                orbitalItemView(for: item)
            }
            ForEach(randomStars) { star in
                Circle()
                    .fill(Color.white)
                    .frame(width: star.size, height: star.size)
                    .opacity(star.opacity)
                    .position(x: star.x, y: star.y)
                    .animation(
                        .easeInOut(duration: 4)
                            .repeatForever(autoreverses: true)
                            .delay(Double.random(in: 0...10)),
                        value: animationKey
                    )
            }
        }
        .frame(width: 375, height: 260)
        .padding(.top, 60)
        .highPriorityGesture(
            DragGesture(minimumDistance: 10)
                .onChanged { value in handleDragChanged(value) }
                .onEnded { value in handleDragEnded(value) }
        )
    }

    private var centerSphere: some View {
        ZStack {
            Image("music-swiper-bg")
                .resizable()
                .aspectRatio(contentMode: .fit)
                .frame(width: 206, height: 206)
                .rotationEffect(centerAngle)
                .onAppear {
                    withAnimation(
                        .linear(duration: 20).repeatForever(autoreverses: false)
                    ) {
                        centerAngle = .degrees(360)
                    }
                }
            centerContent
        }
        .frame(width: 412, height: 412)
        .position(x: 187.5, y: 106)
    }

    private var centerContent: some View {
        ZStack {
            VStack(spacing: 8) {
                Image(tabs[currentTabIndex].systemIcon)
                    .resizable()
                    .scaledToFit()
                    .frame(width: 34, height: 34)
                    .foregroundColor(.white)
                Text(tabs[currentTabIndex].title)
                    .foregroundColor(.white)
                    .font(.system(size: 16, weight: .semibold))
            }
            .opacity(
                isSwipeActive && swipeProgress > 0
                    ? max(0, 1 - Double(min(swipeProgress, 1))) : 1
            )

            if let newIndex = incomingCenterIndex() {
                VStack(spacing: 8) {
                    Image(tabs[newIndex].systemIcon)
                        .resizable()
                        .scaledToFit()
                        .frame(width: 34, height: 34)
                        .foregroundColor(.white)
                    Text(tabs[newIndex].title)
                        .foregroundColor(.white)
                        .font(.system(size: 16, weight: .semibold))
                }
                .opacity(
                    isSwipeActive
                        ? Double(min(max((swipeProgress - 0.45) / 0.55, 0), 1))
                        : 0
                )
            }
        }
    }

    private var orbitalTrack: some View {
        Image("music-swiper-ring")
            .resizable()
            .aspectRatio(contentMode: .fit)
            .frame(width: 380, height: 230)
            .position(x: 187.5, y: 125)
    }

    private var starRing: some View {
        ZStack {
            Circle()
                .stroke(Color.purple.opacity(0.25), lineWidth: 2)
                .frame(width: 300, height: 300)
                .scaleEffect(isSwipeActive ? 1.04 : 1.0)
                .animation(
                    .easeInOut(duration: 1).repeatForever(autoreverses: true),
                    value: isSwipeActive
                )
        }
        .position(x: 187.5, y: 250)
    }

    private func orbitalItemView(for item: OrbitalItem) -> some View {
        let pos = getEllipticalPosition(item.angle)
        return VStack(spacing: 4) {
            ZStack {
                Image("music-swiper-bg2")
                    .resizable()
                    .scaledToFit()
                    .frame(width: 46, height: 46)
                Image(item.tab.systemIcon)
                    .resizable()
                    .scaledToFit()
                    .frame(width: 18, height: 18)
                    .foregroundColor(.white)
            }
            Text(item.tab.title)
                .font(.system(size: 10))
                .foregroundColor(.white.opacity(0.8))
        }
        .position(x: 187.5 + pos.x, y: 125 + pos.y)
        .opacity(
            opacityForAngle(
                item.angle,
                positionTag: item.positionTag,
                progress: item.swipeProgress
            )
        )
        .onTapGesture { selectOrbitalTab(tab: item.tab) }
    }

    // MARK: - Tab Content
    private var tabContentArea: some View {
        VStack {
            switch currentTab {
            case .style:
                optionsGrid(
                    options: (musicApiViewModel.musicOptions?.styles) ?? [],
                    selected: $selectedStyles
                )
            case .mood:
                optionsGrid(
                    options: (musicApiViewModel.musicOptions?.moods) ?? [],
                    selected: $selectedMoods
                )
            case .language:
                optionsGrid(
                    options: (musicApiViewModel.musicOptions?.languages) ?? [],
                    selected: $selectedLanguages
                )
            case .instrument:
                optionsGrid(
                    options: (musicApiViewModel.musicOptions?.instruments) ?? [],
                    selected: $selectedInstruments
                )
            case .lyrics:
                lyricsInput
            }
        }
        .frame(maxWidth: 355)
        .padding()
    }

    private func optionsGrid(
        options: [MusicOption],
        selected: Binding<Set<(MusicOption)>>
    )
        -> some View
    {
        let columns = [GridItem(.adaptive(minimum: 120), spacing: 12)]
        return ScrollView(.vertical, showsIndicators: false) {
            LazyVGrid(columns: columns, spacing: 12) {
                ForEach(options, id: \.id) { option in
                    let isSelected = selected.wrappedValue.contains(option)
                    Text(option.title!)
                        .font(
                            .system(
                                size: 14,
                                weight: isSelected ? .semibold : .regular
                            )
                        )
                        .foregroundColor(isSelected ? Color.black : Color.white)
                        .frame(height: 38)
                        .frame(maxWidth: .infinity)
                        .background(
                            RoundedRectangle(cornerRadius: 999)
                                .fill(isSelected ? Color.white : Color.clear)
                                .overlay(
                                    RoundedRectangle(cornerRadius: 999)
                                        .stroke(
                                            Color.cyan.opacity(0.5),
                                            lineWidth: 1
                                        )
                                )
                        )
                        .contentShape(Rectangle())
                        .onTapGesture {
                            toggleOption(selected: selected, option: option)
                        }
                        .transition(
                            .opacity.combined(with: .move(edge: .bottom))
                        )
                        .animation(
                            .easeOut(duration: 0.6).delay(
                                Double(options.firstIndex(of: option) ?? 0)
                                    * 0.08
                            ),
                            value: animationKey
                        )
                }
            }
            .padding(.horizontal, 10)
        }
    }
    private var lyricsInput: some View {
        VStack(alignment: .leading, spacing: 12) {
            // Title input container (lyrics-input-title)
            HStack {
                TextField("Describe the song title", text: $lyricsTitle)
                    .font(.system(size: 14))
                    .foregroundColor(.white)
                    .textInputAutocapitalization(.none)
                    .disableAutocorrection(true)
                    .padding(.horizontal, 12)
                    .frame(height: 44)
                    .frame(maxWidth: .infinity, alignment: .leading)
                    .background(Color.clear)
            }
            .padding(.horizontal, 12)
            .frame(height: 48)
            .background(
                RoundedRectangle(cornerRadius: 16)
                    .fill(Color.black.opacity(0.2))
                    .overlay(
                        RoundedRectangle(cornerRadius: 16)
                            .stroke(Color.white.opacity(0.2), lineWidth: 1)
                    )
            )

            // Lyrics input container (lyrics-input-container)
            VStack(spacing: 0) {
                TextEditor(text: $lyricsText)
                    .font(.system(size: 14))
                    .foregroundColor(.white)
                    .frame(height: 110)
                    .textInputAutocapitalization(.none)
                    .disableAutocorrection(true)
                    .scrollContentBackground(.hidden)

                // Instrumental row (instr-container)
                HStack(spacing: 10) {
                    Spacer()
                    Text("Instrumental")
                        .foregroundColor(Color.white.opacity(0.5))
                        .font(.system(size: 12))
                    Toggle("", isOn: $isInstrumental)
                        .labelsHidden()
                        .toggleStyle(
                            SmallCapsuleToggleStyle(
                                activeTrack: Color(
                                    red: 138 / 255,
                                    green: 43 / 255,
                                    blue: 226 / 255
                                ),
                                inactiveTrack: Color.white.opacity(0.2),
                                handleColor: .white,
                                activeBorder: Color(
                                    red: 138 / 255,
                                    green: 43 / 255,
                                    blue: 226 / 255
                                ),
                                inactiveBorder: Color.white.opacity(0.3),
                                animationDuration: 0.2
                            )
                        )
                }
                .padding(.top, 4)
                .padding(.horizontal, 12)
                .padding(.bottom, 12)
            }
            .background(
                RoundedRectangle(cornerRadius: 16)
                    .fill(Color.black.opacity(0.2))
                    .overlay(
                        RoundedRectangle(cornerRadius: 16)
                            .stroke(Color.white.opacity(0.2), lineWidth: 1)
                    )
            )
        }
        .padding(.horizontal, 20)
    }

    // MARK: - Action Section
    private var actionSection: some View {
        VStack {
            if !showResult {
                HStack(spacing: 32) {
                    actionButton(
                        image: "voice_input_icon",
                        action: handleVoiceInput
                    )
                    divider
                    actionButton(
                        image: "text_input_icon",
                        action: handleTextInput
                    )
                    divider
                    actionButton(
                        image: "image_input_icon",
                        action: handleImageInput
                    )
                }
                .padding(.vertical, 16)
                .padding(.horizontal, 32)
                .background(
                    Capsule()
                        .fill(Color.white.opacity(0.1))
                        .overlay(
                            Capsule().stroke(
                                Color.white.opacity(0.5),
                                lineWidth: 1
                            )
                        )
                        .background(
                            BlurView(style: .systemUltraThinMaterialDark)
                                .clipShape(Capsule())
                        )
                )
            } else {
                resultDisplay
                    .padding(.vertical, 16)
                    .padding(.horizontal, 32)
            }
        }
    }

    private func actionButton(image: String, action: @escaping () -> Void)
        -> some View
    {
        Button(action: action) {
            Image(image)
                .resizable()
                .scaledToFit()
                .foregroundColor(.white)
                .frame(width: 22, height: 22)
        }
        .buttonStyle(.plain)
    }

    private var divider: some View {
        Rectangle().fill(Color.white.opacity(0.2)).frame(width: 1, height: 12)
    }

    private var resultDisplay: some View {
        HStack(spacing: 12) {
            if resultType == "voice" {
                Button(action: togglePlayback) {
                    ZStack {
                        Circle().fill(Color.white).frame(width: 30, height: 30)
                        Image(
                            systemName: isAudioPlaying
                                ? "pause.fill" : "play.fill"
                        )
                        .foregroundColor(.black)
                    }
                }
                .buttonStyle(.plain)

                Slider(value: $voiceCurrentTime, in: 0...max(1, voiceDuration))
                    .tint(.white)
                    .frame(height: 10)

                Text(remainingTimeString())
                    .foregroundColor(.white)
                    .font(.system(size: 12))

                Button(action: closeResult) {
                    Image(systemName: "xmark.circle").foregroundColor(.white)
                }
                .buttonStyle(.plain)
            } else if resultType == "text" {
                ScrollView(.vertical, showsIndicators: true) {
                    VStack {
                        Spacer()
                        Text(resultText)
                            .foregroundColor(.white)
                            .font(.system(size: 12))
                            .onTapGesture {
                                handleTextInput()
                            }
                        Spacer()
                    }
                    .frame(
                        maxWidth: .infinity,
                        maxHeight: .infinity,
                        alignment: .leading
                    )

                }
                .padding(.vertical, 10)

                Button(action: closeResult) {
                    Image(systemName: "xmark.circle").foregroundColor(.white)
                }
            } else if resultType == "image" {
                if !resultImagePath.isEmpty {
                    WebImage(url: URL(fileURLWithPath: resultImagePath)) {
                        image in
                        image
                            .resizable()
                            .aspectRatio(contentMode: .fill)
                    } placeholder: {
                        Rectangle()
                            .fill(Color.white.opacity(0.2))
                    }
                    .frame(width: 30, height: 30)
                    .cornerRadius(8)
                    .clipped()
                    .onTapGesture {
                        // Preview image
                        previewImage()
                    }
                } else {
                    Rectangle()
                        .fill(Color.white.opacity(0.2))
                        .frame(width: 30, height: 30)
                        .cornerRadius(8)
                }

                Spacer()
                Button(action: closeResult) {
                    Image(systemName: "xmark.circle").foregroundColor(.white)
                }
            }
        }
        .padding(.horizontal, 13)
        .frame(height: 56)
        .background(
            Capsule()
                .fill(Color.white.opacity(0.1))
                .overlay(
                    Capsule().stroke(Color.white.opacity(0.5), lineWidth: 1)
                )
                .background(
                    BlurView(style: .systemUltraThinMaterialDark).clipShape(
                        Capsule()
                    )
                )
        )
    }

    // MARK: - Bottom Toolbar
    private var bottomToolbar: some View {
        HStack {
            Button(action: generateMusic) {
                HStack(spacing: 12) {
                    Text("Generate")
                        .font(.system(size: 18, weight: .semibold))
                        .foregroundColor(
                            hasGenerationData
                                ? .white : Color.white.opacity(0.5)
                        )
//                    Image(systemName: "diamond.fill")
//                        .foregroundColor(.white)
//                        .opacity(hasGenerationData ? 1 : 0.5)
//                    Text("100")
//                        .foregroundColor(
//                            hasGenerationData
//                                ? .white : Color.yellow.opacity(0.5)
//                        )
                }
                .frame(maxWidth: .infinity)
                .frame(height: 56)
                .background(
                    RoundedRectangle(cornerRadius: 16)
                        .fill(
                            hasGenerationData
                                ? LinearGradient(
                                    colors: [Color.purple, Color.blue],
                                    startPoint: .leading,
                                    endPoint: .trailing
                                )
                                : LinearGradient(
                                    colors: [
                                        Color.white.opacity(0.1),
                                        Color.white.opacity(0.1),
                                    ],
                                    startPoint: .leading,
                                    endPoint: .trailing
                                )
                        )
                )
            }
            .buttonStyle(.plain)
            .disabled(!hasGenerationData || isGenerating)
        }
        .padding(.horizontal, 32)
        .padding(.bottom, 20)
    }

    // MARK: - Tip Overlay
    private var tipOverlay: some View {
        Group {
            if isShowTip {
                Color.black.opacity(0.8)
                    .ignoresSafeArea()
                    .onTapGesture { clickTip() }
                    .overlay(
                        VStack(spacing: 12) {
                            Text("Slide to select more")
                                .foregroundColor(.white)
                                .padding(8)
                                .background(
                                    RoundedRectangle(cornerRadius: 12).fill(
                                        Color.white.opacity(0.1)
                                    )
                                )
                        }
                        .padding(.top, 200)
                    )
            }
        }
        .animation(.easeInOut, value: isShowTip)
    }

    // MARK: - Drag Handling
    private func handleDragChanged(_ value: DragGesture.Value) {
        let deltaX = value.translation.width
        let deltaY = abs(value.translation.height)
        guard !isTransitioning else { return }
        if abs(deltaX) > 10 && deltaY < 100 {
            var progress = min(1, max(0, abs(deltaX) / 150))
            progress = 1 - pow(1 - progress, 1.5)
            isSwipeActive = true
            swipeDirection = deltaX > 0 ? "right" : "left"
            swipeProgress = progress
        }
    }

    private func handleDragEnded(_ value: DragGesture.Value) {
        guard isSwipeActive else {
            resetSwipeState()
            return
        }
        let deltaX = value.translation.width
        let deltaY = value.translation.height
        let distance = sqrt(deltaX * deltaX + deltaY * deltaY)
        let velocity = abs(deltaX) / 0.25  // simple approximation
        let shouldSwitch =
            distance > 50 || swipeProgress > 0.4
            || (velocity > 300 && abs(deltaX) > 30)
        if shouldSwitch {

            isSwipeActive = false
            swipeProgress = 0
            swipeDirection = ""

            if deltaX > 0 {
                currentTabIndex =
                    (currentTabIndex - 1 + tabs.count) % tabs.count
            } else {
                currentTabIndex = (currentTabIndex + 1) % tabs.count
            }
            animationKey += 1
            clickTip()
        } else {
            resetSwipeState()
        }
    }

    private func resetSwipeState() {
        withAnimation(.easeOut(duration: 0.3)) {
            isSwipeActive = false
            swipeProgress = 0
            swipeDirection = ""
        }
    }

    // MARK: - Orbital Items Helpers
    private func getEllipticalPosition(_ angle: Double) -> (
        x: CGFloat, y: CGFloat
    ) {
        let rad = angle * .pi / 180
        let baseX = ellipseA * cos(rad)
        let baseY = ellipseB * sin(rad)
        let tilt = -15.0 * .pi / 180
        let cosT = cos(tilt)
        let sinT = sin(tilt)
        let x = baseX * cosT - baseY * sinT
        let y = baseX * sinT + baseY * cosT
        return (x, y)
    }

    private func animatedOrbitalItems() -> [OrbitalItem] {
        let total = tabs.count
        let leftIndex = (currentTabIndex - 1 + total) % total
        let rightIndex = (currentTabIndex + 1) % total
        var items: [OrbitalItem] = []

        let realCenterAngleRight = 97.0
        let realCenterAngleLeft = 100.0

        if isSwipeActive && swipeProgress > 0 {
            if swipeDirection == "right" {
                let baseAngles = [170.0, realCenterAngleRight, 10.0]
                let indices = [leftIndex, currentTabIndex, rightIndex]
                for i in 0..<4 {
                    var tabIndex: Int
                    var baseAngle: Double
                    var posTag: String
                    if i < 3 {
                        tabIndex = indices[i]
                        baseAngle = baseAngles[i]
                        posTag = ["left", "center", "right"][i]
                    } else {
                        tabIndex = (currentTabIndex - 2 + total) % total
                        baseAngle = 260.0
                        posTag = "new-left"
                    }
                    let targetAngle: Double
                    if i == 0 {
                        targetAngle = realCenterAngleRight
                    } else if i == 1 {
                        targetAngle = 10
                    } else if i == 2 {
                        targetAngle = baseAngles[2] - 75 * Double(swipeProgress)
                    } else {
                        targetAngle = 170
                    }
                    let angle =
                        baseAngle + (targetAngle - baseAngle)
                        * Double(swipeProgress)
                    items.append(
                        OrbitalItem(
                            tab: tabs[tabIndex],
                            angle: angle,
                            positionTag: posTag,
                            swipeProgress: swipeProgress
                        )
                    )
                }
            } else if swipeDirection == "left" {
                let baseAngles = [170.0, realCenterAngleLeft, 10.0]
                let indices = [leftIndex, currentTabIndex, rightIndex]
                for i in 0..<4 {
                    var tabIndex: Int
                    var baseAngle: Double
                    var posTag: String
                    if i < 3 {
                        tabIndex = indices[i]
                        baseAngle = baseAngles[i]
                        posTag = ["left", "center", "right"][i]
                    } else {
                        tabIndex = (currentTabIndex + 2) % total
                        baseAngle = -94.0
                        posTag = "new-right"
                    }
                    let angle: Double
                    if i == 0 {
                        angle = baseAngle + 75 * Double(swipeProgress)
                    } else if i == 1 {
                        angle =
                            baseAngle + (170 - baseAngle)
                            * Double(swipeProgress)
                    } else if i == 2 {
                        angle =
                            baseAngle + (realCenterAngleLeft - baseAngle)
                            * Double(swipeProgress)
                    } else {
                        angle =
                            baseAngle + (10 - baseAngle) * Double(swipeProgress)
                    }
                    items.append(
                        OrbitalItem(
                            tab: tabs[tabIndex],
                            angle: angle,
                            positionTag: posTag,
                            swipeProgress: swipeProgress
                        )
                    )
                }
            }
            return items
        }

        items.append(
            OrbitalItem(tab: tabs[leftIndex], angle: 170, positionTag: "left")
        )
        items.append(
            OrbitalItem(
                tab: tabs[currentTabIndex],
                angle: 97,
                positionTag: "center-incoming"
            )
        )
        items.append(
            OrbitalItem(tab: tabs[rightIndex], angle: 10, positionTag: "right")
        )
        return items
    }

    private func opacityForAngle(
        _ angle: Double,
        positionTag: String,
        progress: CGFloat
    ) -> Double {
        var opacity = 0.8
        let normalized = fmod(fmod(angle, 360) + 360, 360)
        if normalized >= 45 && normalized <= 135 {
            let centerDistance = abs(normalized - 90) / 45
            opacity = 1.0 - (centerDistance * 0.2)
        }
        if isSwipeActive {
            if positionTag == "new-left" || positionTag == "new-right" {
                if progress < 0.6 { return 0 }
                if progress < 0.8 {
                    return Double((progress - 0.6) / 0.2) * opacity
                }
                return opacity
            }
            if swipeDirection == "right" {
                if positionTag == "right" {
                    if progress > 0.1 {
                        let fade = min((progress - 0.1) / 0.7, 1)
                        return Double(1 - fade) * opacity
                    }
                } else if positionTag == "left" {
                    return Double(1 - progress)
                }
            } else if swipeDirection == "left" {
                if positionTag == "left" {
                    if progress > 0.1 {
                        let fade = min((progress - 0.1) / 0.7, 1)
                        return Double(1 - fade) * opacity
                    }
                } else if positionTag == "right" {
                    return Double(1 - progress)
                }
            }
        }
        return Double(opacity)
    }

    private func incomingCenterIndex() -> Int? {
        guard isSwipeActive && swipeProgress > 0.5 else { return nil }
        if swipeDirection == "right" {
            let total = tabs.count
            return (currentTabIndex - 1 + total) % total
        } else if swipeDirection == "left" {
            return (currentTabIndex + 1) % tabs.count
        }
        return nil
    }

    private func selectOrbitalTab(tab: GeneratorTab) {
        guard !isTransitioning, let idx = tabs.firstIndex(of: tab),
            idx != currentTabIndex
        else { return }
        isTransitioning = true
        withAnimation(.easeInOut(duration: 0.8)) {
            currentTabIndex = idx
        }
        DispatchQueue.main.asyncAfter(deadline: .now() + 0.8) {
            isTransitioning = false
            animationKey += 1
        }
    }

    // MARK: - Options Handling
    private func toggleOption(
        selected: Binding<Set<MusicOption>>,
        option: MusicOption
    ) {
        if selected.wrappedValue.contains(option) {
            selected.wrappedValue.remove(option)
        } else {
            selected.wrappedValue.insert(option)
        }
    }

    // MARK: - Actions (Voice/Text/Image)
    private func handleVoiceInput() {
        print("## music generation view handle voice input")
        showVoiceGenerate = true
    }

    private func handleTextInput() {
        print("## music generation view handle text input")
        showTextGenerate = true
    }

    private func handleImageInput() {
        print("## music generation view handle image input")
        showImageGenerate = true
    }
    
    private func clearGenerationData() {
        selectedStyles.removeAll()
        selectedMoods.removeAll()
        selectedLanguages.removeAll()
        selectedInstruments.removeAll()
        lyricsTitle = ""
        lyricsText = ""
        isInstrumental = false
        closeResult()
    }

    private func closeResult() {
        showResult = false
        resultType = ""
        resultText = ""
        resultImagePath = ""
        resultVoicePath = ""
        resultVoiceDuration = 0
        isAudioPlaying = false
        voiceCurrentTime = 0
    }

    private func togglePlayback() {
        guard resultType == "voice" && !resultVoicePath.isEmpty else { return }

        isAudioPlaying.toggle()
        if isAudioPlaying {
            // Start playing the recorded audio
            playRecordedAudio()
        } else {
            // Stop/pause audio playback
            stopAudioPlayback()
        }
    }

    private func playRecordedAudio() {
        // This is a simplified implementation
        // In a real app, you would use AVAudioPlayer or similar
        player = try? AVAudioPlayer(contentsOf: URL(filePath: resultVoicePath))
        player?.prepareToPlay()
        voiceDuration = player?.duration ?? 0
        voiceCurrentTime = 0
        player?.play()

        Timer.scheduledTimer(withTimeInterval: 0.5, repeats: true) { timer in
            if !isAudioPlaying {
                timer.invalidate()
                return
            }
            voiceCurrentTime = min(voiceDuration, voiceCurrentTime + 0.5)
            if voiceCurrentTime >= voiceDuration {
                isAudioPlaying = false
                timer.invalidate()
            }
        }
    }

    private func stopAudioPlayback() {
        // Stop audio playback
        // Implementation would depend on the audio framework used
        player?.pause()
    }

    private func remainingTimeString() -> String {
        let remaining = max(0, voiceDuration - voiceCurrentTime)
        let minutes = Int(remaining) / 60
        let seconds = Int(remaining) % 60
        return String(format: "%02d:%02d", minutes, seconds)
    }

    // MARK: - Generate
    private func generateMusic() {
        guard hasGenerationData else { return }
        Task {
            isGenerating = true
            SVProgressHUD.show(withStatus: "Generating...")
            do {
                var hasPrompt = false
                
                if !resultType.isEmpty {
                    hasPrompt = true
                    switch resultType {
                    case "voice":
                        try await uploadApiViewModel.uploadAIPromptVoice(
                            filePath: resultVoicePath
                        )
                    case "text":
                        break
                    case "image":
                        try await uploadApiViewModel.uploadAIPromptCover(
                            filePath: resultImagePath
                        )
                    default:
                        print("Unknown result type: \(resultType)")
                    }
                }
                
                await musicApiViewModel.createMusic(
                    mood: selectedMoods.map { $0.id!.int32Value },
                    intro: hasPrompt && resultType == "text" ? resultText : nil,
                    style: selectedStyles.map { $0.id!.int32Value },
                    title: lyricsTitle,
                    lyrics: lyricsText,
                    language: selectedLanguages.map { $0.id!.int32Value },
                    instrument: selectedInstruments.map { $0.id!.int32Value },
                    isInstrumental: isInstrumental,
                    introPicMediaId: hasPrompt && resultType == "image"
                    ? uploadApiViewModel.aiPromptCoverMediaID : nil,
                    introVoiceMediaId: hasPrompt && resultType == "voice"
                    ? uploadApiViewModel.aiPromptVoiceMediaID : nil
                )
            } catch {
                DispatchQueue.main.async {
                    SVProgressHUD.dismiss()
                    SVProgressHUD.showError(withStatus: "Failed to generate music...")
                }
                print("Error generating music: \(error)")
                DispatchQueue.main.async {
                    SVProgressHUD.dismiss(withDelay: 1.5)
                    isGenerating = false
                }
                return
            }
            
            DispatchQueue.main.async {
                SVProgressHUD.dismiss()
            }
            clearGenerationData()
            isGenerating = false
            showGenerationSubmitSuccessAlert = true
        }
    }

    // MARK: - Tips
    private func clickTip() {
        isShowTip = false
    }

    // MARK: - AttachGenerate Result Handling
    private func handleAttachGenerateResult(_ result: AttachGenerateResult) {
        switch result.type {
        case .voice:
            resultType = "voice"
            resultVoicePath = result.content
            resultVoiceDuration = result.duration ?? 0
            voiceDuration = result.duration ?? 120
            isAudioPlaying = false
            voiceCurrentTime = 0
            showResult = true

        case .text:
            resultType = "text"
            resultText = result.content
            showResult = true

        case .image:
            resultType = "image"
            resultImagePath = result.content
            showResult = true
        }
    }

    private func previewImage() {
        guard !resultImagePath.isEmpty else { return }

        // Create a simple image preview using UIKit
        if let image = UIImage(contentsOfFile: resultImagePath) {
            let imageView = UIImageView(image: image)
            imageView.contentMode = .scaleAspectFit
            imageView.backgroundColor = .black

            let hostingController = UIHostingController(
                rootView:
                    ZStack {
                        Color.black.ignoresSafeArea()
                        VStack {
                            HStack {
                                Spacer()
                                Button("Done") {
                                    if let windowScene = UIApplication.shared
                                        .connectedScenes.first
                                        as? UIWindowScene,
                                        let window = windowScene.windows.first
                                    {
                                        window.rootViewController?.dismiss(
                                            animated: true
                                        )
                                    }
                                }
                                .foregroundColor(.white)
                                .padding()
                            }
                            Spacer()
                            Image(uiImage: image)
                                .resizable()
                                .aspectRatio(contentMode: .fit)
                            Spacer()
                        }
                    }
            )

            hostingController.modalPresentationStyle = .fullScreen

            if let windowScene = UIApplication.shared.connectedScenes.first
                as? UIWindowScene,
                let window = windowScene.windows.first,
                let rootViewController = window.rootViewController
            {
                rootViewController.present(hostingController, animated: true)
            }
        }
    }

    // MARK: - Random Stars
    private func generateRandomStars() {
        randomStars.removeAll()
        let count = Int.random(in: 16...26)
        let centerX: CGFloat = 187.5
        let centerY: CGFloat = 200
        let circleRadius: CGFloat = 206
        let avoidRadius = circleRadius + 30
        let minStarDistance: CGFloat = 40
        var attempts = 0
        let maxAttempts = count * 20
        while randomStars.count < count && attempts < maxAttempts {
            attempts += 1
            let x = CGFloat.random(in: 25...350)
            let y = CGFloat.random(in: 25...375)
            let distanceToCenter = hypot(x - centerX, y - centerY)
            if distanceToCenter <= avoidRadius { continue }
            var tooClose = false
            for s in randomStars {
                if hypot(x - s.x, y - s.y) < minStarDistance {
                    tooClose = true
                    break
                }
            }
            if !tooClose {
                randomStars.append(
                    Star(
                        x: x,
                        y: y,
                        size: CGFloat(Int.random(in: 12...32)),
                        opacity: Double.random(in: 0.2...0.8)
                    )
                )
            }
        }
    }
}

// MARK: - BlurView helper
private struct BlurView: UIViewRepresentable {
    let style: UIBlurEffect.Style
    func makeUIView(context: Context) -> UIVisualEffectView {
        UIVisualEffectView(effect: UIBlurEffect(style: style))
    }
    func updateUIView(_ uiView: UIVisualEffectView, context: Context) {}
}

#Preview {
    MusicGenerationView()
        .environmentObject(MusicPlayerViewModel())
        .preferredColorScheme(.dark)
}
