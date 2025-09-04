//
//  VerificationCodeView.swift
//  Soundry
//
//  Created by Zhuanz密码0000 on 2025/8/29.
//

import SwiftUI
import Factory
import SVProgressHUD

struct VerificationCodeView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel: UserSessionViewModel
    @InjectedObject(\.authenticationApiViewModel) var authorizationApiViewModel: AuthenticationApiViewModel
    
    @State private var code: String = ""
    @State private var codeTouched = false
    @State private var codeValid = true
    @FocusState private var focusedField: Field?
    
    enum Field {
        case code
    }
    
    var canSubmit: Bool {
        return !code.trimmingCharacters(in: .whitespaces).isEmpty &&
               codeValid
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
                                    Text("Verification code")
                                        .font(.system(size: 30,weight: .bold))
                                        .foregroundColor(.white)
                                    Spacer()
                                }
                                HStack{
                                    Text("Code sent to \(appState.verificationEmail ?? ""),please go to check")
                                        .font(.system(size: 14))
                                        .foregroundColor(.white)
                                    Spacer()
                                }
                                .padding(.horizontal,10)
                            }
                            .padding(.horizontal, 24)
                            .padding(.top, 48)
                            .padding(.bottom, 26)
                            
                            // 验证码输入
                            VStack(spacing: 4) {
                                VerificationCodeInputField(
                                    code: $code,
                                    codeValid: $codeValid,
                                    codeTouched: $codeTouched
                                )
                                .focused($focusedField, equals: .code)
                                
                                HStack {
                                    Text(codeTouched && !codeValid ? "Verification code incorrectly" : " ")
                                        .font(.system(size: 12))
                                        .foregroundColor(.red)
                                    Spacer()
                                }
                                .padding(.horizontal, 24)
                                .padding(.bottom, 15)
                            }
                            
                            // 提交按钮
                            Button {
                                // 提交验证
                                Task{
                                    guard let email = appState.verificationEmail else { return }
                                    await authorizationApiViewModel.verifyEmailCode(email: email, code: code, type: .forgetpassword)
                                    
                                    // 验证码验证成功后进入重置密码界面
                                    if authorizationApiViewModel.isEmailCodeVerified {
                                        appState.navigateToResetPassword()
                                        
                                    }else if !authorizationApiViewModel.isEmailCodeVerified{
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
    VerificationCodeView()
}
