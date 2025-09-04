import Combine
import Factory
import SwiftUI

// MARK: - Authentication View States
enum AuthViewState: CaseIterable {
    case none
    case login
    case emailLogin
    case emailSignup
    case forgotPassword
    case craeteUserName
    case verificationCode
    case resetPassword
}


// MARK: - App State Management
@MainActor
class AppState: ObservableObject {
    @Published var currentTab: Tab = .home {
        didSet {
            previousTab = oldValue
        }
    }
    @Published var previousTab: Tab = .home
    @Published var showPlayerBar: Bool = false
    @Published var isNetworkAvailable: Bool = true
    //用于存储验证邮箱和验证码
    @Published var verificationEmail: String?
    @Published var verificationCode: String?
    
    // 认证界面状态管理
        @Published var currentAuthView: AuthViewState = .none
        
        // 统一的动画配置
        static let animationDuration: Double = 0.3
        static let animation: Animation = .easeInOut(duration: animationDuration)
        
        // 计算属性 - 认证状态
        var showingLogin: Bool {
            currentAuthView == .login
        }
        
        var showingEmailLogin: Bool {
            currentAuthView == .emailLogin
        }
        
        var showingEmailSignup: Bool {
            currentAuthView == .emailSignup
        }
        
        var showingForgotPassword: Bool {
            currentAuthView == .forgotPassword
        }
        var showCreatUserName: Bool{
            currentAuthView == .craeteUserName
        }
        var VerificationCode : Bool{
            currentAuthView == .verificationCode
        }
        
        var resetPassword: Bool {
            currentAuthView == .resetPassword
        }

    enum Tab: String, CaseIterable {
        case home = "Home"
        case ai = "AI"
        case me = "Me"
        case notifications = "Notifications"
        case settings = "Settings"

        var iconName: String {
            switch self {
            case .home:
                return "house"
            case .ai:
                return "brain.head.profile"
            case .me:
                return "person.crop.circle"
            default:
                return ""
            }
        }

        var selectedIconName: String {
            switch self {
            case .home:
                return "house.fill"
            case .ai:
                return "brain.head.profile.fill"
            case .me:
                return "person.crop.circle.fill"
            default:
                return ""
            }
        }
    }

    // MARK: - Player Bar Visibility
    func updatePlayerBarVisibility(_ isVisible: Bool) {
        withAnimation(.easeInOut(duration: 0.3)) {
            showPlayerBar = isVisible
        }
    }
    // MARK: - Authentication Navigation Methods
        func goBack() {
            withAnimation(AppState.animation) {
                switch currentAuthView {
                case .none:
                    break
                case .login:
                    // 从登录界面返回到主界面
                    currentAuthView = .none
                case .emailLogin:
                    // 从邮箱登录返回到登录界面
                    currentAuthView = .none
                case .emailSignup:
                    // 从邮箱注册返回到登录界面
                    currentAuthView = .none
                case .forgotPassword:
                    // 从忘记密码返回到邮箱登录
                    currentAuthView = .emailLogin
                case .craeteUserName:
                    //从创建名字返回主界面
                    currentAuthView = .none
                case .verificationCode:
                    //从验证验证吗到忘记密码
                    currentAuthView = .forgotPassword
                case .resetPassword:
                    //从重置密码返回到验证码界面
                    currentAuthView = .verificationCode
                    
                }
            }
        }
        //导航方法 - 携带输入的邮箱
    func navigateToVerificationCode(with email: String) {
        withAnimation(AppState.animation) {
            verificationEmail = email  // 存储邮箱
            currentAuthView = .verificationCode
        }
    }
        // 导航方法 - 更新为层级导航
        func showLogin() {
            withAnimation(AppState.animation) {
                currentAuthView = .login
            }
        }
        
        func navigateToEmailLogin() {
            withAnimation(AppState.animation) {
                currentAuthView = .emailLogin
            }
        }
        
        func navigateToEmailSignup() {
            withAnimation(AppState.animation) {
                currentAuthView = .emailSignup
            }
        }
        
        func navigateToForgotPassword() {
            withAnimation(AppState.animation) {
                currentAuthView = .forgotPassword
            }
        }
        func navigateToCreatUserName() {
            withAnimation(AppState.animation) {
                currentAuthView = .craeteUserName
            }
        }
        
        func navigateToResetPassword() {
            withAnimation(AppState.animation) {
                currentAuthView = .resetPassword
            }
        }


    
        
        // 关闭所有认证界面的方法
        func closeAllAuth() {
            withAnimation(AppState.animation) {
                currentAuthView = .none
            }
        }
}
