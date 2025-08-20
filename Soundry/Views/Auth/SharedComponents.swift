import SwiftUI
import UIKit

// MARK: - Back Button Component
struct BackButtonView: View {
    let action: () -> Void
    
    var body: some View {
        HStack {
            Button(action: action) {
                Image(systemName: "chevron.left")
                    .font(.system(size: 24, weight: .medium))
                    .foregroundColor(.white)
            }
            
            Spacer()
        }
        .padding(.horizontal, 20)
        .padding(.top, 20)
        .frame(height: 44)
    }
}

// MARK: - Keyboard Toolbar Component
struct KeyboardToolbar: View {
    let onPrevious: () -> Void
    let onNext: () -> Void
    let onDone: () -> Void
    let canGoPrevious: Bool
    let canGoNext: Bool
    
    var body: some View {
        HStack {
            // 左侧箭头按钮
            HStack(spacing: 8) {
                Button(action: onPrevious) {
                    Image(systemName: "chevron.up")
                        .font(.system(size: 16, weight: .medium))
                        .foregroundColor(canGoPrevious ? .white : .gray)
                }
                .disabled(!canGoPrevious)
                
                Button(action: onNext) {
                    Image(systemName: "chevron.down")
                        .font(.system(size: 16, weight: .medium))
                        .foregroundColor(canGoNext ? .white : .gray)
                }
                .disabled(!canGoNext)
            }
            
            Spacer()
            
            // 右侧完成按钮
            Button(action: onDone) {
                Text("Done")
                    .font(.system(size: 16, weight: .medium))
                    .foregroundColor(.white)
            }
        }
        .padding(.horizontal, 16)
        .padding(.vertical, 8)
        .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        .overlay(
            Rectangle()
                .frame(height: 1)
                .foregroundColor(Color.white.opacity(0.1)),
            alignment: .top
        )
    }
}

// MARK: - Input Components
struct EmailInputField: View {
    @Binding var email: String
    @Binding var emailValid: Bool
    @Binding var emailTouched: Bool
    
    var body: some View {
        VStack(spacing: 0) {
            // Input box
            HStack {
                TextField("Email", text: $email)
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .keyboardType(.emailAddress)
                    .autocapitalization(.none)
                    .disableAutocorrection(true)
                    .onChange(of: email) { _ in
                        validateEmailOnChange()
                    }
                    .onSubmit {
                        validateEmailOnBlur()
                    }
                    .onTapGesture {
                        // Handle focus if needed
                    }
            }
            .padding(.horizontal, 16)
            .frame(height: 48)
            .background(
                RoundedRectangle(cornerRadius: 8)
                    .fill(Color.white.opacity(0.05))
                    .overlay(
                        RoundedRectangle(cornerRadius: 8)
                            .stroke(Color.white.opacity(0.1), lineWidth: 1)
                    )
            )
            .padding(.horizontal, 24)
        }
    }
    
    // Email validation logic
    private func validateEmailOnChange() {
        // onChange时只校验按钮状态，不显示错误提示
        if email.trimmingCharacters(in: .whitespaces).isEmpty {
            emailValid = false
            return
        }
        let emailRegex = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$"
        emailValid = NSPredicate(format: "SELF MATCHES %@", emailRegex).evaluate(with: email.trimmingCharacters(in: .whitespaces))
    }
    
    private func validateEmailOnBlur() {
        emailTouched = true
        if email.trimmingCharacters(in: .whitespaces).isEmpty {
            emailValid = false
            return
        }
        let emailRegex = "^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$"
        emailValid = NSPredicate(format: "SELF MATCHES %@", emailRegex).evaluate(with: email.trimmingCharacters(in: .whitespaces))
    }
}

struct PasswordInputField: View {
    @Binding var password: String
    @Binding var showPassword: Bool
    @Binding var passwordValid: Bool
    @Binding var passwordTouched: Bool
    let onForgotPassword: (() -> Void)?
    
    var body: some View {
        VStack(spacing: 0) {
            // Input box
            ZStack {
                HStack {
                    Group {
                        if showPassword {
                            TextField("Password (Least 6 chars)", text: $password)
                        } else {
                            SecureField("Password (Least 6 chars)", text: $password)
                        }
                    }
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .onChange(of: password) { _ in
                        validatePasswordOnChange()
                    }
                    .onSubmit {
                        validatePasswordOnBlur()
                    }
                    
                    Button(action: {
                        showPassword.toggle()
                    }) {
                        Image(systemName: showPassword ? "eye.slash" : "eye")
                            .foregroundColor(.gray)
                    }
                }
                .padding(.horizontal, 16)
                .frame(height: 48)
                .background(
                    RoundedRectangle(cornerRadius: 8)
                        .fill(Color.white.opacity(0.05))
                        .overlay(
                            RoundedRectangle(cornerRadius: 8)
                                .stroke(Color.white.opacity(0.1), lineWidth: 1)
                        )
                )
                .padding(.horizontal, 24)
            }
            
            // Forgot password link - only show when onForgotPassword is provided
            if let onForgotPassword = onForgotPassword {
                HStack {
                    Spacer()
                    Button(action: onForgotPassword) {
                        Text("Forgot Password?")
                            .font(.system(size: 12))
                            .foregroundColor(.white)
                    }
                }
                .padding(.horizontal, 24)
                .padding(.top, 8)
            }
        }
    }
    
    // Password validation logic
    private func validatePasswordOnChange() {
        // onChange时只校验按钮状态，不显示错误提示
        if password.isEmpty {
            passwordValid = false
            return
        }
        passwordValid = password.count >= 6
    }
    
    private func validatePasswordOnBlur() {
        passwordTouched = true
        if password.isEmpty {
            passwordValid = false
            return
        }
        passwordValid = password.count >= 6
    }
}
