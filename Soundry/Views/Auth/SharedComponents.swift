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
                            TextField("Password", text: $password)
                        } else {
                            SecureField("Password", text: $password)
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



struct UsernameInputField: View {
    @Binding var userName: String
    @Binding var userNameValid: Bool
    @Binding var userNameTouched: Bool
    
    var body: some View {
        VStack(spacing: 0) {
            // Input box
            HStack {
                TextField("Username", text: $userName)
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .autocapitalization(.none)
                    .disableAutocorrection(true)
                    .onChange(of: userName) { _ in
                        validateUsernameOnChange()
                    }
                    .onSubmit {
                        validateUsernameOnBlur()
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
    
    // Username validation logic
    private func validateUsernameOnChange() {
        // onChange时只校验按钮状态，不显示错误提示
        if userName.trimmingCharacters(in: .whitespaces).isEmpty {
            userNameValid = false
            return
        }
        userNameValid = userName.count >= 2
    }
    
    private func validateUsernameOnBlur() {
        userNameTouched = true
        if userName.trimmingCharacters(in: .whitespaces).isEmpty {
            userNameValid = false
            return
        }
        userNameValid = userName.count >= 2
    }
}
 

struct VerificationCodeInputField: View {
    @Binding var code: String
    @Binding var codeValid: Bool
    @Binding var codeTouched: Bool
    
    var body: some View {
        VStack(spacing: 0) {
            // Input box
            HStack {
                TextField("Verification Code ", text: $code)
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .keyboardType(.numberPad)
                    .autocapitalization(.none)
                    .disableAutocorrection(true)
                    .onChange(of: code) { _ in
                        validateCodeOnChange()
                    }
                    .onSubmit {
                        validateCodeOnBlur()
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
    
    // Code validation logic
    private func validateCodeOnChange() {
        // onChange时只校验按钮状态，不显示错误提示
        if code.trimmingCharacters(in: .whitespaces).isEmpty {
            codeValid = false
            return
        }
        codeValid = code.count >= 4
    }
    
    private func validateCodeOnBlur() {
        codeTouched = true
        if code.trimmingCharacters(in: .whitespaces).isEmpty {
            codeValid = false
            return
        }
        codeValid = code.count >= 4
    }
}

struct ResetPasswordInputField: View {
    @Binding var password: String
    @Binding var showPassword: Bool
    
    var body: some View {
        VStack(spacing: 0) {
            // Input box
            ZStack {
                HStack {
                    Group {
                        if showPassword {
                            TextField("New Password", text: $password)
                        } else {
                            SecureField("New Password", text: $password)
                        }
                    }
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .onChange(of: password) { _ in
                        // Validation can be added here if needed
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
        }
    }
}

struct ConfirmPasswordInputField: View {
    @Binding var password: String
    @Binding var showPassword: Bool
    
    var body: some View {
        VStack(spacing: 0) {
            // Input box
            ZStack {
                HStack {
                    Group {
                        if showPassword {
                            TextField("Confirm Password", text: $password)
                        } else {
                            SecureField("Confirm Password", text: $password)
                        }
                    }
                    .font(.system(size: 16))
                    .foregroundColor(.white)
                    .onChange(of: password) { _ in
                        // Validation can be added here if needed
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
        }
    }
}
