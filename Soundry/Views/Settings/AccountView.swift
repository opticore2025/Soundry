import SwiftUI
import Factory

// MARK: - Constants
private enum Constants {
    static let animationDuration: Double = 0.3
    static let cornerRadius: CGFloat = 20
    static let buttonHeight: CGFloat = 48
    static let iconSize: CGFloat = 24
    static let logoSize: CGFloat = 64
    static let titleFontSize: CGFloat = 30
    static let subtitleFontSize: CGFloat = 16
    static let buttonFontSize: CGFloat = 16
    static let smallFontSize: CGFloat = 12
    static let spacing: CGFloat = 20
    static let smallSpacing: CGFloat = 16
    static let largeSpacing: CGFloat = 48
    static let mediumSpacing: CGFloat = 26
    static let bottomSpacing: CGFloat = 40
    static let overlayHeightRatio: CGFloat = 0.74
    static let transparentHeightRatio: CGFloat = 0.26
    static let maxOverlayHeight: CGFloat = 600
    static let backgroundOpacity: Double = 0.4
    static let disabledOpacity: Double = 0.5

    // MARK: - Custom Colors for Theme Consistency
    static let darkBackground: Color = Color(red: 0.15, green: 0.15, blue: 0.16) // 弹窗背景色
    static let primaryTextColor: Color = .white // 主要文本颜色
    static let secondaryTextColor: Color = .white.opacity(0.7) // 次要文本颜色，比纯灰色更亮，对比度更好
    static let destructiveColor: Color = .red // 危险操作（删除）的颜色
    static let buttonBackgroundColor: Color = .white.opacity(0.15) // 通用按钮背景色 (如取消按钮)
    static let textFieldBackgroundColor: Color = .white.opacity(0.1) // 输入框背景色
}

// Helper for specific corner radius (使底部弹窗只有顶部有圆角)
extension View {
    func cornerRadius(_ radius: CGFloat, corners: UIRectCorner) -> some View {
        clipShape(RoundedCorner(radius: radius, corners: corners))
    }
}

struct RoundedCorner: Shape {
    var radius: CGFloat = .infinity
    var corners: UIRectCorner = .allCorners

    func path(in rect: CGRect) -> Path {
        let path = UIBezierPath(roundedRect: rect, byRoundingCorners: corners, cornerRadii: CGSize(width: radius, height: radius))
        return Path(path.cgPath)
    }
}


struct AccountView: View {
    @State private var showingDeleteConfirmation = false
    @State private var isDeletingAccount = false // 新增：控制删除加载状态
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.userSessionViewModel) var sessionVM: UserSessionViewModel
    @InjectedObject(\.appState) var appState: AppState // 新增：注入 AppState
    @InjectedObject(\.authenticationApiViewModel) var authenVM : AuthenticationApiViewModel
    
    
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
                    
                    Text("Account")
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
                .background(Color.black)
            
                ScrollView {
                    VStack(spacing: 20) {
                        // 当前登录方式（左） + 当前登录账号（右）
                        AccountSettingsRow(title: currentLoginMethod()) {
                            Text(currentLoginAccount())
                                .font(.system(size: 16))
                                .foregroundColor(.white.opacity(0.85))
                                .frame(maxWidth: .infinity, alignment: .trailing)
                        }
                        //删除账号按钮
                        Button(action: {
                            showingDeleteConfirmation = true
                        }) {
                            Text("Delete Account")
                                .font(.system(size: 16, weight: .medium))
                                .foregroundColor(.red)
                                .frame(maxWidth: .infinity)
                                .padding(.vertical, 16)
                                .background(Color.red.opacity(0.1))
                                .cornerRadius(8)
                                .padding(.horizontal, 20)
                        }
                        .buttonStyle(PlainButtonStyle())
                    }
                    .padding(.top, 30)
                    .padding(.bottom, 30)
                }
            }
            
            // 删除确认弹窗
            BottomSheet(isPresented: showingDeleteConfirmation, onDismiss: {
                // 只有在不处于删除加载状态时才允许通过点击背景关闭弹窗
                if !isDeletingAccount {
                    showingDeleteConfirmation = false
                }
            }) {
                DeleteAccountConfirmationView(onCancel: {
                    showingDeleteConfirmation = false
                }, onConfirm: { // 更改为 onConfirm
                    Task {
                        isDeletingAccount = true // 开始加载
                        do{
                            await authenVM.deleteAccount()
                            print("task")
//                            try? await Task.sleep(for: .seconds(2)) // 模拟2秒延迟
                            sessionVM.logout()

                            // 2. 隐藏加载动画并关闭底部弹窗
                            isDeletingAccount = false
                            showingDeleteConfirmation = false

                            appState.currentTab = .home

                            // 4. 关闭当前的 AccountView
                            dismiss()
                        }
                    }
                })
            }
            // 全屏加载动画覆盖
            .overlay {
                if isDeletingAccount {
                    Color.black.opacity(0.7) // 更深的背景，突出加载动画
                        .ignoresSafeArea()
                    ProgressView("Deleting account...")
                        .progressViewStyle(CircularProgressViewStyle(tint: .white))
                        .foregroundColor(.white)
                        .padding(Constants.spacing)
                        .background(Constants.darkBackground) // 使用统一的深色背景
                        .cornerRadius(Constants.cornerRadius / 2) // 加载框的圆角
                }
            }
        }
    }

    @MainActor
    private func currentLoginMethod() -> String {
        if let email = sessionVM.userInfo?.email, !email.isEmpty {
            return "Email"
        }
        return "Apple"
    }

    @MainActor
    private func currentLoginAccount() -> String {
        // 邮箱登录显示邮箱；Apple 登录可显示昵称或占位
        if let email = sessionVM.userInfo?.email, !email.isEmpty {
            return email
        }
        // 若无邮箱，显示昵称或占位说明
        if let name = sessionVM.userInfo?.nickname, !name.isEmpty {
            return name
        }
        return "Logged in"
    }
}

