import Factory
import SVProgressHUD
import SwiftUI
import SDWebImageSwiftUI
import UIKit

struct ProfileView: View {
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.authenticationApiViewModel) var authViewModel:
        AuthenticationApiViewModel
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel:
        UserSessionViewModel
    @InjectedObject(\.uploadApiViewModel) var uploadViewModel:
        UploadApiViewModel

    @State private var showingImagePicker = false
    @State private var showingSourceSelector = false
    @State private var showingNameEditor = false
    @State private var userName = "Username"
    @State private var newName = ""
    @State private var selectedImage: UIImage?
    @State private var imagePickerSourceType:
        UIImagePickerController.SourceType = .photoLibrary

    // 头像上传相关状态
    @State private var isUploadingAvatar = false
    @State private var avatarUploadError: String?
    @State private var showingAvatarUploadError = false
    @State private var currentAvatarImage: UIImage?  // 存储当前头像图片

    // 统一行高
    private let rowHeight: CGFloat = 82

    var body: some View {
        ZStack {
            Color.black
                .ignoresSafeArea()

            VStack(spacing: 0) {
                // 顶部导航栏
                HStack {
                    Button(action: { dismiss() }) {
                        Image(systemName: "chevron.left")
                            .font(.system(size: 20, weight: .medium))
                            .foregroundColor(.white)
                    }

                    Spacer()

                    Text("Profile")
                        .font(.system(size: 18, weight: .semibold))
                        .foregroundColor(.white)

                    Spacer()

                    Image(systemName: "chevron.left")
                        .font(.system(size: 20))
                        .foregroundColor(.clear)
                }
                .padding(.horizontal, 20)
                .padding(.top, 12)
                .frame(height: 44)

                ScrollView {
                    VStack(spacing: 0) {  // 改为0间距，通过内部横线分隔
                        // 头像选择框
                        ProfileSettingsRow(
                            title: "Avatar",
                            rowHeight: rowHeight
                        ) {
                            showingSourceSelector = true
                        } rightContent: {
                            // TODO local cache
                            if let urlStr = userSessionViewModel.userInfo?
                                .avatar, !urlStr.isEmpty
                            {
                                ZStack {
                                    WebImage(
                                        url: ResourceUtils.shared.imageURL(
                                            userSessionViewModel.userInfo?
                                                .avatar ?? ""
                                        )
                                    )
                                    // .resizable()
                                    .scaledToFill()
                                    .frame(width: 50, height: 50)
                                    .clipShape(Circle())

                                    if isUploadingAvatar {
                                        ProgressView()
                                            .scaleEffect(0.8)
                                            .tint(.white)
                                    }
                                }
                            } else {
                                Image(systemName: "person.crop.circle.fill")
                                    .resizable()
                                    .frame(width: 50, height: 50)
                                    .foregroundColor(.gray)
                            }
                        }

                        // 两行之间的浅色横线
                        Divider()
                            .background(Color.white.opacity(0.08))
                            .padding(.horizontal, 20)

                        // 名字修改框
                        ProfileSettingsRow(title: "Name", rowHeight: rowHeight)
                        {
                            newName = userName
                            showingNameEditor = true
                        } rightContent: {
                            Text(userName)
                                .font(.system(size: 16))
                                .foregroundColor(.white.opacity(0.6))
                        }
                    }
                    .padding(.top, 30)
                }
            }
        }
        .navigationBarHidden(true)
        .onAppear {
            // 同步会话里的昵称到本地展示，避免进入时被重置
            if let current = userSessionViewModel.userInfo {
                userName = current.nickname
            }

            // 加载已保存的头像
            //            loadSavedAvatar()

            // 如果有已选择的头像，保持显示
            //            if let image = selectedImage {
            //                currentAvatarImage = image
            //            }
        }
        // 头像来源选择（使用 confirmationDialog 显示操作表）
        .confirmationDialog(
            "Select Image Source",
            isPresented: $showingSourceSelector,
            titleVisibility: .visible
        ) {
            Button("Camera") {
                if UIImagePickerController.isSourceTypeAvailable(.camera) {
                    imagePickerSourceType = .camera
                } else {
                    imagePickerSourceType = .photoLibrary
                }
                showingImagePicker = true
            }
            Button("Photo Album") {
                imagePickerSourceType = .photoLibrary
                showingImagePicker = true
            }
            Button("Cancel", role: .cancel) {}
        }
        // 图片选择器
        .sheet(
            isPresented: $showingImagePicker,
            onDismiss: {
                // 选择完头像后，自动上传
                if let image = selectedImage {
                    Task {
                        await uploadAvatar(image: image)
                    }
                }
            }
        ) {
            ImagePicker(
                selectedImage: $selectedImage,
                sourceType: imagePickerSourceType
            )
        }
        // 名字修改弹窗
        .alert("Nickname modification", isPresented: $showingNameEditor) {
            TextField("Enter new name", text: $newName)
                .foregroundColor(.white)

            HStack {
                Button("Cancel", role: .cancel) {}
                Button("Confirm") {
                    let nickname = newName.trimmingCharacters(in: .whitespaces)
                    guard !nickname.isEmpty else { return }
                    Task {
                        SVProgressHUD.show()
                        await authViewModel.completeProfile(
                            nickname: nickname,
                            avatar: nil
                        )
                        if authViewModel.profileCompleted {
                            userName = nickname
                            userSessionViewModel.updateProfile(
                                nickname: nickname,
                                avatar: nil
                            )
                            DispatchQueue.main.async {
                                SVProgressHUD.dismiss()
                                SVProgressHUD.showSuccess(withStatus: "Success")
                                SVProgressHUD.dismiss(withDelay: 1.5)
                            }
                            return
                        }
                        DispatchQueue.main.async {
                            SVProgressHUD.dismiss()
                            SVProgressHUD.showError(
                                withStatus: "Failed to update nickname"
                            )
                            SVProgressHUD.dismiss(withDelay: 1.5)
                        }
                    }
                }
            }
        } message: {
            Text("Please enter your new name")
                .foregroundColor(.white.opacity(0.8))
        }
        .alert("Avatar Upload Failed", isPresented: $showingAvatarUploadError) {
            Button("OK") {
                showingAvatarUploadError = false
                avatarUploadError = nil
            }
        } message: {
            if let error = avatarUploadError {
                Text(error)
            }
        }
    }

    private func uploadAvatar(image: UIImage) async {
        isUploadingAvatar = true
        avatarUploadError = nil

        do {
            SVProgressHUD.show()

            let tempURL = try saveImageToTempFile(image: image)
            guard
                let relativePath = await uploadViewModel.uploadAvatar(
                    filePath: tempURL.path
                )
            else {
                print("Failed to upload avatar")
                return
            }

            await authViewModel.completeProfile(
                nickname: userName,
                avatar: relativePath
            )

            if authViewModel.profileCompleted {
                userSessionViewModel.updateProfile(
                    nickname: nil,
                    avatar: relativePath
                )
                saveAvatarLocally(image: image)
                DispatchQueue.main.async {
                    SVProgressHUD.dismiss()
                    SVProgressHUD.showSuccess(withStatus: "Success")
                    SVProgressHUD.dismiss(withDelay: 1.5)
                    isUploadingAvatar = false
                }
                return
            }
        } catch {
            avatarUploadError = error.localizedDescription
            showingAvatarUploadError = true
        }

        DispatchQueue.main.async {
            SVProgressHUD.dismiss()
            SVProgressHUD.showError(withStatus: "Failed to upload avatar")
            SVProgressHUD.dismiss(withDelay: 1.5)
        }
        isUploadingAvatar = false
    }

    // 保存头像到本地存储
    private func saveAvatarLocally(image: UIImage) {
        guard let imageData = image.jpegData(compressionQuality: 0.8) else {
            return
        }

        let documentsPath = FileManager.default.urls(
            for: .documentDirectory,
            in: .userDomainMask
        ).first!
        let avatarPath = documentsPath.appendingPathComponent("user_avatar.jpg")

        do {
            try imageData.write(to: avatarPath)

            // 保存头像路径到UserDefaults（按UID隔离）
            if let uid = userSessionViewModel.userInfo?.uid {
                UserDefaults.standard.set(
                    avatarPath.path,
                    forKey: "userAvatarPath_\(uid)"
                )
            }
        } catch {
            return
        }
    }

    // 从本地存储加载头像
    private func loadSavedAvatar() {

        // 首先尝试从UserDefaults获取头像路径
        //        if let uid = sessionViewModel.userInfo?.uid,
        //           let avatarPath = UserDefaults.standard.string(forKey: "userAvatarPath_\(uid)"),
        //           let imageData = try? Data(contentsOf: URL(fileURLWithPath: avatarPath)),
        //           let image = UIImage(data: imageData) {
        //            currentAvatarImage = image
        //        } else {
        //            return
        //        }
    }

    // 清理本地头像文件
    private func clearLocalAvatar() {
        if let uid = userSessionViewModel.userInfo?.uid,
            let avatarPath = UserDefaults.standard.string(
                forKey: "userAvatarPath_\(uid)"
            )
        {
            try? FileManager.default.removeItem(atPath: avatarPath)
            UserDefaults.standard.removeObject(forKey: "userAvatarPath_\(uid)")
        }
    }

    private func saveImageToTempFile(image: UIImage) throws -> URL {
        guard let imageData = image.jpegData(compressionQuality: 0.8) else {
            throw NSError(
                domain: "ImageProcessing",
                code: -1,
                userInfo: [
                    NSLocalizedDescriptionKey: "Failed to convert image to JPEG"
                ]
            )
        }

        let tempDir = FileManager.default.temporaryDirectory
        let fileName = "avatar_\(UUID().uuidString).jpg"
        let fileURL = tempDir.appendingPathComponent(fileName)

        try imageData.write(to: fileURL)
        return fileURL
    }
}

