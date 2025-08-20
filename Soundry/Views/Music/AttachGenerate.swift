import SwiftUI
import AVFoundation
import UIKit
import PhotosUI

// MARK: - Models
enum AttachGenerateMode: String, CaseIterable {
    case voice, text, image
}

struct AttachGenerateResult {
    let type: AttachGenerateMode
    let content: String
    let duration: Double?
    
    init(type: AttachGenerateMode, content: String, duration: Double? = nil) {
        self.type = type
        self.content = content
        self.duration = duration
    }
}

// MARK: - AttachGenerate View
struct AttachGenerate: View {
    @Environment(\.dismiss) var dismiss
    
    // Parameters
    let mode: AttachGenerateMode
    let initialValue: String?
    let onComplete: (AttachGenerateResult) -> Void
    
    // Voice Recording State
    @State private var isRecording = false
    @State private var isListening = false
    @State private var voiceResult = ""
    @State private var recordDuration: TimeInterval = 0
    @State private var audioRecorder: AVAudioRecorder?
    @State private var recordingTimer: Timer?
    
    // Text Input State
    @State private var textInput = ""
    @State private var keyboardHeight: CGFloat = 0
    
    // Image Selection State
    @State private var showImagePicker = false
    @State private var showActionSheet = false
    @State private var selectedImage: UIImage?
    @State private var imageSourceType: UIImagePickerController.SourceType = .photoLibrary
    
    // UI State
    @State private var showPermissionAlert = false
    @State private var permissionAlertMessage = ""
    
    init(mode: AttachGenerateMode, initialValue: String? = nil, onComplete: @escaping (AttachGenerateResult) -> Void) {
        self.mode = mode
        print("## attach generate init mode \(mode) self mode \(self.mode)")
        self.initialValue = initialValue
        self.onComplete = onComplete
    }
    
    var body: some View {
        ZStack {
            // Background
            Color.black.opacity(0.9)
                .ignoresSafeArea()
                .onTapGesture {
                    if mode != .voice {
                        dismiss()
                    }
                }
            
            VStack(spacing: 0) {
                // Navigation Bar with Back Button
                navigationBar
                
                Spacer()
                
                contentArea
                    .onTapGesture {
                        // Prevent dismiss when tapping content
                    }
                
                Spacer()
            }
        }
        .navigationBarHidden(true)
        .onAppear {
            print("## attach generate on appear mode \(mode)")
            setupInitialState()
            observeKeyboard()
        }
        .onDisappear {
            cleanup()
        }
        .alert("Permission Required", isPresented: $showPermissionAlert) {
            Button("Cancel", role: .cancel) { }
            Button("Settings") {
                openAppSettings()
            }
        } message: {
            Text(permissionAlertMessage)
        }
        .confirmationDialog("Select Image Source", isPresented: $showActionSheet) {
            Button("Camera") {
                imageSourceType = .camera
                checkCameraPermission()
            }
            Button("Photo Library") {
                imageSourceType = .photoLibrary
                checkPhotoLibraryPermission()
            }
            Button("Cancel", role: .cancel) { }
        } message: {
            Text("Reflect your pic's vibe")
        }
        .sheet(isPresented: $showImagePicker) {
            GenImagePicker(sourceType: imageSourceType) { image in
                selectedImage = image
                handleImageSelection()
            }
        }
    }
    
    // MARK: - Navigation Bar
    private var navigationBar: some View {
        HStack {
            Button(action: { dismiss() }) {
                Image(systemName: "chevron.backward")
                    .font(.system(size: 18, weight: .medium))
                    .foregroundColor(.white)
            }
            Spacer()
        }
        .padding(.horizontal, 20)
        .padding(.top, 10)
        .frame(height: 44)
    }
    
    // MARK: - Content Area
    @ViewBuilder
    private var contentArea: some View {
        switch mode {
        case .voice:
            voiceInputView
        case .text:
            textInputView
        case .image:
            imageInputView
        }
    }
    
