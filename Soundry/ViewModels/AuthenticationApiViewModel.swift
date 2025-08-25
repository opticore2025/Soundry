import Factory
import Foundation
import APIClient

@MainActor
class AuthenticationApiViewModel: ObservableObject {
    private let authenticationApi: AuthenticationApi

    @Injected(\.userSessionViewModel) private var userSessionViewModel:
        UserSessionViewModel

    @Published var isLoading = false
    @Published var errorMessage: String?
    @Published var isLoginSuccess: Bool = false
    @Published var isRegisterSuccess: Bool = false
    @Published var isEmailCodeSent = false
    @Published var isEmailCodeVerified = false
    @Published var isEmailResetPasswdSuccess = false
    @Published var profileCompleted = false
    @Published var accountDeleted = false

    init(client: Ktor_client_coreHttpClient) {
        self.authenticationApi = AuthenticationApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }

    // MARK: - 邮箱登录
    func loginWithEmail(email: String, password: String) async {
        isLoading = true
        isLoginSuccess = false
        errorMessage = nil

        do {
            let loginRequest = PostLoginHandleRequest(
                email: email,
                password: password,
                loginFrom: PostLoginHandleRequest.LoginFrom.email.value,
                userInfo: nil
            )
            

            let response = try await authenticationApi.postLoginHandle(
                postLoginHandleRequest: loginRequest
            )
            
            let body = try await response.body()
            
            guard let data = body.data else {
                isLoginSuccess = false
                errorMessage = body.msg ?? "Login failed"
                isLoading = false
                print("Login failed: \(body)")
                return
            }

            let userData = UserInfo(
                uid: data.userInfo?.uid as! Int32,
                email: data.userInfo?.email ?? "",
                nickname: data.userInfo?.nickname ?? "",
                avatar: data.userInfo?.avatar ?? "",
                balance: data.userInfo?.balance?.int32Value ?? 0
            )
            let authData = AuthorizationInfo(
                accessToken: data.token ?? "",
                refreshToken: nil
            )
            userSessionViewModel.handleLoginSuccess(
                userInfo: userData,
                authData: authData
            )
            
            isLoginSuccess = true
            print("Email login successful")
        } catch {
            errorMessage = "Login error: \(error.localizedDescription)"
            print("Login error: \(error)")
        }

        isLoading = false
    }

    // MARK: - Apple登录
    func loginWithApple(appleUserId: String, identityToken: String) async {
        isLoading = true
        isLoginSuccess = false
        errorMessage = nil

        do {
            let loginRequest = PostLoginHandleRequest(
                email: "",
                password: "",
                loginFrom: PostLoginHandleRequest.LoginFrom.apple.value,
                userInfo: AppleUserInfo(
                    identityToken: identityToken,
                    appleUserId: appleUserId
                )
            )

            let response = try await authenticationApi.postLoginHandle(
                postLoginHandleRequest: loginRequest
            )

            let body = try await response.body()
            
            guard let data = body.data else {
                isLoginSuccess = false
                errorMessage = body.msg ?? "Apple login failed"
                isLoading = false
                print("Apple login failed: \(body)")
                return
            }
            
            let userData = UserInfo(
                uid: data.userInfo?.uid as! Int32,
                email: data.userInfo?.email ?? "",
                nickname: data.userInfo?.nickname ?? "",
                avatar: data.userInfo?.avatar ?? "",
                balance: data.userInfo?.balance?.int32Value ?? 0
            )
            let authData = AuthorizationInfo(
                accessToken: data.token ?? "",
                refreshToken: nil
            )
            userSessionViewModel.handleLoginSuccess(
                userInfo: userData,
                authData: authData
            )
            
            isLoginSuccess = true
            print("Apple login successful")
        } catch {
            errorMessage = "Apple login error: \(error.localizedDescription)"
            print("Apple login error: \(error)")
        }

        isLoading = false
    }

    // MARK: - 邮箱注册
    func registerWithEmail(email: String, password: String) async {
        isLoading = true
        errorMessage = nil

        do {
            let registerRequest = PostLoginRegisterRequest(
                email: email,
                password: password,
                registerFrom: PostLoginRegisterRequest.RegisterFrom.email.value,
                channel: nil,
                idToken: nil,
                appleUserId: nil,
                userInfo: nil,
                identityToken: nil
            )

            let response = try await authenticationApi.postLoginRegister(
                postLoginRegisterRequest: registerRequest
            )
            
            let body = try await response.body()
            
            guard let data = body.data, body.ok == 1 else {
                isLoading = false
                errorMessage = body.msg ?? "Register error"
                isRegisterSuccess = false
                print("Register error: \(body)")
                return
            }

            let userData = UserInfo(
                uid: data.userInfo?.uid as! Int32,
                email: data.userInfo?.email ?? "",
                nickname: data.userInfo?.nickname ?? "",
                avatar: data.userInfo?.avatar ?? "",
                balance: data.userInfo?.balance?.int32Value ?? 0
            )
            let authData = AuthorizationInfo(
                accessToken: data.token ?? "",
                refreshToken: nil
            )
            userSessionViewModel.handleLoginSuccess(
                userInfo: userData,
                authData: authData
            )
            
            isRegisterSuccess = true
            print("Email register successful")
        } catch {
            errorMessage = "Register error: \(error.localizedDescription)"
            print("Register error: \(error)")
        }

        isLoading = false
    }

