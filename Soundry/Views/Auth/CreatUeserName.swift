//
//  CreatUeserName.swift
//  Soundry
//
//  Created by Zhuanz密码0000 on 2025/8/28.
//

import SwiftUI
import Factory
import SVProgressHUD

struct CreatUeserName: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel: UserSessionViewModel
    @InjectedObject(\.authenticationApiViewModel) var authorizationApiViewModel: AuthenticationApiViewModel
    
    @State private var userName: String = ""
    @State private var userNameTouched = false
    @State private var userNameValid = true
    @FocusState private var focusedField: Field?
    
    enum Field {
        case username
    }
    
    var canSubmit: Bool {
        return !userName.trimmingCharacters(in: .whitespaces).isEmpty &&
               userNameValid &&
               !authorizationApiViewModel.isLoading
    }
    
    var body: some View {
        ZStack{
            Color.black.ignoresSafeArea()
            VStack{
                //顶部返回按钮
                BackButtonView(action: appState.goBack)
                //内容区域
                GeometryReader{ _ in
                    ScrollView(.vertical,showsIndicators: false){
                        VStack(spacing: 0){
                            VStack{
                                HStack{
                                    Text("Your Name")
                                        .font(.system(size: 30,weight: .bold))
                                        .foregroundColor(.white)
                                    Spacer()
                                }
                                HStack{
                                    Text("This is how other users will see you")
                                        .font(.system(size: 14))
                                        .foregroundColor(.white)
                                    Spacer()
                                }
                                .padding(.horizontal,10)
                            }
                            .padding(.horizontal, 24)
                            .padding(.top, 48)
                            .padding(.bottom, 26)
                            
                            // 用户名输入
                            VStack(spacing: 4) {
                                UsernameInputField(
                                    userName: $userName,
                                    userNameValid: $userNameValid,
                                    userNameTouched: $userNameTouched
                                )
                                .focused($focusedField, equals: .username)
                                
                                HStack {
                                    Text(userNameTouched && !userNameValid ? "Username must be at least 2 characters" : " ")
                                        .font(.system(size: 12))
                                        .foregroundColor(.red)
                                    Spacer()
                                }
                                .padding(.horizontal, 24)
                                .padding(.bottom, 15)
                            }
                            
                            // 提交按钮
                            Button {
                                Task {
                                    await authorizationApiViewModel.completeProfile(nickname: userName)
                                    
                                        // 用户名更新成功后返回
                                        appState.goBack()
                                }
                            } label: {
                                ZStack {
                                    Text("Enter")
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
    CreatUeserName()
}
