import SwiftUI
import Factory
import SDWebImageSwiftUI
import APIClient

struct MusicReportView: View {
    @Environment(\.dismiss) private var dismiss
    @InjectedObject(\.reportApiViewModel) private var reportVM: ReportApiViewModel
    
    // 输入参数
    let musicId: Int
    let titleText: String
    let artistText: String
    let coverURLString: String?
    
    // 本地状态
    @State private var selectedTypeIds: Set<Int> = []
    @State private var customReason: String = ""
    @State private var isSubmitting: Bool = false
    @State private var showSuccessAlert: Bool = false
    
    private let maxCount: Int = 200
    private let chipColumns: [GridItem] = [GridItem(.adaptive(minimum: 110), spacing: 8)]
    
    // 默认举报类型（后端失败时的兜底）
    private let fallbackTypes: [ReportTypeItem] = [
        .init(id: 1, type: "Inappropriate content"),
        .init(id: 2, type: "False information"),
        .init(id: 3, type: "Advertise"),
        .init(id: 4, type: "Quality issues")
    ]
    @State private var serverTypes: [ReportTypeItem] = []
    
    // 计算属性：是否可提交
    private var canSubmit: Bool {
        return !selectedTypeIds.isEmpty || !customReason.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty
    }
    
    // 拆分：导航栏（根据安全区动态下移）
    private func navigationBar(topInset: CGFloat) -> some View {
        HStack {
            Button(action: { dismiss() }) {
                Image(systemName: "chevron.left")
                    .font(.system(size: 24, weight: .medium))
                    .foregroundColor(.white)
            }
            Spacer()
            Text("Report")
                .font(.system(size: 18, weight: .semibold))
                .foregroundColor(.white)
            Spacer()
            Image(systemName: "chevron.left")
                .font(.system(size: 20))
                .foregroundColor(.clear)
        }
        .padding(.horizontal, 20)
        .padding(.top, topInset + 8)
        .frame(height: 44)
    }
    
    // 拆分：音乐信息区域
    private var musicInfoSection: some View {
        VStack(alignment: .leading, spacing: 16) {
            Text("Music information")
                .font(.system(size: 14, weight: .semibold))
                .foregroundColor(.white)
            
            HStack(spacing: 12) {
                coverView
                VStack(alignment: .leading, spacing: 6) {
                    Text(titleText)
                        .foregroundColor(.white)
                        .font(.system(size: 14, weight: .semibold))
                        .lineLimit(1)
                    Text(artistText)
                        .foregroundColor(.white.opacity(0.7))
                        .font(.system(size: 12))
                        .lineLimit(1)
                }
                Spacer()
            }
        }
        .padding(.vertical, 16)
        .padding(.horizontal, 16)
        .background(
            RoundedRectangle(cornerRadius: 10)
                .fill(Color.white.opacity(0.05))
                .overlay(
                    RoundedRectangle(cornerRadius: 10)
                        .stroke(Color.white.opacity(0.1), lineWidth: 1)
                )
        )
        .padding(.top, 24)
    }
    
    // 拆分：举报原因选择区域
    private var reportReasonSection: some View {
        VStack(alignment: .leading, spacing: 16) {
            Text("Select the reason for reporting")
                .font(.system(size: 14, weight: .semibold))
                .foregroundColor(.white)
            
            // 自适应换行标签
            LazyVGrid(columns: chipColumns, alignment: .leading, spacing: 8) {
                ForEach((serverTypes.isEmpty ? fallbackTypes : serverTypes)) { item in
                    ReasonChip(
                        text: item.type,
                        isSelected: selectedTypeIds.contains(item.id)
                    ) { toggleSelection(item.id) }
                }
            }
            
            // 输入框 + 计数器
            ZStack(alignment: .bottomTrailing) {
                TextEditor(text: $customReason)
                    .padding(12)
                    .frame(height: 140)
                    .foregroundColor(.white)
                    .background(
                        RoundedRectangle(cornerRadius: 6)
                            .fill(Color.white.opacity(0.15))
                            .overlay(
                                RoundedRectangle(cornerRadius: 6)
                                    .stroke(Color.white.opacity(0.2), lineWidth: 1)
                            )
                    )
                    .overlay(alignment: .topLeading) {
                        if customReason.isEmpty {
                            Text("Enter the reason for reporting...")
                                .foregroundColor(.white.opacity(0.4))
                                .font(.system(size: 13))
                                .padding(16)
                        }
                    }
                    .onChange(of: customReason) { newValue in
                        if newValue.count > maxCount {
                            customReason = String(newValue.prefix(maxCount))
                        }
                    }
                Text("\(customReason.count)/\(maxCount)")
                    .font(.system(size: 12))
                    .foregroundColor(.white.opacity(0.5))
                    .padding(8)
            }
        }
        .padding(.vertical, 16)
        .padding(.horizontal, 16)
        .background(
            RoundedRectangle(cornerRadius: 10)
                .fill(Color.white.opacity(0.05))
                .overlay(
                    RoundedRectangle(cornerRadius: 10)
                        .stroke(Color.white.opacity(0.1), lineWidth: 1)
                )
        )
    }
    
