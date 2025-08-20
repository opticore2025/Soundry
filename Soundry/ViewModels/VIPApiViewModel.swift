import Foundation
import APIClient

@MainActor
class VIPApiViewModel: ObservableObject {
    private var vipApi: VIPApi
    
    init(client: Ktor_client_coreHttpClient) {
        vipApi = VIPApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }
    
    @Published var isLoading = false
    @Published var errorMessage: String?
    
    @Published var vipList: GetVipList200ResponseData? = nil
    /// just 4 dev
    @Published var vipPurchaseResult: PostVipSubmit200ResponseOneOfData? = nil
    
    // 添加清理方法
    func clearData() {
        vipList = nil
        vipPurchaseResult = nil
        errorMessage = nil
        isLoading = false
    }
    
    func getVIPList(channel: VIPApi.ChannelGetVipList = .comperiodaimusicperiodhomeperioda) async {
        isLoading = true
        errorMessage = nil
        
        do {
            let response = try await vipApi.getVipList(channel: channel)
            let body = try await response.body()
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "Failed to get VIP list"
                isLoading = false
                return
            }
            vipList = data
            print("VIP list fetched successfully: \(String(describing: data))")
            isLoading = false
        } catch {
            errorMessage = "Failed to get VIP list: \(error.localizedDescription)"
            isLoading = false
        }
    }
    
    /// only 4 dev
    func submitVIPPurchase(goodsId: Int32) async {
        isLoading = true
        errorMessage = nil
        
        do {
            let request = PostVipSubmitRequest(goodsId: goodsId)
            let response = try await vipApi.postVipSubmit(postVipSubmitRequest: request)
            let body = try await response.body()
            guard let data = body.data, body.ok != 0 else {
                errorMessage = body.msg
                print("Error submitting VIP purchase: \(String(describing: body))")
                isLoading = false
                return
            }
            vipPurchaseResult = data
            print("VIP purchase submitted successfully: \(String(describing: data))")
            isLoading = false
        } catch {
            errorMessage = "Failed to submit VIP purchase: \(error.localizedDescription)"
            isLoading = false
        }
    }
}
