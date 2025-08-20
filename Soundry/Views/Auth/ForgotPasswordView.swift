import SwiftUI
import Factory
import SVProgressHUD

struct ForgotPasswordView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.authenticationApiViewModel) var authorizationApiViewModel: AuthenticationApiViewModel
    @State private var email: String = ""
    @State private var isLoading: Bool = false
    @State private var emailTouched: Bool = false
    @State private var emailValid: Bool = true
    
    // Focus management
    @FocusState private var focusedField: Field?
    
    enum Field {
        case email
    }
    
    var canSubmit: Bool {
        return !email.trimmingCharacters(in: .whitespaces).isEmpty &&
               emailValid &&
               !isLoading
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
                            Text("Forget Password")
                                .font(.system(size: 30, weight: .bold))
                                .foregroundColor(.white)
                            Spacer()
                        }
                        .padding(.horizontal, 24)
                        .padding(.top, 48)
                        .padding(.bottom, 26)
                        
                        // Description
                        HStack(alignment: .top) {
                            Text("Enter your email address and we'll send you a verification code to reset your password")
                                .font(.system(size: 14))
                                .foregroundColor(.white.opacity(0.7))
                                .multilineTextAlignment(.leading)
                            Spacer(minLength: 0)
                        }
                        .padding(.horizontal, 24)
                        .padding(.bottom, 32)
                        
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
                        
                        // Continue button
                        Button(action: {
                            // TODO: Implement forgot password logic
                        }) {
                            ZStack {
                                Text("Continue")
                                    .font(.system(size: 16, weight: .semibold))
                                    .foregroundColor(.white)
                                    .opacity(isLoading ? 0 : 1)
                                
                                if isLoading {
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
        .toolbar {
            ToolbarItemGroup(placement: .keyboard) {
                KeyboardToolbar(
                    onPrevious: {
                        // 只有一个输入框，无法向上
                    },
                    onNext: {
                        // 只有一个输入框，无法向下
                    },
                    onDone: {
                        focusedField = nil
                    },
                    canGoPrevious: false,
                    canGoNext: false
                )
            }
        }
    }
}

// BackButtonView is now defined in SharedComponents.swift

// EmailInputField is now defined in SharedComponents.swift

// MARK: - Preview
#Preview {
    ForgotPasswordView()
        .preferredColorScheme(.dark)
}
