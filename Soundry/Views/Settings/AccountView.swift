import SwiftUI
import Factory

// ... (Your existing View extension and RoundedCorner struct remain unchanged) ...

struct AccountView: View {
    @State private var showingDeleteConfirmation = false
    @State private var isDeletingAccount = false // 控制删除加载状态
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.userSessionViewModel) var sessionVM: UserSessionViewModel
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.authenticationApiViewModel) var authenVM: AuthenticationApiViewModel
    
    
    var body: some View {
        ZStack {
            Color.black
                .ignoresSafeArea()
            
            VStack(spacing: 0) {
                // 顶部导航栏 (代码不变)
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
                        // 当前登录方式 (代码不变)
                        AccountSettingsRow(title: currentLoginMethod()) {
                            Text(currentLoginAccount())
                                .font(.system(size: 16))
                                .foregroundColor(.white.opacity(0.85))
                                .frame(maxWidth: .infinity, alignment: .trailing)
                        }
                        //删除账号按钮 (代码不变)
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
            // --- 核心修改点 ---
            // 1. 使用 .sheet 修饰符来代替自定义的 BottomSheet
            .sheet(isPresented: $showingDeleteConfirmation) {
                // 2. 将 DeleteAccountConfirmationView作为 sheet 的内容
                DeleteAccountConfirmationView(onCancel: {
                    showingDeleteConfirmation = false
                }, onConfirm: {
                    Task {
                        isDeletingAccount = true
                        // 先关闭弹窗，让用户看到主界面上的加载动画
                        showingDeleteConfirmation = false
                        
                        do {
                            await authenVM.deleteAccount()
                            sessionVM.logout()
                            
                            isDeletingAccount = false
                            appState.currentTab = .home
                            dismiss()
                        }
                    }
                })
                // 3. 设置固定的高度为 600
                .presentationDetents([.height(550)])
                // (可选) 显示顶部的拖拽指示器，增加原生感
                .presentationDragIndicator(.hidden)
                .interactiveDismissDisabled(true)//禁用交互手势
                // 4. 为 sheet 内容设置背景色以匹配 App 风格
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
            }
        }
        // 5. 将加载动画的 overlay 移到 ZStack 上，确保它能覆盖所有内容
        .overlay {
            if isDeletingAccount {
                Color.black.opacity(0.7)
                    .ignoresSafeArea()
                ProgressView("Deleting account...")
                    .progressViewStyle(CircularProgressViewStyle(tint: .white))
                    .foregroundColor(.white)
                    .padding(20)
                    .background(Color(red:0.15,green: 0.15,blue: 0.16))
                    .cornerRadius(10)
            }
        }
        .navigationBarHidden(true)
        .navigationBarBackButtonHidden(true)
    }

    // ... (currentLoginMethod 和 currentLoginAccount 方法保持不变) ...
    @MainActor
    private func currentLoginMethod() -> String {
        if let email = sessionVM.userInfo?.email, !email.isEmpty {
            return "Email"
        }
        return "Apple"
    }

    @MainActor
    private func currentLoginAccount() -> String {
        if let email = sessionVM.userInfo?.email, !email.isEmpty {
            return email
        }
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
//    @State private var isKeyboardVisible = false // 跟踪键盘是否显示
    let onCancel: () -> Void
    let onConfirm: () -> Void
    
    private let requiredText = "delete account"
    
    var body: some View {
        VStack {
            // 删除图标 - 键盘显示时隐藏
//            if !isKeyboardVisible {
                Image(systemName: "trash")
                    .font(.system(size: 60))
                    .foregroundColor(.red)
                
                Spacer()
                    .frame(height: 20)
//            }
            
            // 文本区域 - 根据键盘状态显示不同内容
            VStack(spacing: 18) {
                // 第一行文本 - 键盘显示时隐藏
//                if !isKeyboardVisible {
                    Text("Are you sure you want to delete your account?")
                        .font(.system(size: 22))
                        .foregroundColor(.white)
                        .multilineTextAlignment(.center)
//                }
                
                // 第二行文本 - 键盘显示时隐藏
//                if !isKeyboardVisible {
                    Text("If you delete your account, all your data will be removed, including all the songs you have created.")
                        .font(.system(size: 20))
                        .foregroundColor(.white.opacity(0.85))
                        .multilineTextAlignment(.center)
//                }
                
                // 第三行文本 - 始终显示
                Text("If you wish to continue with your account deletion, please type the words \"delete account\" below. Then click \"Delete\" button.")
                    .font(.system(size: 18))
                    .foregroundColor(.white.opacity(0.7))
                    .multilineTextAlignment(.center)
            }
            .padding(.horizontal)
            
            // 输入框
            TextField("", text: $inputText, prompt: Text("Enter").foregroundColor(.gray))
                .padding(.vertical, 12)
                .padding(.horizontal, 16)
                .background(.white.opacity(0.1))
                .cornerRadius(8)
                .foregroundColor(.white)
                .accentColor(.white)
                .autocorrectionDisabled()
                .textInputAutocapitalization(.never)
                .padding(.horizontal, 20)
                .onChange(of: inputText) { newValue in
                    isDeleteEnabled = newValue.lowercased() == requiredText
                }
            
            // 按钮区域
            HStack(spacing: 16) {
                // 取消按钮
                Button(action: onCancel) {
                    Text("Cancel")
                        .font(.system(size: 16, weight: .medium))
                        .foregroundColor(.white)
                        .frame(maxWidth: .infinity)
                        .padding(.vertical, 16)
                        .background(.white.opacity(0.15))
                        .cornerRadius(8)
                }
                
                // 删除按钮
                Button(action: onConfirm) {
                    Text("Delete")
                        .font(.system(size: 16, weight: .medium))
                        .foregroundColor(.white)
                        .frame(maxWidth: .infinity)
                        .padding(.vertical, 16)
                        .background(isDeleteEnabled ? .red : .red.opacity(0.5))
                        .cornerRadius(8)
                }
                .disabled(!isDeleteEnabled)
            }
            .padding(.horizontal, 20)
            .padding(.top, 20)
        }
        .frame(maxHeight: .infinity)
        // 监听键盘通知
//        .onAppear {
//            NotificationCenter.default.addObserver(forName: UIResponder.keyboardWillShowNotification, object: nil, queue: .main) { _ in
////                withAnimation {
////                    isKeyboardVisible = true
////                }
//            }
//            
//            NotificationCenter.default.addObserver(forName: UIResponder.keyboardWillHideNotification, object: nil, queue: .main) { _ in
//                withAnimation {
//                    isKeyboardVisible = false
//                }
//            }
//        }
//        .onDisappear {
//            // 移除通知监听
//            NotificationCenter.default.removeObserver(self)
//        }
    }
}


#Preview {
    AccountView()
        .preferredColorScheme(.dark)
}