    // MARK: - Voice Input View
    private var voiceInputView: some View {
        VStack(spacing: 40) {
            // Title
            Text("Polish with your voice tone")
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white)
                .padding(.top, 60)
            
            Spacer()
            
            // Recording Button
            VStack(spacing: 30) {
                Button(action: handleVoiceButton) {
                    ZStack {
                        // Outer circle with animation
                        Circle()
                            .fill(Color.white.opacity(0.1))
                            .frame(width: 200, height: 200)
                            .scaleEffect(isRecording ? 1.05 : 1.0)
                            .opacity(isListening ? 0.7 : 1.0)
                            .animation(
                                isRecording ? .easeInOut(duration: 1.0).repeatForever(autoreverses: true) :
                                isListening ? .easeInOut(duration: 0.75).repeatForever(autoreverses: true) : .default,
                                value: isRecording || isListening
                            )
                        
                        // Inner circle
                        Circle()
                            .fill(Color.white.opacity(0.2))
                            .frame(width: 180, height: 180)
                        
                        // Microphone icon
                        Image(systemName: "mic.fill")
                            .font(.system(size: 40, weight: .regular))
                            .foregroundColor(.white)
                    }
                }
                .buttonStyle(.plain)
                .disabled(isListening)
                
                // Status Text
                Text(getVoiceStatusText())
                    .font(.system(size: 20, weight: .semibold))
                    .foregroundColor(.white)
                    .multilineTextAlignment(.center)
            }
            
            Spacer()
            
            // Done Button
            Button(action: handleComplete) {
                Text("Done")
                    .font(.system(size: 20, weight: .semibold))
                    .foregroundColor(.white)
                    .padding(.horizontal, 24)
                    .padding(.vertical, 9)
                    .background(
                        Capsule()
                            .fill(Color.gray.opacity(0.3))
                    )
            }
            .buttonStyle(.plain)
            .padding(.bottom, 60)
        }
    }
    
    // MARK: - Text Input View
    private var textInputView: some View {
        VStack(spacing: 30) {
            // Title
            Text("Describe the song")
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white)
                .padding(.top, 60)
            
            Spacer()
            
            // Text Input Container
            VStack(spacing: 0) {
                TextEditor(text: $textInput)
                    .font(.system(size: 17))
                    .foregroundColor(.white)
                    .scrollContentBackground(.hidden)
                    .background(Color.clear)
                    .frame(height: 175)
                    .padding(20)
                    .overlay(
                        // Placeholder
                        Group {
                            if textInput.isEmpty {
                                VStack {
                                    HStack {
                                        Text("Describe the song")
                                            .font(.system(size: 17))
                                            .foregroundColor(.white.opacity(0.4))
                                            .padding(.leading, 24)
                                            .padding(.top, 28)
                                        Spacer()
                                    }
                                    Spacer()
                                }
                            }
                        }
                    )
            }
            .background(
                RoundedRectangle(cornerRadius: 24)
                    .fill(Color.white.opacity(0.2))
                    .overlay(
                        RoundedRectangle(cornerRadius: 24)
                            .stroke(Color.white, lineWidth: 1)
                    )
            )
            .frame(width: 350, height: 175)
            
            Spacer()
            
            // Done Button
            Button(action: handleComplete) {
                Text("Done")
                    .font(.system(size: 20, weight: .semibold))
                    .foregroundColor(textInput.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty ? .white.opacity(0.5) : .white)
                    .padding(.horizontal, 24)
                    .padding(.vertical, 9)
                    .background(
                        Capsule()
                            .fill(Color.gray.opacity(0.3))
                            .opacity(textInput.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty ? 0.5 : 1.0)
                    )
            }
            .buttonStyle(.plain)
            .disabled(textInput.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty)
            .padding(.bottom, max(60, keyboardHeight + 20))
        }
        .animation(.easeInOut(duration: 0.3), value: keyboardHeight)
    }
    
    // MARK: - Image Input View
    private var imageInputView: some View {
        VStack(spacing: 40) {
            // Title
            Text("Reflect your pic's vibe")
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white)
                .padding(.top, 60)
            
            Spacer()
            
            if let selectedImage = selectedImage {
                // Selected Image Preview
                VStack(spacing: 30) {
                    Image(uiImage: selectedImage)
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .frame(maxWidth: 200, maxHeight: 200)
                        .clipShape(RoundedRectangle(cornerRadius: 12))
                    
                    Button("Change Image") {
                        showActionSheet = true
                    }
                    .font(.system(size: 16))
                    .foregroundColor(.white.opacity(0.7))
                }
            } else {
                // Image Selection Button
                Button(action: { showActionSheet = true }) {
                    VStack(spacing: 20) {
                        Image(systemName: "photo.on.rectangle")
                            .font(.system(size: 60))
                            .foregroundColor(.white.opacity(0.6))
                        
                        Text("Select Image")
                            .font(.system(size: 18, weight: .medium))
                            .foregroundColor(.white)
                    }
                    .frame(width: 200, height: 200)
                    .background(
                        RoundedRectangle(cornerRadius: 24)
                            .fill(Color.white.opacity(0.1))
                            .overlay(
                                RoundedRectangle(cornerRadius: 24)
                                    .stroke(Color.white.opacity(0.3), lineWidth: 1)
                            )
                    )
                }
                .buttonStyle(.plain)
            }
            
            Spacer()
            
            // Done Button
            Button(action: handleComplete) {
                Text("Done")
                    .font(.system(size: 20, weight: .semibold))
                    .foregroundColor(selectedImage == nil ? .white.opacity(0.5) : .white)
                    .padding(.horizontal, 24)
                    .padding(.vertical, 9)
                    .background(
                        Capsule()
                            .fill(Color.gray.opacity(0.3))
                            .opacity(selectedImage == nil ? 0.5 : 1.0)
                    )
            }
            .buttonStyle(.plain)
            .disabled(selectedImage == nil)
            .padding(.bottom, 60)
        }
    }
    
    // MARK: - Setup and Lifecycle
    private func setupInitialState() {
        if mode == .text, let initialValue = initialValue {
            textInput = initialValue
        }
        
        if mode == .voice {
            setupAudioSession()
            // Auto-start recording after a short delay
            DispatchQueue.main.asyncAfter(deadline: .now() + 0.1) {
                handleVoiceButton()
            }
        }
    }
    
    private func cleanup() {
        stopRecording()
        recordingTimer?.invalidate()
        recordingTimer = nil
        NotificationCenter.default.removeObserver(self)
    }
    
    // MARK: - Voice Recording
    private func setupAudioSession() {
        do {
            let audioSession = AVAudioSession.sharedInstance()
            try audioSession.setCategory(.playAndRecord, mode: .default)
            try audioSession.setActive(true)
        } catch {
            print("Failed to setup audio session: \(error)")
        }
    }
    
    private func handleVoiceButton() {
        if isRecording {
            stopRecording()
        } else if isListening {
            return // Don't allow interaction while listening
        } else if !voiceResult.isEmpty {
            // Already have a recording, show completion message
            return
        } else {
            startRecording()
        }
    }
    
    private func startRecording() {
        guard checkMicrophonePermission() else { return }
        
        let documentsPath = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)[0]
        let audioFilename = documentsPath.appendingPathComponent("recording_\(Date().timeIntervalSince1970).m4a")
        
        let settings = [
            AVFormatIDKey: Int(kAudioFormatMPEG4AAC),
            AVSampleRateKey: 44100,
            AVNumberOfChannelsKey: 2,
            AVEncoderAudioQualityKey: AVAudioQuality.high.rawValue
        ]
        
        do {
            audioRecorder = try AVAudioRecorder(url: audioFilename, settings: settings)
            audioRecorder?.delegate = self as? AVAudioRecorderDelegate
            audioRecorder?.record()
            
            isRecording = true
            recordDuration = 0
            voiceResult = audioFilename.path
            
            // Start timer for duration tracking
            recordingTimer = Timer.scheduledTimer(withTimeInterval: 0.1, repeats: true) { _ in
                recordDuration += 0.1
            }
            
        } catch {
            print("Failed to start recording: \(error)")
        }
    }
    
    private func stopRecording() {
        audioRecorder?.stop()
        audioRecorder = nil
        recordingTimer?.invalidate()
        recordingTimer = nil
        
        isRecording = false
        isListening = true
        
        DispatchQueue.main.asyncAfter(deadline: .now() + 1.5) {
            isListening = false
        }
    }
    
    private func getVoiceStatusText() -> String {
        if isRecording {
            return "Recording... Tap to stop"
        } else if isListening {
            return "Processing..."
        } else if !voiceResult.isEmpty {
            return "Recording completed"
        } else {
            return "Tap to start recording"
        }
    }
    
    // MARK: - Text Input
    private func observeKeyboard() {
        NotificationCenter.default.addObserver(
            forName: UIResponder.keyboardWillShowNotification,
            object: nil,
            queue: .main
        ) { notification in
            if let keyboardFrame = notification.userInfo?[UIResponder.keyboardFrameEndUserInfoKey] as? CGRect {
                keyboardHeight = keyboardFrame.height
            }
        }
        
        NotificationCenter.default.addObserver(
            forName: UIResponder.keyboardWillHideNotification,
            object: nil,
            queue: .main
        ) { _ in
            keyboardHeight = 0
        }
    }
    
    // MARK: - Image Selection
    private func handleImageSelection() {
        // Image is already set in selectedImage state
    }
    
    // MARK: - Permissions
    private func checkMicrophonePermission() -> Bool {
        switch AVAudioSession.sharedInstance().recordPermission {
        case .granted:
            return true
        case .denied:
            showPermissionAlert(message: "Microphone access is required to record audio. Please enable it in Settings.")
            return false
        case .undetermined:
            AVAudioSession.sharedInstance().requestRecordPermission { granted in
                DispatchQueue.main.async {
                    if granted {
                        self.startRecording()
                    } else {
                        self.showPermissionAlert(message: "Microphone access was denied. Please enable it in Settings.")
                    }
                }
            }
            return false
        @unknown default:
            return false
        }
    }
    
    private func checkCameraPermission() {
        switch AVCaptureDevice.authorizationStatus(for: .video) {
        case .authorized:
            showImagePicker = true
        case .denied, .restricted:
            showPermissionAlert(message: "Camera access is required. Please enable it in Settings.")
        case .notDetermined:
            AVCaptureDevice.requestAccess(for: .video) { granted in
                DispatchQueue.main.async {
                    if granted {
                        self.showImagePicker = true
                    } else {
                        self.showPermissionAlert(message: "Camera access was denied. Please enable it in Settings.")
                    }
                }
            }
        @unknown default:
            break
        }
    }
    
    private func checkPhotoLibraryPermission() {
        let status = PHPhotoLibrary.authorizationStatus()
        switch status {
        case .authorized, .limited:
            showImagePicker = true
        case .denied, .restricted:
            showPermissionAlert(message: "Photo library access is required. Please enable it in Settings.")
        case .notDetermined:
            PHPhotoLibrary.requestAuthorization { status in
                DispatchQueue.main.async {
                    if status == .authorized || status == .limited {
                        self.showImagePicker = true
                    } else {
                        self.showPermissionAlert(message: "Photo library access was denied. Please enable it in Settings.")
                    }
                }
            }
        @unknown default:
            break
        }
    }
    
    private func showPermissionAlert(message: String) {
        permissionAlertMessage = message
        showPermissionAlert = true
    }
    
    private func openAppSettings() {
        if let settingsUrl = URL(string: UIApplication.openSettingsURLString) {
            UIApplication.shared.open(settingsUrl)
        }
    }
    
    // MARK: - Completion
    private func handleComplete() {
        switch mode {
        case .voice:
            handleVoiceComplete()
        case .text:
            handleTextComplete()
        case .image:
            handleImageComplete()
        }
    }
    
    private func handleVoiceComplete() {
        if isRecording || isListening {
            if isRecording {
                stopRecording()
                // Wait for processing to complete
                DispatchQueue.main.asyncAfter(deadline: .now() + 1.5) {
                    self.sendVoiceResult()
                }
            } else if isListening {
                // Wait for listening to complete
                DispatchQueue.main.asyncAfter(deadline: .now() + 1.5) {
                    self.sendVoiceResult()
                }
            }
            return
        }
        
        sendVoiceResult()
    }
    
    private func sendVoiceResult() {
        guard !voiceResult.isEmpty else {
            // Show error message
            return
        }
        
        let result = AttachGenerateResult(
            type: .voice,
            content: voiceResult,
            duration: recordDuration
        )
        
        onComplete(result)
        dismiss()
    }
    
    private func handleTextComplete() {
        let trimmedText = textInput.trimmingCharacters(in: .whitespacesAndNewlines)
        guard !trimmedText.isEmpty else { return }
        
        let result = AttachGenerateResult(
            type: .text,
            content: trimmedText
        )
        
        onComplete(result)
        dismiss()
    }
    
    private func handleImageComplete() {
        guard let selectedImage = selectedImage else { return }
        
        // Save image to temporary directory
        let tempDir = FileManager.default.temporaryDirectory
        let imageURL = tempDir.appendingPathComponent("selected_image_\(Date().timeIntervalSince1970).jpg")
        
        if let imageData = selectedImage.jpegData(compressionQuality: 0.8) {
            do {
                try imageData.write(to: imageURL)
                
                let result = AttachGenerateResult(
                    type: .image,
                    content: imageURL.path
                )
                
                onComplete(result)
                dismiss()
            } catch {
                print("Failed to save image: \(error)")
            }
        }
    }
}

