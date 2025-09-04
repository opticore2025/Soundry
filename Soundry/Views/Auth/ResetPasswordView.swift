import SwiftUI
import Factory
import SVProgressHUD

struct ResetPasswordView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel: UserSessionViewModel
    @InjectedObject(\.authenticationApiViewModel) var authorizationApiViewModel: AuthenticationApiViewModel
    
    @State private var newPassword: String = ""
    @State private var confirmNewPassword: String = ""
    @State private var showNewPassword = false
    @State private var showConfirmPassword = false
    
    var canSubmit: Bool {
        return !newPassword.isEmpty && !confirmNewPassword.isEmpty
    }
    
    var body: some View {
        ZStack{
            Color.black.ignoresSafeArea()
            VStack{
                //底部按钮返回区域
                BackButtonView(action: appState.goBack)
                //内容区域
                GeometryReader{ _ in
                    ScrollView(.vertical,showsIndicators: false){
                        VStack(spacing: 0){
                            VStack{
                                HStack{
                                    Text("Create new password")
                                        .font(.system(size: 30,weight: .bold))
                                        .foregroundColor(.white)
                                    Spacer()
                                }
                            }
                            .padding(.horizontal, 24)
                            .padding(.top, 48)
                            .padding(.bottom, 26)
                            
                            // 新密码输入
                            VStack(spacing: 4) {
                                ResetPasswordInputField(
                                    password: $newPassword,
                                    showPassword: $showNewPassword
                                )
                                
                                HStack {
                                    Text(" ")
                                        .font(.system(size: 12))
                                        .foregroundColor(.red)
                                    Spacer()
                                }
                                .padding(.horizontal, 24)
                                .padding(.bottom, 15)
                            }
                            
                            // 确认密码输入
                            VStack(spacing: 4) {
                                ConfirmPasswordInputField(
                                    password: $confirmNewPassword,
                                    showPassword: $showConfirmPassword
                                )
                                
                                HStack {
                                    Text(" ")
                                        .font(.system(size: 12))
                                        .foregroundColor(.red)
                                    Spacer()
                                }
                                .padding(.horizontal, 24)
                                .padding(.bottom, 15)
                            }
                            
                            // 提交按钮
                            Button {
                                Task{
                                    guard let email = appState.verificationEmail else { return }
                                    await authorizationApiViewModel.resetEmailPassword(email: email, newPassword: confirmNewPassword)
                                    
                                    //验证成功后进行登陆界面
                                    if authorizationApiViewModel.isEmailResetPasswdSuccess{
                                        appState.navigateToEmailLogin()
                                    }else if !authorizationApiViewModel.isEmailResetPasswdSuccess{
                                        DispatchQueue.main.async {
                                            SVProgressHUD.showError(withStatus: authorizationApiViewModel.errorMessage)
                                            SVProgressHUD.dismiss(withDelay: 2)
                                            
                                        }
                                    }
                                }
                                
                                
                            } label: {
                                ZStack {
                                    Text("Continue")
                                        .font(.system(size: 16, weight: .semibold))
                                        .foregroundColor(.white)
                                        .opacity(authorizationApiViewModel.isLoading ? 0 : 1)
                                    if authorizationApiViewModel.isLoading {
                                        ProgressView()
                                            .progressViewStyle(CircularProgressViewStyle(tint: .white))
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
                                .shadow(
                                    color: Color.purple.opacity(0.5),
                                    radius: 15,
                                    x: 0,
                                    y: 4
                                )
                            }
                            .disabled(!canSubmit)
                            .opacity(canSubmit ? 1.0 : 0.5)
                            .padding(.horizontal, 24)
                            
                            Spacer(minLength: 40)
                        }
                    }
                }
            }
        }

    }
}

#Preview {
    ResetPasswordView()
}
