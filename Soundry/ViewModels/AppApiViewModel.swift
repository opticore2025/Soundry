import APIClient
import Combine
import Factory
import Foundation

@MainActor
class AppApiViewModel: ObservableObject {
    private let appApi: AppApi

    @Injected(\.userSessionViewModel) private var userSessionViewModel:
        UserSessionViewModel

    @Published var isLoading = false
    @Published var errorMessage: String?

    init(client: Ktor_client_coreHttpClient) {
        appApi = AppApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }

    /// 用户打开APP
    /// 记录用户打开应用的行为，并检查账号状态
    func openApp() async {
        isLoading = true
        errorMessage = nil

        do {
            let response = try await appApi.postAppOpen()

            let body = try await response.body()

            guard body.ok == 1 else {
                errorMessage = "Open error: \(String(describing: body))"
                print("Error opening app: \(String(describing: body))")
                isLoading = false
                return
            }

            print("App opened successfully, Body: \(body)")
        } catch {
            errorMessage = "Open err: \(error.localizedDescription)"
            print("Error opening app: \(error)")
        }

        isLoading = false
    }
    
    /// 用户关闭APP
    /// 记录用户关闭应用的行为
    func closeApp() async {
        isLoading = true
        errorMessage = nil
        
        do {
            let response = try await appApi.postAppClose()
            
            let body = try await response.body()
            
            guard body.ok == 1 else {
                errorMessage = "Close error: \(String(describing: body))"
                print("Error closing app: \(String(describing: body))")
                isLoading = false
                return
            }
            
            print("App closed successfully, Body: \(body)")
        } catch {
            errorMessage = "Close error: \(error.localizedDescription)"
            print("Error closing app: \(error)")
        }
        
        isLoading = false
    }

    /// 初始化接口
    /// 在用户进入应用主界面时调用，用于更新设备信息、记录登录日志并返回用户信息
    func initializeApp() async {
        isLoading = true
        errorMessage = nil

        do {
            let response = try await appApi.postAppInit()

            let body = try await response.body()

            guard let data = body.data, body.ok == 1 else {
                errorMessage = "Init error: \(String(describing: body))"
                print("Error initializing app: \(String(describing: body))")
                isLoading = false
                return
            }
            print("App initialized successfully: \(String(describing: body))")

            if data.userInfo?.uid == nil {
                return
            }

            userSessionViewModel.updateProfile(
                nickname: data.userInfo?.nickname,
                avatar: data.userInfo?.avatar,
                isVip: data.userInfo?.isVip == 1
            )
        } catch {
            errorMessage = "init error: \(error.localizedDescription)"
            print("Error initializing app: \(error)")
        }

        isLoading = false
    }

    /// 清除错误信息
    func clearError() {
        errorMessage = nil
    }
}
