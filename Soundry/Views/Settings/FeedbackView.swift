import Factory
import PhotosUI
import SVProgressHUD
import SwiftUI

struct FeedbackView: View {
    @Environment(\.dismiss) var dismiss
    @State private var multiLineText = ""
    private let maxCharacters = 300

    @InjectedObject(\.feedbackApiViewModel) private var feedbackViewModel:
        FeedbackApiViewModel
    @InjectedObject(\.uploadApiViewModel) private var uploadViewModel:
        UploadApiViewModel

    // 状态变量
    @State private var isLoading = false
    @State private var showSuccessAlert = false
    @State private var showErrorAlert = false
    @State private var errorMessage = ""

    // 图片选择相关状态
    @State private var selectedImages: [UIImage] = []
    @State private var showingImagePicker = false
    @State private var imageSelections: [PhotosPickerItem] = []

    // 计算剩余可输入字符数
    private var remainingCharacters: Int {
        maxCharacters - multiLineText.count
    }

    // 计算还能添加的图片数量
    private var remainingImageSlots: Int {
        3 - selectedImages.count
    }

    // 导航栏
    private var navigationBar: some View {
        HStack {
            Button(action: { dismiss() }) {
                Image(systemName: "chevron.left")
                    .font(.system(size: 20, weight: .medium))
                    .foregroundColor(.white)
            }
            Spacer()

            Text("Report an Issue")
                .font(.system(size: 18, weight: .semibold))
                .foregroundColor(.white)
            Spacer()

            // 占位元素平衡布局
            Image(systemName: "chevron.left")
                .font(.system(size: 20))
                .foregroundColor(.clear)
        }
        .padding(.horizontal, 20)
        .padding(.top, 12)
        .frame(height: 44)
    }

    // 文本输入框
    private var inputEditor: some View {
        TextEditor(text: $multiLineText)
            .padding()
            .background(Color(red: 0.1, green: 0.1, blue: 0.1))
            .scrollContentBackground(.hidden)
            .border(Color.gray.opacity(0.3), width: 1)
            .cornerRadius(8)
            .frame(height: 200)
            .lineSpacing(5)
            .foregroundColor(.white)
            .overlay(
                ZStack {
                    // 提示文本（左上角）
                    if multiLineText.isEmpty {
                        Text("What do you want to say...")
                            .foregroundColor(.gray.opacity(0.6))
                            .padding(8)
                            .frame(
                                maxWidth: .infinity,
                                maxHeight: .infinity,
                                alignment: .topLeading
                            )
                    }

                    // 计数器（右下角）
                    Text("\(remainingCharacters)/300")
                        .font(.system(size: 12))
                        .foregroundColor(
                            remainingCharacters < 30 ? .red : .gray
                        )
                        .padding(8)
                        .frame(
                            maxWidth: .infinity,
                            maxHeight: .infinity,
                            alignment: .bottomTrailing
                        )
                }
            )
            .onChange(of: multiLineText) { newValue in
                if newValue.count > maxCharacters {
                    multiLineText = String(newValue.prefix(maxCharacters))
                }
            }
    }

    // 图片选择和预览区域
    private var imageSelectionArea: some View {
        VStack(alignment: .leading, spacing: 12) {
            Text("Add picture (Option)")
                .font(.system(size: 14, weight: .semibold))
                .foregroundColor(.white)

            if !selectedImages.isEmpty {
                Text("Selected \(selectedImages.count) photos")
                    .font(.system(size: 12))
                    .foregroundColor(.green)
                    .padding(.bottom, 8)
            }

            HStack(spacing: 12) {
                // 显示已选择的图片预览
                ForEach(Array(selectedImages.enumerated()), id: \.offset) {
                    index,
                    image in
                    ZStack {
                        Image(uiImage: image)
                            .resizable()
                            .scaledToFill()
                            .frame(width: 80, height: 80)
                            .clipShape(RoundedRectangle(cornerRadius: 6))
                            .overlay(
                                RoundedRectangle(cornerRadius: 6)
                                    .strokeBorder(
                                        Color.gray.opacity(0.3),
                                        lineWidth: 1
                                    )
                            )
                        // 删除按钮
                        Button(action: {
                            selectedImages.remove(at: index)
                        }) {
                            Image(systemName: "xmark.circle.fill")
                                .foregroundColor(.red)
                                .background(Color.white, in: Circle())
                                .font(.system(size: 16))
                        }
                        .offset(x: 30, y: -30)
                    }
                }

                // 添加图片按钮
                if remainingImageSlots > 0 {
                    PhotosPicker(
                        selection: $imageSelections,
                        maxSelectionCount: remainingImageSlots,
                        matching: .images
                    ) {
                        ZStack {
                            Color(red: 0.1, green: 0.1, blue: 0.1)
                                .frame(width: 80, height: 80)
                                .cornerRadius(6)
                                .overlay(
                                    RoundedRectangle(cornerRadius: 6)
                                        .stroke(
                                            Color.gray.opacity(0.3),
                                            lineWidth: 1
                                        ),
                                    alignment: .center
                                )

                            VStack(spacing: 4) {
                                Image(systemName: "plus")
                                    .foregroundColor(.white)
                                    .font(.system(size: 16))
                                Text("Add photos")
                                    .font(.system(size: 10))
                                    .foregroundColor(.white)
                            }
                        }
                    }
                    .onChange(of: imageSelections) { newSelections in
                        Task {
                            await loadSelectedImages(from: newSelections)
                        }
                    }
                }
            }
        }
    }

