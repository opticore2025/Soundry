

import Foundation
import APIClient

@MainActor
class BlackListApiViewModel: ObservableObject {
    private var blackListApi: BlackListApi
    
    init(client: Ktor_client_coreHttpClient) {
        blackListApi = BlackListApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }
    
    @Published var isLoading = false
    @Published var errorMessage: String?
    
    @Published var blockList : PageBlockedUserResponseData?

    
    
    
    func blockUser(uid: Int64) async {
        isLoading = true
        errorMessage = nil
        
        do {
            let response = try await blackListApi.postBlockUser(uid: uid)
            let body = try await response.body()
            guard body.ok == 1 else {
                errorMessage = "Block User failed, \(body)"
                print("Block User failed, \(body)")
                isLoading = false
                return
            }
            print("Block User successfully: \(String(describing: body))")
            isLoading = false
        } catch {
            errorMessage = "Failed to block user: \(error.localizedDescription)"
            isLoading = false
        }
    }
    
    func unblockUser(uid: Int64) async {
        isLoading = true
        errorMessage = nil
        
        do {
            let response = try await blackListApi.postUnblockUser(uid: uid)
            let body = try await response.body()
            guard body.ok == 1 else {
                errorMessage = "Unblock User failed, \(body)"
                print("Unblock User failed, \(body)")
                isLoading = false
                return
            }
            print("Unblock User successfully: \(String(describing: body))")
            isLoading = false
        } catch {
            errorMessage = "Failed to unblock user: \(error.localizedDescription)"
            isLoading = false
        }
    }
    
    func pageblockUser(page: Int32 = 1, pageSize: Int32 = 20) async {
        isLoading = true
        errorMessage = nil
        
        do {
            let response = try await blackListApi.pageBlockedUser(page: page, pageSize: pageSize)
            let body = try await response.body()
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "Page Block User failed, \(body)"
                isLoading = false
                return
            }
            self.blockList = data
            print("Page Blocked User successfully: \(String(describing: data))")
            isLoading = false
        } catch {
        }
        
        
    }
}
