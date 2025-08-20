import Foundation
import APIClient
import Combine

@MainActor
class AppApiViewModel: ObservableObject {
    private let appApi: AppApi
    
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
            let httpResponse = try await appApi.postAppOpen()
            if httpResponse.success {
                let responseBody = try await httpResponse.body()
                print("App opened successfully. Status: \(httpResponse.status), Body: \(responseBody)")
            } else {
                errorMessage = "Open err: \(httpResponse.status)"
            }
        } catch {
            errorMessage = "Open err: \(error.localizedDescription)"
            print("Error opening app: \(error)")
        }
        
        isLoading = false
    }
    
    /// 初始化接口
    /// 在用户进入应用主界面时调用，用于更新设备信息、记录登录日志并返回用户信息
    func initializeApp() async {
        isLoading = true
        errorMessage = nil
        
        do {
            let httpResponse = try await appApi.postAppInit()
            if httpResponse.success {
                let responseBody = try await httpResponse.body()
                print("App initialized successfully. Status: \(httpResponse.status), Body: \(responseBody)")
            } else {
                errorMessage = "init error: \(httpResponse.status)"
            }
        } catch {
            errorMessage = "init error: \(error.localizedDescription)"
            print("Error initializing app: \(error)")
        }
        
        isLoading = false
    }
    
    /// 用户关闭APP
    /// 记录用户关闭应用的行为
    func closeApp() async {
        isLoading = true
        errorMessage = nil
        
        do {
            let httpResponse = try await appApi.postAppClose()
            if httpResponse.success {
                let responseBody = try await httpResponse.body()
                print("App closed successfully. Status: \(httpResponse.status), Body: \(responseBody)")
            } else {
                errorMessage = "Close error:\(httpResponse.status)"
            }
        } catch {
            errorMessage = "Close error: \(error.localizedDescription)"
            print("Error closing app: \(error)")
        }
        
        isLoading = false
    }
    
    /// 清除错误信息
    func clearError() {
        errorMessage = nil
    }
}

// MARK: - 便捷扩展
extension AppApiViewModel {
    /// 检查是否有错误
    var hasError: Bool {
        return errorMessage != nil
    }
    
    /// 应用程序生命周期管理
    func handleAppLifecycle(isActive: Bool) {
        Task {
            if isActive {
                await openApp()
            } else {
                await closeApp()
            }
        }
    }
}