// 账户设置行组件（支持交互状态）
struct AccountSettingsRow<RightContent: View>: View {
    let title: String
    let isInteractive: Bool // 是否可点击
    let action: () -> Void
    let rightContent: () -> RightContent
    
    // 简化初始化：默认不可交互（用于不需要点击的行）
    init(
        title: String,
        isInteractive: Bool = false,
        action: @escaping () -> Void = {},
        @ViewBuilder rightContent: @escaping () -> RightContent
    ) {
        self.title = title
        self.isInteractive = isInteractive
        self.action = action
        self.rightContent = rightContent
    }
    
    var body: some View {
        Button(action: action) {
            HStack(spacing: 16) {
                Text(title)
                    .font(.system(size: 16, weight: .medium))
                    .foregroundColor(.white)
                    .frame(maxWidth: .infinity, alignment: .leading)
                
                rightContent()
                
                Image(systemName: "chevron.right")
                    .font(.system(size: 14))
                    .foregroundColor(isInteractive ? .white.opacity(0.8) : .white.opacity(0.4))
            }
            .padding(.horizontal, 20)
            .padding(.vertical, 16)
            .background(Color.white.opacity(0.05))
        }
        .buttonStyle(PlainButtonStyle())
        .disabled(!isInteractive) // 根据交互状态禁用按钮
    }
}

// 模拟谷歌登录网页视图
struct LoginWebView: View {
    let title: String
    @Environment(\.dismiss) var dismiss
    
    var body: some View {
        VStack {
            HStack {
                Button("Cancel") { dismiss() }
                    .foregroundColor(.white)
                Spacer()
                Text(title)
                    .font(.headline)
                    .foregroundColor(.white)
                Spacer()
                Button("Done") { dismiss() }
                    .foregroundColor(.white)
            }
            .padding()
            
            Spacer()
            Text("\(title) Page")
                .foregroundColor(.white)
            Spacer()
        }
        .background(Color.black)
    }
}

// 模拟苹果登录视图
struct AppleLoginView: View {
    @Environment(\.dismiss) var dismiss
    
    var body: some View {
        VStack {
            HStack {
                Button("Cancel") { dismiss() }
                    .foregroundColor(.white)
                Spacer()
                Text("Apple Login")
                    .font(.headline)
                    .foregroundColor(.white)
                Spacer()
            }
            .padding()
            
            Spacer()
            Text("Apple Login Interface")
                .foregroundColor(.white)
            Spacer()
        }
        .background(Color.black)
    }
}

