import SwiftUI
import Factory
import AuthenticationServices

// MARK: - Login View
struct LoginView: View {
    @InjectedObject(\.meViewState) var meviewstate: MeViewState
    @InjectedObject(\.appState) var appstate: AppState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel: UserSessionViewModel
    @InjectedObject(\.authenticationApiViewModel) var authorizationApiViewModel: AuthenticationApiViewModel
    @State private var isAgreed = false
    @State private var showAgreementPrompt = false
    @State private var showToast = false
    @State private var toastMessage = ""
    @State private var targetURL: URL?
    @State private var showingURLError = false
    @State private var showingSafari = false
        
    var body: some View {
        VStack(spacing: 0) {
            // 顶部返回按钮区域
            BackButtonView(action: appstate.goBack)
            
            // 内容区域
            ScrollView(.vertical, showsIndicators: false) {
                VStack(spacing: 0) {
                    // Logo和标题
                    LogoTitleView()
                    
                    // 登录按钮
                    LoginButtonsView(
                        isAgreed: $isAgreed,
                        isLoading: authorizationApiViewModel.isLoading, // 传递加载状态
                        onEmailLogin: {
                            if isAgreed {
                                appstate.navigateToEmailLogin()
                            } else {
                                showAgreementAlert()
                            }
                        },
                        onEmailSignup: {
                            if isAgreed {
                                appstate.navigateToEmailSignup()
                            } else {
                                showAgreementAlert()
                            }
                        },
                        onAppleSignIn: { result in
                            handleAppleSignInResult(result)
                        },
                        onRequireAgreement: {
                            showAgreementAlert()
                        }
                    )
                    
                    // 协议勾选区域
                    agreementSection
                        .padding(.horizontal, 24)
                    
                    Spacer(minLength: 40)
                }
            }
        }
        .onChange(of: userSessionViewModel.isLoggedIn) { isLoggedIn in
            if isLoggedIn {
                showToast(message: "Login successful")
                // 延迟返回，让用户看到成功提示
                DispatchQueue.main.asyncAfter(deadline: .now() + 1.5) {
                    appstate.goBack()
                }
            }
        }
        .onChange(of: authorizationApiViewModel.errorMessage) { errorMsg in
            if let msg = errorMsg, !msg.isEmpty {
                showToast(message: msg)
            }
        }
        .alert("Please agree to the User Agreement & Privacy Policy", isPresented: $showAgreementPrompt) {
            Button("Agree") { isAgreed = true }
            Button("Cancel", role: .cancel) {}
        } message: {
            Text("To continue, please agree to the User Agreement and Privacy Policy.")
        }
        // 登录结果提示弹窗
        .toast(isPresented: $showToast, message: toastMessage)
    }
    
    // 处理Apple登录结果
    private func handleAppleSignInResult(_ result: Result<ASAuthorization, Error>) {
        guard isAgreed else {
            showAgreementAlert()
            return
        }
        
        switch result {
        case .success(let authorization):
            guard let cred = authorization.credential as? ASAuthorizationAppleIDCredential else {
                showToast(message: "Invalid Apple ID credential")
                return
            }
            
            let appleUserId = cred.user
            let identityTokenString = cred.identityToken.flatMap { String(data: $0, encoding: .utf8) }
            
            guard let identityTokenString = identityTokenString else {
                print("Failed to decode identity token")
                return
            }
            
            // 调用后端苹果登录接口
            Task {
                await authorizationApiViewModel.loginWithApple(
                    appleUserId: appleUserId,
                    identityToken: identityTokenString
                )
            }
            
        case .failure(let error):
            let errorMsg = "Apple Sign In failed: \(error.localizedDescription)"
            showToast(message: errorMsg)
            print(errorMsg)
        }
    }
    
    // MARK: - 协议区域
    private var agreementSection: some View {
        HStack(alignment: .top, spacing: 8) {
            Button(action: {
                isAgreed.toggle()
            }) {
                ZStack {
                    RoundedRectangle(cornerRadius: 3)
                        .stroke(Color.white.opacity(0.7), lineWidth: 1)
                        .frame(width: 16, height: 16)
                    
                    if isAgreed {
                        Image(systemName: "checkmark")
                            .font(.system(size: 12, weight: .bold))
                            .foregroundColor(.white)
                    }
                }
            }
            .padding(.top, 2)
            
            HStack(spacing: 0) {
                Text("Read and agree to the ")
                    .font(.system(size: 12))
                    .foregroundColor(.white.opacity(0.7))
                
                Button("User Agreement") {
                    openUserAgreement()
                }
                .font(.system(size: 12))
                .foregroundColor(.blue)
                .underline()
                
                Text(" & ")
                    .font(.system(size: 12))
                    .foregroundColor(.white.opacity(0.7))
                
                Button("Privacy Policy") {
                    openPrivacyPolicy()
                }
                .font(.system(size: 12))
                .foregroundColor(.blue)
                .underline()
            }
            .padding(.top, 2)
        }
        .padding(.bottom, 20)
    }
    
    // MARK: - 辅助方法
    private func showAgreementAlert() {
        showAgreementPrompt = true
    }
    
    private func showToast(message: String) {
        toastMessage = message
        showToast = true
        DispatchQueue.main.asyncAfter(deadline: .now() + 2) {
            showToast = false
        }
    }
    