    // 提交按钮
    private var submitButton: some View {
        Button(action: submitReport) {
            HStack {
                if isLoading {
                    ProgressView()
                        .progressViewStyle(
                            CircularProgressViewStyle(tint: .white)
                        )
                        .scaleEffect(0.8)
                }
                Text(isLoading ? "Submitting..." : "Submit")
                    .font(.system(size: 16, weight: .medium))
                    .foregroundColor(.white)
            }
            .frame(maxWidth: .infinity)
            .padding(.vertical, 12)
            .background(isLoading ? Color.purple.opacity(0.6) : Color.purple)
            .cornerRadius(8)
        }
        .disabled(
            isLoading
                || multiLineText.trimmingCharacters(in: .whitespacesAndNewlines)
                    .isEmpty
        )
        .padding(.top, 20)
    }

    // 提交反馈
    private func submitReport() {
        let trimmedContent = multiLineText.trimmingCharacters(
            in: .whitespacesAndNewlines
        )

        guard !trimmedContent.isEmpty else {
            errorMessage = "Please input here"
            showErrorAlert = true
            return
        }

        isLoading = true

        Task {
            do {
                SVProgressHUD.show()
                
                guard !selectedImages.isEmpty else {
                    await feedbackViewModel.submitFeedback(
                        content: trimmedContent,
                        photoUrls: []
                    )
                    DispatchQueue.main.async {
                        SVProgressHUD.dismiss()
                        SVProgressHUD.showSuccess(withStatus: "Submit Success")
                        SVProgressHUD.dismiss(withDelay: 2)
                        clean()
                        isLoading = false
                    }
                    print("Feedback with img submitted successfully")
                    return
                }
                
                let photoUrls: [(String, Int32?, Int32?)] = try await uploadImages(images: selectedImages)
                    .map { ($0, nil, nil) }

                await feedbackViewModel.submitFeedback(
                    content: trimmedContent,
                    photoUrls: photoUrls
                )
                DispatchQueue.main.async {
                    SVProgressHUD.dismiss()
                    SVProgressHUD.showSuccess(withStatus: "Submit Success")
                    SVProgressHUD.dismiss(withDelay: 2)
                    clean()
                    isLoading = false
                    print("Feedback with img submitted successfully")
                }
            } catch {
                DispatchQueue.main.async {
                    SVProgressHUD.dismiss()
                    SVProgressHUD.showError(withStatus: "Submit Failed")
                    SVProgressHUD.dismiss(withDelay: 2)
                    clean()
                    isLoading = false
                }
                print("Submit failed: \(error)")
            }
        }
    }
    
    private func clean() {
        multiLineText = ""
        selectedImages.removeAll()
    }

    // 加载选中的图片
    private func loadSelectedImages(from selections: [PhotosPickerItem]) async {
        var newImages: [UIImage] = []

        for selection in selections {
            if let data = try? await selection.loadTransferable(
                type: Data.self
            ),
                let image = UIImage(data: data)
            {
                newImages.append(image)
            }
        }

        await MainActor.run {
            selectedImages.append(contentsOf: newImages)
            imageSelections.removeAll()
        }
    }

    // 上传图片到服务器
    private func uploadImages(images: [UIImage]) async throws -> [String] {
        var uploadedURLs: [String] = []
        var tempFileTempURLs: [URL] = []
        do {
            for image in images {
                let tempURL = try saveImageToTempFile(image: image)
                tempFileTempURLs.append(tempURL)
            }
        } catch {
            print("upload error: \(error)")
        }

        await uploadViewModel.uploadFeedback(
            filePaths: tempFileTempURLs.map { $0.path }
        )

        for tempURL in tempFileTempURLs {
            if let url = uploadViewModel.feedbackUploadResultMap[
                tempURL.path
            ], url != nil {
                uploadedURLs.append(url!)
            }
            try? FileManager.default.removeItem(at: tempURL)
        }

        return uploadedURLs
    }

    // 保存图片到临时文件
    private func saveImageToTempFile(image: UIImage) throws -> URL {
        guard let imageData = image.jpegData(compressionQuality: 0.8) else {
            throw NSError(
                domain: "ImageProcessing",
                code: -1,
                userInfo: [NSLocalizedDescriptionKey: "Image decoding error"]
            )
        }

        let tempDir = FileManager.default.temporaryDirectory
        let fileName = "feedback_\(UUID().uuidString).jpg"
        let fileURL = tempDir.appendingPathComponent(fileName)

        try imageData.write(to: fileURL)
        return fileURL
    }

    var body: some View {
        ZStack {
            // 主页面背景（纯黑色）
            Color.black
                .ignoresSafeArea()

            VStack(spacing: 0) {
                // 导航栏
                navigationBar

                // 内容区域
                ScrollView {
                    VStack(alignment: .leading, spacing: 24) {
                        inputEditor
                        imageSelectionArea
                        submitButton
                    }
                    .padding(.top, 30)
                    .padding(.horizontal)
                    .padding(.bottom, 40)
                }
            }
        }
        .alert("Send successful", isPresented: $showSuccessAlert) {
            Button("OK") {
                // 延迟关闭，确保用户看到成功提示
                DispatchQueue.main.asyncAfter(deadline: .now() + 0.5) {
                    dismiss()
                }
            }
        } message: {
            Text("Your feedback has been successfully submitted. Thank you for your suggestion！")
        }
        .alert("Send error", isPresented: $showErrorAlert) {
            Button("OK") {
                // 重置错误状态
                errorMessage = ""
            }
        } message: {
            Text(errorMessage)
        }
    }
}

#Preview {
    FeedbackView()
}
