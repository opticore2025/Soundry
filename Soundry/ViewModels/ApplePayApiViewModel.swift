import Foundation
import APIClient

@MainActor
class ApplePayApiViewModel: ObservableObject {
    private let applePayApi: ApplePayApi
    
    @Published var isLoading = false
    @Published var errorMessage: String?
    @Published var cancelResult: Bool = false
    @Published var createResult: PostAppleCreate200ResponseData?
    @Published var noticeResult: String?
    @Published var noticeRawResponse: String?
    @Published var verifyResult: PostAppleVerify200ResponseData?
    
    init(client: Ktor_client_coreHttpClient) {
        applePayApi = ApplePayApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }
    
    func cancelOrder(
        tranNo: String,
        status: Int32? = nil,
        errorCode: Int32? = nil
    ) async {
        isLoading = true
        errorMessage = nil
        cancelResult = false
        
        do {
            let request = PostAppleCancelRequest(
                tranNo: tranNo,
                status: status != nil ? KotlinInt(int: status!) : nil,
                errorCode: errorCode != nil ? KotlinInt(int: errorCode!) : nil
            )
            let response = try await applePayApi.postAppleCancel(postAppleCancelRequest: request)
            let body = try await response.body()
            if body.ok == 0 {
                cancelResult = false
                isLoading = false
                return
            }
            cancelResult = true
            isLoading = false
        } catch {
            errorMessage = "Cancel Error: \(error.localizedDescription)"
            isLoading = false
        }
    }
    
    func createOrder(
        goodsId: Int32,
        productType: PostAppleCreateRequest.ProductType?
    ) async {
        isLoading = true
        errorMessage = nil
        createResult = nil
        
        do {
            let request = PostAppleCreateRequest(
                goodsId: goodsId,
                productType: productType == nil ? nil : KotlinInt(int: productType!.value)
            )
            let response = try await applePayApi.postAppleCreate(postAppleCreateRequest: request)
            let body = try await response.body()
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "Create Order Failed"
                print("Create Order Error: \(String(describing: body))")
                isLoading = false
                return
            }
            createResult = data
            print("Create Order Success: \(String(describing: data))")
            isLoading = false
        } catch {
            errorMessage = "Create Error: \(error.localizedDescription)"
        }
        
        isLoading = false
    }
    
    func handleNotice(
        environment: PostAppleNoticeRequest.Environment? = nil,
        transactionId: String? = nil,
        notificationType: PostAppleNoticeRequest.NotificationType? = nil,
        notificationUuid: String? = nil
    ) async {
        isLoading = true
        errorMessage = nil
        noticeResult = nil
        noticeRawResponse = nil
        
        do {
            let request = PostAppleNoticeRequest(
                environment: environment,
                transactionId: transactionId,
                notificationType: notificationType,
                notificationUuid: notificationUuid
            )
            let response = try await applePayApi.postAppleNotice(postAppleNoticeRequest: request)
            // 打印 HTTP 状态码
            print("[ApplePay] Notice HTTP Status: \(response.status)")
            
            // 打印解析后的响应体
            let body = try await response.body()
            print("[ApplePay] Notice Body: \(String(describing: body))")
            if let status = body.status {
                print("[ApplePay] Notice status: \(status)")
            }
            noticeResult = body.status
            isLoading = false
        } catch {
            errorMessage = "Notice Error: \(error.localizedDescription)"
            isLoading = false
        }
    }
    
    func verifyPayment(
        tranNo: String,
        productId: String? = nil,
        productType: PostAppleVerifyRequest.ProductType? = nil,
        receiptData: String? = nil,
        transactionId: String? = nil
    ) async {
        isLoading = true
        errorMessage = nil
        verifyResult = nil
        
        do {
            let request = PostAppleVerifyRequest(
                tranNo: tranNo,
                productId: productId,
                productType: productType == nil ? nil : KotlinInt(int: productType!.value),
                receiptData: receiptData,
                transactionId: transactionId
            )
            let response = try await applePayApi.postAppleVerify(postAppleVerifyRequest: request)
            
            let body1 = response.response.rawContent
            let body = try await response.body()
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "Verify Payment Failed"
                isLoading = false
                return
            }
            verifyResult = data
            isLoading = false
        } catch {
            errorMessage = "Verify Error: \(error.localizedDescription)"
            isLoading = false
        }
    }
}
