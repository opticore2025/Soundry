import Foundation
import StoreKit

/// 用于向 App 其他部分广播需要处理的交易。
extension Notification.Name {
    /// 当监听到一笔需要服务器验证的交易时发送此通知。
    static let storeKitTransactionReceived = Notification.Name("StoreKitTransactionReceived")
    /// 当交易处理完成时发送此通知
    static let subscriptionProcessed = Notification.Name("SubscriptionProcessed")
}

/// 自定义错误类型。
enum StoreKitError: Error {
    case productNotFound
    case purchaseFailed(String)
    case verificationFailed(Error)
    case receiptError(Error)
}

final class StoreKitSubscriptionProvider: SubscriptionProvider {
    
    private var transactionListener: Task<Void, Error>?

    init() {
        // 启动后台监听器，只处理自动续订和恢复购买的交易
        transactionListener = listenForTransactions()
    }
    
    deinit {
        transactionListener?.cancel()
    }

    /// 启动购买流程，并附带一个账户令牌。
    func purchase(sku: String, appAccountToken: UUID?) async throws -> SubscriptionPurchase {
        print("[StoreKit] Starting purchase for sku: \(sku)")
        
        guard let product = try await Product.products(for: [sku]).first else {
            throw StoreKitError.productNotFound
        }

        // 设置购买选项，将 appAccountToken 传递给 Apple
        var purchaseOptions: Set<Product.PurchaseOption> = []
        if let token = appAccountToken {
            print("[StoreKit] Attaching appAccountToken: \(token.uuidString)")
            purchaseOptions.insert(.appAccountToken(token))
        }

        print("⏳ [StoreKit] About to await product.purchase()... The task will suspend here.")
        let result = try await product.purchase(options: purchaseOptions)
        print("✅ [StoreKit] Await for product.purchase() has returned a result. Task was NOT cancelled.") // <--- 如果任务被取消，你将永远看不到这行日志

        switch result {
        case .success(let verificationResult):
            let transaction = try checkVerified(verificationResult)
            let receipt = try await loadAppReceiptBase64()
            
            // 重要：此时不调用 `finish()`。
            return SubscriptionPurchase(
                transaction: transaction,
                receiptData: receipt,
                rawTransaction: transaction
            )
            
        case .userCancelled:
            throw StoreKitError.purchaseFailed("User cancelled")
        case .pending:
            throw StoreKitError.purchaseFailed("Pending")
        @unknown default:
            throw StoreKitError.purchaseFailed("Unknown purchase result")
        }
    }

    /// 恢复购买。
    func restore() async throws {
        print("[StoreKit] Starting restore...")
        try await AppStore.sync()
    }
    
    /// 在服务器成功验证后，完成交易。
    func finish(transaction: Transaction) async {
        await transaction.finish()
        print("[StoreKit] Transaction finished: \(transaction.id)")
    }
    
    /// **交易监听器**：处理所有交易更新，作为兜底机制
    private func listenForTransactions() -> Task<Void, Error> {
        return Task(priority: .background) {
            for await result in Transaction.updates {
                do {
                    let transaction = try self.checkVerified(result)
                    print("[StoreKit] Listener received transaction update: \(transaction.id)")
                    
                    // 延迟处理，给手动通知机制一些时间
                    try await Task.sleep(nanoseconds: 2_000_000_000) // 2秒延迟
                    
                    let receipt = try await self.loadAppReceiptBase64()
                    
                    if transaction.appAccountToken == nil {
                        print("[StoreKit] Processing auto-renewal or restore transaction: \(transaction.id)")
                    } else {
                        print("[StoreKit] Processing transaction with appAccountToken as fallback: \(transaction.id)")
                    }
                    
                    await MainActor.run {
                        NotificationCenter.default.post(
                            name: .storeKitTransactionReceived,
                            object: nil,
                            userInfo: [
                                "transaction": transaction,
                                "receiptData": receipt,
                                "appAccountToken": transaction.appAccountToken as Any
                            ]
                        )
                    }
                } catch {
                    print("[StoreKit] Transaction listener failed: \(error)")
                }
            }
        }
    }
    
    /// 检查交易验证结果。
    private func checkVerified<T>(_ result: VerificationResult<T>) throws -> T {
        switch result {
        case .verified(let safe):
            return safe
        case .unverified(_, let error):
            throw StoreKitError.verificationFailed(error)
        }
    }
    
    // MARK: - Legacy Receipt Handling
    
    private enum ReceiptError: Error {
        case missingURL, fileNotFound, emptyData, readFailed(Error)
    }

    private func loadAppReceiptBase64() async throws -> String {
        guard let receiptURL = Bundle.main.appStoreReceiptURL else {
            throw ReceiptError.missingURL
        }
        
        if !FileManager.default.fileExists(atPath: receiptURL.path) {
            print("[StoreKit] Receipt file not found. Requesting refresh...")
            try? await SKReceiptRefreshRequest().start()
        }

        do {
            let receiptData = try Data(contentsOf: receiptURL)
            guard !receiptData.isEmpty else { throw ReceiptError.emptyData }
            return receiptData.base64EncodedString()
        } catch {
            throw ReceiptError.readFailed(error)
        }
    }
}