// 删除账户确认弹窗
struct DeleteAccountConfirmationView: View {
    @State private var inputText = ""
    @State private var isDeleteEnabled = false
    let onCancel: () -> Void
    let onConfirm: () -> Void // 更改为 onConfirm
    
    private let requiredText = "delete account"
    
    var body: some View {
        VStack(spacing: Constants.spacing) { // 使用常量间距
            // 删除图标
            Image(systemName: "trash")
                .font(.system(size: Constants.logoSize / 2, weight: .bold)) // 使用常量定义图标大小
                .foregroundColor(Constants.destructiveColor)
            
            // 三个文字区域
            VStack(spacing: Constants.smallSpacing) { // 使用常量间距
                Text("Are you sure you want to delete your account?")
                    .font(.system(size: Constants.subtitleFontSize + 2, weight: .semibold)) // 略大于副标题的字体大小
                    .foregroundColor(Constants.primaryTextColor)
                    .multilineTextAlignment(.center)
                
                Text("If you delete your account, all your data will be removed, including all the songs you have created.") // 修正了 "yu" -> "you" 的拼写错误
                    .font(.system(size: Constants.smallFontSize + 2)) // 略大于小字体的字体大小
                    .foregroundColor(Constants.secondaryTextColor) // 使用次要文本颜色，对比度更好
                    .multilineTextAlignment(.center)
                
                Text("""
                    If you wish to continue with your account deletion,
                    please type the words \"delete account\" below.
                    Then click \"Delete\" button.
                    """)
                    .font(.system(size: Constants.smallFontSize + 2)) // 略大于小字体的字体大小
                    .foregroundColor(Constants.secondaryTextColor) // 使用次要文本颜色，对比度更好
                    .multilineTextAlignment(.center)
            }
            
            // 输入框
            TextField("", text: $inputText, prompt: Text("Type \"delete account\" to confirm").foregroundColor(.gray)) // 改进提示文本，并设置颜色
                .padding(.vertical, 12) // 增加垂直内边距
                .padding(.horizontal, 16) // 增加水平内边距
                .background(Constants.textFieldBackgroundColor) // 自定义背景色
                .cornerRadius(8) // 圆角
                .foregroundColor(Constants.primaryTextColor) // 输入文本颜色
                .accentColor(Constants.primaryTextColor) // 光标颜色
                .autocorrectionDisabled() // 禁用自动纠正，因为需要精确输入
                .textInputAutocapitalization(.never) // 禁用首字母大写
                .padding(.horizontal, Constants.spacing) // 使用常量水平内边距
                .onChange(of: inputText) { newValue in
                    isDeleteEnabled = newValue.lowercased() == requiredText
                }
            
            // 按钮区域
            HStack(spacing: Constants.smallSpacing) { // 使用常量间距
                // 取消按钮
                Button(action: onCancel) {
                    Text("Cancel")
                        .font(.system(size: Constants.buttonFontSize, weight: .medium))
                        .foregroundColor(Constants.primaryTextColor)
                        .frame(maxWidth: .infinity)
                        .padding(.vertical, Constants.smallSpacing) // 使用常量垂直内边距
                        .background(Constants.buttonBackgroundColor) // 使用通用按钮背景色
                        .cornerRadius(8)
                }
                
                // 删除按钮
                Button(action: onConfirm) { // 更改为 onConfirm
                    Text("Delete")
                        .font(.system(size: Constants.buttonFontSize, weight: .medium))
                        .foregroundColor(Constants.primaryTextColor)
                        .frame(maxWidth: .infinity)
                        .padding(.vertical, Constants.smallSpacing) // 使用常量垂直内边距
                        .background(isDeleteEnabled ? Constants.destructiveColor : Constants.destructiveColor.opacity(Constants.disabledOpacity)) // 使用危险色和禁用透明度
                        .cornerRadius(8)
                }
                .disabled(!isDeleteEnabled)
            }
            .padding(.horizontal, Constants.spacing) // 使用常量水平内边距
        }
        .padding(.vertical, Constants.bottomSpacing) 
    }
}

#Preview {
    AccountView()
        .preferredColorScheme(.dark)
}