    // MARK: - 发送邮箱验证码
    func sendEmailCode(email: String, type: PostEmailSendCodeRequest.Type_)
        async
    {
        isLoading = true
        errorMessage = nil
        isEmailCodeSent = false

        do {
            let sendCodeRequest = PostEmailSendCodeRequest(
                type: type.value,
                email: email
            )

            let response = try await authenticationApi.postEmailSendCode(
                postEmailSendCodeRequest: sendCodeRequest
            )
            
            let body = try await response.body()
            
            guard body.ok == 1 else {
                isEmailCodeSent = false
                errorMessage = body.msg ?? "Code send error"
                isLoading = false
                print("Send email code error: \(body)")
                return
            }

            isEmailCodeSent = true
            print("Code send successful")
        } catch {
            errorMessage = "Code send error: \(error.localizedDescription)"
            print("Send email code error: \(error)")
        }

        isLoading = false
    }

    // MARK: - 验证邮箱验证码
    func verifyEmailCode(
        email: String,
        code: String,
        type: PostEmailVerifyCodeRequest.FromType
    ) async {
        isLoading = true
        errorMessage = nil
        isEmailCodeVerified = false

        do {
            let verifyCodeRequest = PostEmailVerifyCodeRequest(
                code: code,
                email: email,
                fromType: type.value
            )

            let response = try await authenticationApi.postEmailVerifyCode(
                postEmailVerifyCodeRequest: verifyCodeRequest
            )
            
            let body = try await response.body()
            
            guard body.ok == 1 else {
                isEmailCodeVerified = false
                errorMessage = body.msg ?? "Code verification error"
                isLoading = false
                print("Verify email code error: \(body)")
                return
            }
            
            isEmailCodeVerified = true
            print("Code send successful")
        } catch {
            isEmailCodeVerified = false
            errorMessage = "code error: \(error.localizedDescription)"
            print("Verify email code error: \(error)")
        }

        isLoading = false
    }

    // MARK: - 重置邮箱密码
    func resetEmailPassword(email: String, newPassword: String, code: String)
        async
    {
        isLoading = true
        isEmailResetPasswdSuccess = false
        errorMessage = nil

        do {
            let resetPasswordRequest = PostEmailResetPasswordRequest(
                email: email,
                password: newPassword
            )

            let response = try await authenticationApi.postEmailResetPassword(
                postEmailResetPasswordRequest: resetPasswordRequest
            )
            
            let body = try await response.body()
            
            guard body.ok == 1 else {
                isEmailResetPasswdSuccess = false
                errorMessage = body.msg ?? "Password reset error"
                isLoading = false
                print("Reset password error: \(body)")
                return
            }

            isEmailResetPasswdSuccess = true
            print("Password reset successful")
        } catch {
            isEmailResetPasswdSuccess = false
            errorMessage = "Password rest error: \(error.localizedDescription)"
            print("Reset password error: \(error)")
        }

        isLoading = false
    }

    // MARK: - 完善用户信息
    func completeProfile(nickname: String, avatar: String? = nil) async {
        isLoading = true
        errorMessage = nil
        profileCompleted = false

        do {
            let completeProfileRequest = PostLoginCompleteProfileRequest(
                nickname: nickname,
                avatar: avatar
            )

            let response = try await authenticationApi.postLoginCompleteProfile(
                postLoginCompleteProfileRequest: completeProfileRequest
            )
            
            let body = try await response.body()
            
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "Edit user profile error, \(response)"
                profileCompleted = false
                isLoading = false
                return
            }
            
            print("Edit user profile successful: \(data)")
            profileCompleted = true
            userSessionViewModel.updateProfile(nickname: nickname, avatar: avatar)
        } catch {
            profileCompleted = false
            errorMessage = "Edit user profile error: \(error.localizedDescription)"
            print("Edit user profile error: \(error)")
        }

        isLoading = false
    }
    
    func deleteAccount() async {
        isLoading = true
        errorMessage = nil
        accountDeleted = false

        do {
            let response = try await authenticationApi.postDeleteAccount()
            
            let body = try await response.body()
            print(body)
            guard body.ok == 1 else {
                errorMessage = "Edit user profile error, \(response)"
                accountDeleted = false
                isLoading = false
                print("account deleted failed")
                return
            }
            print("account deleted successfully")
            accountDeleted = true
         } catch {
            accountDeleted = false
            errorMessage = "Edit user profile error: \(error.localizedDescription)"
        }

        isLoading = false
    }

    func clearAllData() {
        isLoading = false
        errorMessage = nil
        isLoginSuccess = false
        isRegisterSuccess = false
        isEmailCodeSent = false
        isEmailCodeVerified = false
        isEmailResetPasswdSuccess = false
        profileCompleted = false
    }
}