    // 拆分：提交按钮
    private var submitButton: some View {
        Button(action: submit) {
            Text(isSubmitting ? "Submitting..." : "Submit")
                .foregroundColor(.white)
                .font(.system(size: 16, weight: .semibold))
                .frame(maxWidth: .infinity)
                .frame(height: 48)
                .background(
                    LinearGradient(colors: [Color.purple, Color.indigo], startPoint: .leading, endPoint: .trailing)
                )
                .cornerRadius(10)
                .shadow(color: Color.purple.opacity(0.5), radius: 12, x: 0, y: 6)
                .opacity((canSubmit && !isSubmitting) ? 1 : 0.6)
        }
        .disabled(!canSubmit || isSubmitting)
        .padding(.vertical, 8)
        .padding(.bottom, 24)
    }
    
    // 主视图（简化）
    var body: some View {
        GeometryReader { geometry in
            ZStack {
                // 背景
                Color.black.ignoresSafeArea()
                Image("start-bg")
                    .resizable()
                    .scaledToFill()
                    .ignoresSafeArea()
                    .opacity(0.5)

                VStack(spacing: 0) {
                    // 导航栏
                    navigationBar(topInset: geometry.safeAreaInsets.top)

                    ScrollView {
                        VStack(spacing: 20) {
                            // 音乐信息区域
                            musicInfoSection

                            // 举报原因选择
                            reportReasonSection

                            // 提交按钮
                            submitButton
                        }
                        .padding(.horizontal, 16)
                        .padding(.bottom, geometry.safeAreaInsets.bottom)
                    }
                }
            }
            .navigationBarHidden(true)
            .task { await loadReportTypes() }
            .alert("Report Submitted", isPresented: $showSuccessAlert) {
                Button("OK") {
                    showSuccessAlert = false
                    dismiss()
                }
            } message: {
                Text("Thank you for your report. We will review it as soon as possible.")
            }
        }
    }
    
    // 封面视图（已有拆分）
    private var coverView: some View {
        Group {
            if let urlStr = coverURLString, let url = URL(string: urlStr) {
                WebImage(url: url) { phase in
                    switch phase {
                    case .empty:
                        placeholder
                    case .success(let image):
                        image.resizable().scaledToFill()
                    case .failure:
                        placeholder
                    @unknown default:
                        placeholder
                    }
                }
            } else {
                Image("music_empty")
                    .resizable()
                    .scaledToFill()
            }
        }
        .frame(width: 60, height: 60)
        .clipShape(RoundedRectangle(cornerRadius: 6))
    }
    
    private var placeholder: some View {
        Color.white.opacity(0.1)
    }
    
    private func toggleSelection(_ id: Int) {
        if selectedTypeIds.contains(id) {
            selectedTypeIds.remove(id)
        } else {
            selectedTypeIds.insert(id)
        }
    }
    
    private func submit() {
        guard canSubmit else { return }
        isSubmitting = true
        Task {
            let mappedTypes: [PostReportSubmitRequest.Type_] = selectedTypeIds
                .sorted()
                .compactMap { id in mapReportType(from: id) }
            let content = customReason.trimmingCharacters(in: .whitespacesAndNewlines)

            // 若无法映射任何类型且无自定义理由，终止并恢复按钮
            if mappedTypes.isEmpty && content.isEmpty {
                isSubmitting = false
                return
            }
            

            await reportVM.submitReport(
                types: mappedTypes,
                musicID: Int32(musicId),
                url:nil,
                content: content.isEmpty ? nil : content
            )
            isSubmitting = false
            if reportVM.isSubmitSuccess { 
                showSuccessAlert = true
            }
        }
    }

    private func loadReportTypes() async {
        await reportVM.getReportTypes()
        // 将后端类型映射为本地可用结构
        // 为了与后端枚举 Type_ (._1、._2 ...) 对齐，强制使用顺序索引 1..n
        let mapped: [ReportTypeItem] = reportVM.reportTypes.enumerated().compactMap { (idx, item) in
            guard let name = item.type else { return nil }
            return ReportTypeItem(id: idx + 1, type: name)
        }
        serverTypes = mapped
    }

    // 将整型ID映射为后端的枚举类型（KMM 生成的枚举通常为 ._1、._2 ...）
    private func mapReportType(from id: Int) -> PostReportSubmitRequest.Type_? {
        switch id {
        case 1: return ._1
        case 2: return ._2
        case 3: return ._3
        case 4: return ._4
        default:
            return nil
        }
    }
}

// 子视图保持不变
private struct ReportTypeItem: Identifiable, Hashable {
    let id: Int
    let type: String
}

private struct ReasonChip: View {
    let text: String
    let isSelected: Bool
    let onTap: () -> Void
    
    var body: some View {
        Button(action: onTap) {
            Text(text)
                .font(.system(size: 13))
                .foregroundColor(.white)
                .padding(.horizontal, 14)
                .frame(height: 34)
                .background(isSelected ? Color.purple.opacity(0.2) : Color.white.opacity(0.1))
                .overlay(
                    RoundedRectangle(cornerRadius: 17)
                        .stroke(isSelected ? Color.purple : Color.white.opacity(0.15), lineWidth: 1)
                )
                .cornerRadius(17)
        }
        .buttonStyle(.plain)
    }
}

#Preview {
    MusicReportView(
        musicId: 1001,
        titleText: "Deep Sea Melody",
        artistText: "Aquanaut",
        coverURLString: nil
    )
    .preferredColorScheme(.dark)
}