// MARK: - ImagePicker
struct GenImagePicker: UIViewControllerRepresentable {
    let sourceType: UIImagePickerController.SourceType
    let onImageSelected: (UIImage) -> Void
    
    func makeUIViewController(context: Context) -> UIImagePickerController {
        let picker = UIImagePickerController()
        picker.sourceType = sourceType
        picker.delegate = context.coordinator
        return picker
    }
    
    func updateUIViewController(_ uiViewController: UIImagePickerController, context: Context) {}
    
    func makeCoordinator() -> Coordinator {
        Coordinator(onImageSelected: onImageSelected)
    }
    
    class Coordinator: NSObject, UIImagePickerControllerDelegate, UINavigationControllerDelegate {
        let onImageSelected: (UIImage) -> Void
        
        init(onImageSelected: @escaping (UIImage) -> Void) {
            self.onImageSelected = onImageSelected
        }
        
        func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [UIImagePickerController.InfoKey : Any]) {
            if let image = info[.originalImage] as? UIImage {
                onImageSelected(image)
            }
            picker.dismiss(animated: true)
        }
        
        func imagePickerControllerDidCancel(_ picker: UIImagePickerController) {
            picker.dismiss(animated: true)
        }
    }
}

#Preview {
    AttachGenerate(mode: .voice) { result in
        print("Result: \(result)")
    }
    .preferredColorScheme(.dark)
}
