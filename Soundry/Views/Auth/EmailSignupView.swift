import SwiftUI
import Factory
import SVProgressHUD

struct EmailSignupView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel: UserSessionViewModel
    @InjectedObject(\.authenticationApiViewModel) var authorizationApiViewModel: AuthenticationApiViewModel
    @State private var email = ""
    @State private var password = ""
    @State private var showPassword = false
    
    // Validation states
    @State private var emailTouched = false
    @State private var passwordTouched = false
    @State private var emailValid = true
    @State private var passwordValid = true
    
    // Focus management
    @FocusState private var focusedField: Field?
    
    enum Field {
        case email
        case password
    }
    
    var canSubmit: Bool {
        return !email.trimmingCharacters(in: .whitespaces).isEmpty &&
               !password.isEmpty &&
               emailValid &&
               passwordValid &&
               !authorizationApiViewModel.isLoading
    }
    
    var body: some View {
        VStack(spacing: 0) {
            // 顶部返回按钮区域
            BackButtonView(action: appState.goBack)
            
            // Content area
            GeometryReader { _ in
                ScrollView(.vertical, showsIndicators: false) {
                    VStack(spacing: 0) {
                        // Main title
                        HStack {
                            Text("Create Account")
                                .font(.system(size: 30, weight: .bold))
                                .foregroundColor(.white)
                            Spacer()
                        }
                        .padding(.horizontal, 24)
                        .padding(.top, 48)
                        .padding(.bottom, 26)
                        
                        // Email input
                        VStack(spacing: 4) {
                            EmailInputField(
                                email: $email,
                                emailValid: $emailValid,
                                emailTouched: $emailTouched
                            )
                            .focused($focusedField, equals: .email)
                            
                            HStack {
                                Text(emailTouched && !emailValid ? "Email format is incorrect" : " ")
                                    .font(.system(size: 12))
                                    .foregroundColor(.red)
                                Spacer()
                            }
                            .padding(.horizontal, 24)
                            .padding(.bottom, 15)
                        }
                        
                        // Password input
                        VStack(spacing: 4) {
                            PasswordInputField(
                                password: $password,
                                showPassword: $showPassword,
                                passwordValid: $passwordValid,
                                passwordTouched: $passwordTouched,
                                onForgotPassword: nil
                            )
                            .focused($focusedField, equals: .password)
                            
                            HStack {
                                Text(passwordTouched && !passwordValid ? "Password must be at least 6 characters" : " ")
                                    .font(.system(size: 12))
                                    .foregroundColor(.red)
                                Spacer()
                            }
                            .padding(.horizontal, 24)
                            .padding(.bottom, 15)
                        }
                        
                        // Sign up button
                        Button {
                            Task {
                                await authorizationApiViewModel.registerWithEmail(email: email, password: password)
                                
                                if !authorizationApiViewModel.isRegisterSuccess {
                                    DispatchQueue.main.async {
                                        SVProgressHUD.showError(withStatus: authorizationApiViewModel.errorMessage)
                                        SVProgressHUD.dismiss(withDelay: 2)
                                    }
                                }
                            }
                        } label: {
                            ZStack {
                                Text("Create Account")
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
        .onChange(of: userSessionViewModel.isLoggedIn) { isLoggedIn in
            if isLoggedIn {
                // 注册成功后返回
                appState.goBack()
            }
        }
        .toolbar {
            ToolbarItemGroup(placement: .keyboard) {
                KeyboardToolbar(
                    onPrevious: {
                        if focusedField == .password {
                            focusedField = .email
                        }
                    },
                    onNext: {
                        if focusedField == .email {
                            focusedField = .password
                        }
                    },
                    onDone: {
                        focusedField = nil
                    },
                    canGoPrevious: focusedField == .password,
                    canGoNext: focusedField == .email
                )
            }
        }
    }
}

// MARK: - Preview
#Preview {
    EmailSignupView()
        .preferredColorScheme(.dark)
}
