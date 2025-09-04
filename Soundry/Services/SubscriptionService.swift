// SubscriptionService.swift (重构后)
import Foundation
import APIClient
import StoreKit
import Factory

enum SubscriptionServiceError: Error {
    case invalidPlan
    case purchaseFailed(String)
    case verifyFailed(String)
    case transactionHandlingError(String)
}

@MainActor
final class SubscriptionService {
    private let provider: SubscriptionProvider
    private let api: ApplePayApiViewModel
    @Injected(\.userSessionViewModel) var userSession: UserSessionViewModel
    
    private var processedTransactionIDs: Set<UInt64> = []

    init(provider: SubscriptionProvider, api: ApplePayApiViewModel) {
        self.provider = provider
        self.api = api
        observeTransactionUpdates()
    }

    deinit {
        NotificationCenter.default.removeObserver(self)
    }

    private func observeTransactionUpdates() {
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(handleTransactionUpdate(_:)),
            name: .storeKitTransactionReceived,
            object: nil
        )
    }

    @objc private func handleTransactionUpdate(_ notification: Notification) {
        guard let transaction = notification.userInfo?["transaction"] as? Transaction,
              let receiptData = notification.userInfo?["receiptData"] as? String else {
            return
        }
        
        let transactionID = transaction.id
        if processedTransactionIDs.contains(transactionID) {
            return
        }
        
        let appAccountToken = notification.userInfo?["appAccountToken"] as? UUID
        
        Task {
            processedTransactionIDs.insert(transactionID)
            
            let tranNo = appAccountToken.flatMap { PurchaseLinkManager.shared.getOrderID(for: $0) }
            
            await api.verifyPayment(
                tranNo: tranNo ?? "",
                productId: transaction.productID,
                productType: .vip,
                receiptData: receiptData,
                transactionId: String(transaction.id)
            )
            
            guard let result = api.verifyResult else {
                processedTransactionIDs.remove(transactionID)
                await MainActor.run {
                    NotificationCenter.default.post(
                     name: .subscriptionProcessed,
                     object: nil,
                     userInfo: [
                        "success": false,
                        "error": api.errorMessage ?? "verfiy Failed"]
                    )
                }
                return
            }
            await provider.finish(transaction: transaction)
            if let token = appAccountToken{
                PurchaseLinkManager.shared.removeLink(for: token)
            }
            await MainActor.run{
                NotificationCenter.default.post(
                    name: .subscriptionProcessed,
                    object: nil,
                    userInfo: [
                        "success": true,
                        "transactionId": transactionID]
                )
            }

            userSession.updateProfile(
                nickname: nil,
                avatar: nil,
                isVip: nil,
                balance: result.accountInfo?.money?.int32Value
            )
                
            
        }
    }
    
    func subscribe(plan: VipPackage) async throws {
        let goodsId = plan.id
        let sku = plan.sku
        
        await api.createOrder(goodsId: Int32(goodsId), productType: .vip)
        guard let order = api.createResult, let tranNo = order.tranNo else {
            let errorMsg = api.errorMessage ?? "Create Order Failed"
            throw SubscriptionServiceError.purchaseFailed(errorMsg)
        }
        let temporaryAppAccountToken = UUID()
        
        PurchaseLinkManager.shared.saveLink(orderID: tranNo, for: temporaryAppAccountToken)

        do {
        let rs = try await provider.purchase(sku: sku, appAccountToken: temporaryAppAccountToken)
            NotificationCenter.default.post(
                name: .storeKitTransactionReceived,
                object: nil,
                userInfo: [
                    "transaction": rs.transaction,
                    "receiptData": rs.receiptData,
                    "appAccountToken": temporaryAppAccountToken
                ]
            )
        } catch {
            PurchaseLinkManager.shared.removeLink(for: temporaryAppAccountToken)
            await api.cancelOrder(tranNo: tranNo)
            print("cancelOrder: \(error)")
            throw error
        }
    }

    func restore() async throws {
        try await provider.restore()
    }
    
}
