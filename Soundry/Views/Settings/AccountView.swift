import SwiftUI
import Factory

struct AccountView: View {
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.userSessionViewModel) var sessionVM: UserSessionViewModel
    
    
    var body: some View {
        ZStack {
            Color.black
                .ignoresSafeArea()
            
            VStack(spacing: 0) {
                // 顶部导航栏
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
                        // 当前登录方式（左） + 当前登录账号（右）
                        AccountSettingsRow(title: currentLoginMethod()) {
                            Text(currentLoginAccount())
                                .font(.system(size: 16))
                                .foregroundColor(.white.opacity(0.85))
                                .frame(maxWidth: .infinity, alignment: .trailing)
                        }
                    }
                    .padding(.top, 30)
                    .padding(.bottom, 30)
                }
            }
        }
    }

    @MainActor
    private func currentLoginMethod() -> String {
        if let email = sessionVM.userInfo?.email, !email.isEmpty {
            return "Email"
        }
        return "Apple"
    }

    @MainActor
    private func currentLoginAccount() -> String {
        // 邮箱登录显示邮箱；Apple 登录可显示昵称或占位
        if let email = sessionVM.userInfo?.email, !email.isEmpty {
            return email
        }
        // 若无邮箱，显示昵称或占位说明
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

#Preview {
    AccountView()
        .preferredColorScheme(.dark)
}
