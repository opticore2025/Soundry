import Foundation
import StoreKit

final class StoreKitSubscriptionProvider: SubscriptionProvider {
    init() {}

    func purchase(sku: String) async throws -> SubscriptionPurchase {
        print("[StoreKit] Start purchase, sku=\(sku)")
        
        let products = try await Product.products(for: [sku])
        print("[StoreKit] Fetched products count=\(products.count)")
        
        guard let product = products.first else {
            print("[StoreKit] Product not found for sku=\(sku)")
            throw SubscriptionError.productNotFound
        }


        let result = try await product.purchase()
        switch result {
        case .success(let verificationResult):
  
            let transaction = try verificationResult.payloadValue
            let id = String(transaction.id)
            let receipt = try await loadAppReceiptBase64()
            
            await transaction.finish()
            print("[StoreKit] Transaction finished")
            
            return SubscriptionPurchase(transactionId: id, receiptData: receipt)
        case .userCancelled:
            print("[StoreKit] Purchase cancelled by user")
            
            throw SubscriptionError.purchaseFailed("User cancelled")
        case .pending:
            print("[StoreKit] Purchase pending")
            
            throw SubscriptionError.purchaseFailed("Pending")
        @unknown default:
            print("[StoreKit] Purchase unknown result")
            throw SubscriptionError.purchaseFailed("Unknown purchase result")
        }
    }

    func restore() async throws {
        print("[StoreKit] Start restore")
        try await AppStore.sync()
        print("[StoreKit] Restore finished")
    }
    // 定义收据相关错误类型
    enum ReceiptError: Error {
        case missingURL                  // 收据URL为nil
        case fileNotFound                // 收据文件不存在
        case emptyData                   // 收据数据为空
        case base64EncodingFailed        // Base64编码失败
        case readFailed(Error)           // 文件读取失败
    }
    private func loadAppReceiptBase64() async throws -> String {
        // 检查收据URL是否存在
        guard let receiptURL = Bundle.main.appStoreReceiptURL else {
            throw ReceiptError.missingURL
        }
        let fileManager = FileManager.default
        // 检查收据文件是否存在
        guard fileManager.fileExists(atPath: receiptURL.path) else {
            throw ReceiptError.fileNotFound
        }
        do {
            // 异步读取文件内容（推荐使用异步API）
            let receiptData = try  Data(contentsOf: receiptURL)
            
            // 检查数据是否为空
            guard !receiptData.isEmpty else {
                throw ReceiptError.emptyData
            }
            // 转换为Base64编码
            let base64String = receiptData.base64EncodedString()
            guard !base64String.isEmpty else {
                throw ReceiptError.base64EncodingFailed
            }
            
            return base64String
        } catch {
            // 捕获并包装文件读取错误
            throw ReceiptError.readFailed(error)
        }
    }
    // Fallback via StoreKit 1 API
    private func refreshReceiptLegacy() async throws {
        return try await withCheckedThrowingContinuation { (continuation: CheckedContinuation<Void, Error>) in
            let request = SKReceiptRefreshRequest(receiptProperties: nil)
            let delegate = ReceiptRefreshDelegate { error in
                if let error { continuation.resume(throwing: error) } else { continuation.resume() }
            }
            request.delegate = delegate
            // Retain delegate until completion
            ReceiptRefreshDelegateStore.shared.store(delegate: delegate)
            request.start()
        }
    }
}

private final class ReceiptRefreshDelegate: NSObject, SKRequestDelegate {
    private let completion: (Error?) -> Void
    init(completion: @escaping (Error?) -> Void) { self.completion = completion }
    func requestDidFinish(_ request: SKRequest) {
        completion(nil)
        ReceiptRefreshDelegateStore.shared.clear()
    }
    func request(_ request: SKRequest, didFailWithError error: Error) {
        completion(error)
        ReceiptRefreshDelegateStore.shared.clear()
    }
}

private final class ReceiptRefreshDelegateStore {
    static let shared = ReceiptRefreshDelegateStore()
    private var strongDelegate: ReceiptRefreshDelegate?
    func store(delegate: ReceiptRefreshDelegate) { strongDelegate = delegate }
    func clear() { strongDelegate = nil }
}