    // MARK: - 打开协议和隐私政策的方法
    private func openUserAgreement() {
        // 打开用户协议URL
        if let url = URL(string: "https://giant-flyingfish-c30.notion.site/Soundry-User-Agreement-254270f6474f8031b4e7d59223212c2b?pvs=73") {
            UIApplication.shared.open(url)
        }
    }

    private func openPrivacyPolicy() {
        // 打开隐私政策URL
        if let url = URL(string: "https://giant-flyingfish-c30.notion.site/Soundry-Privacy-Policy-254270f6474f80158ef4ed0805af3ff2?pvs=73") {
            UIApplication.shared.open(url)
        }
    }
}

// 登录按钮视图（添加加载状态）
struct LoginButtonsView: View {
    @Binding var isAgreed: Bool
    let isLoading: Bool // 新增：加载状态
    let onEmailLogin: () -> Void
    let onEmailSignup: () -> Void
    let onAppleSignIn: (Result<ASAuthorization, Error>) -> Void
    let onRequireAgreement: () -> Void
    
    var body: some View {
        VStack(spacing: 16) {
            // Apple 登录（仅iOS）
#if os(iOS)
            ZStack {
                // 原生Apple登录按钮
                SignInWithAppleButton(
                    onRequest: { request in
                        request.requestedScopes = [.fullName, .email]
                    },
                    onCompletion: onAppleSignIn
                )
                .signInWithAppleButtonStyle(.white)
                .frame(height: 48)
                .cornerRadius(8)
                .disabled(isLoading) // 加载中禁用
                
                // 加载指示器
                if isLoading {
                    ProgressView()
                        .progressViewStyle(CircularProgressViewStyle(tint: .white))
                }
                
                // 未同意协议时的拦截层
                if !isAgreed && !isLoading {
                    Button(action: onRequireAgreement) {
                        Color.clear
                    }
                    .frame(height: 48)
                    .cornerRadius(8)
                    .contentShape(RoundedRectangle(cornerRadius: 8))
                }
            }
            .opacity(isAgreed ? 1.0 : 0.95)
#endif
        }
        .padding(.horizontal, 24)
        
        // 分隔线
        HStack {
            Rectangle()
                .fill(Color.white.opacity(0.1))
                .frame(height: 1)
            
            Text("OR")
                .font(.system(size: 14))
                .foregroundColor(.white.opacity(0.5))
                .padding(.horizontal, 12)
            
            Rectangle()
                .fill(Color.white.opacity(0.1))
                .frame(height: 1)
        }
        .padding(.vertical, 24)
        .padding(.horizontal, 24)
        
        // 邮箱登录按钮
        Button(action: {
            if isAgreed{
                onEmailLogin()
            }else{
                onRequireAgreement()
            }
        }) {
            if isLoading {
                ProgressView()
                    .progressViewStyle(CircularProgressViewStyle(tint: .white))
            } else {
                Text("Login with Email")
                    .font(.system(size: 16, weight: .semibold))
                    .foregroundColor(.white)
            }
        }
        .frame(maxWidth: .infinity)
        .frame(height: 48)
        .background(
            LinearGradient(
                colors: [Color.purple, Color.blue],
                startPoint: .leading,
                endPoint: .trailing
            )
        )
        .cornerRadius(8)
        .shadow(color: .purple.opacity(0.5), radius: 8, x: 0, y: 4)
        .padding(.horizontal, 24)
        
        // 注册链接
        HStack {
            Text("Don't have an account yet?")
                .font(.system(size: 12))
                .foregroundColor(.white.opacity(0.7))
            
            Button(action: onEmailSignup) {
                Text("Sign up")
                    .font(.system(size: 12))
                    .foregroundColor(.white)
                    .underline()
            }
        }
        .padding(.top, 14)
        .padding(.horizontal, 24)
    }
    
}

// 扩展：简易Toast提示
extension View {
    func toast(isPresented: Binding<Bool>, message: String) -> some View {
        modifier(ToastModifier(isPresented: isPresented, message: message))
    }
}

struct ToastModifier: ViewModifier {
    @Binding var isPresented: Bool
    let message: String
    
    func body(content: Content) -> some View {
        ZStack {
            content
            if isPresented {
                Text(message)
                    .padding(12)
                    .background(Color.black.opacity(0.8))
                    .foregroundColor(.white)
                    .cornerRadius(8)
                    .transition(.opacity.combined(with: .scale))
            }
        }
    }
}

// 其他视图保持不变（LogoTitleView等）
struct LogoTitleView: View {
    var body: some View {
        VStack(spacing: 16) {
            Image("Logo")
                .resizable()
                .aspectRatio(contentMode: .fit)
                .frame(width: 64, height: 64)
                .cornerRadius(16)
            
            Text("Soundry")
                .font(.system(size: 30, weight: .bold))
                .foregroundColor(.white)
            
            Text("Start your AI music journey.")
                .font(.system(size: 16))
                .foregroundColor(.white.opacity(0.7))
        }
        .padding(.top, 48)
        .padding(.bottom, 26)
    }
}

// MARK: - 预览
#Preview {
    LoginView()
        .preferredColorScheme(.dark)
}
    
