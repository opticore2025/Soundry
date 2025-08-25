import Foundation

struct SubscriptionPurchase {
    let transactionId: String
    let receiptData: String
}

protocol SubscriptionProvider {
    func purchase(sku: String) async throws -> SubscriptionPurchase
    func restore() async throws
}