// 自定义行视图
struct ProfileSettingsRow<RightContent: View>: View {
    let title: String
    let rowHeight: CGFloat  // 接收行高参数
    let action: () -> Void
    let rightContent: () -> RightContent

    init(
        title: String,
        rowHeight: CGFloat,  // 添加行高参数
        action: @escaping () -> Void,
        @ViewBuilder rightContent: @escaping () -> RightContent
    ) {
        self.title = title
        self.rowHeight = rowHeight
        self.action = action
        self.rightContent = rightContent
    }

    var body: some View {
        Button(action: action) {
            HStack(spacing: 16) {
                Text(title)
                    .font(.system(size: 16, weight: .medium))
                    .font(.system(size: 16, weight: .medium))
                    .foregroundColor(.white)
                    .frame(maxWidth: .infinity, alignment: .leading)

                rightContent()

                Image(systemName: "chevron.right")
                    .font(.system(size: 14))
                    .foregroundColor(.white.opacity(0.4))
            }
            .padding(.horizontal, 20)
            .frame(height: rowHeight)  // 使用指定行高
            .background(Color.white.opacity(0.05))
        }
        .buttonStyle(PlainButtonStyle())
    }
}

// 图片选择器包装器（保持不变）
struct ImagePicker: UIViewControllerRepresentable {
    @Binding var selectedImage: UIImage?
    @Environment(\.dismiss) var dismiss
    var sourceType: UIImagePickerController.SourceType

    func makeUIViewController(context: Context) -> UIImagePickerController {
        let picker = UIImagePickerController()
        picker.sourceType = sourceType
        picker.delegate = context.coordinator
        return picker
    }

    func updateUIViewController(
        _ uiViewController: UIImagePickerController,
        context: Context
    ) {}

    func makeCoordinator() -> Coordinator {
        Coordinator(self)
    }

    class Coordinator: NSObject, UIImagePickerControllerDelegate,
        UINavigationControllerDelegate
    {
        let parent: ImagePicker

        init(_ parent: ImagePicker) {
            self.parent = parent
        }

        func imagePickerController(
            _ picker: UIImagePickerController,
            didFinishPickingMediaWithInfo info: [UIImagePickerController
                .InfoKey: Any]
        ) {
            if let uiImage = info[.originalImage] as? UIImage {
                parent.selectedImage = uiImage
            }
            parent.dismiss()
        }

        func imagePickerControllerDidCancel(_ picker: UIImagePickerController) {
            parent.dismiss()
        }
    }
}

#Preview {
    ProfileView()
        .preferredColorScheme(.dark)
}
