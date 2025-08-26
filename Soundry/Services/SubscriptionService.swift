import Foundation
import APIClient

enum SubscriptionError: Error {
    case invalidPlan
    case productNotFound
    case purchaseFailed(String)
    case verifyFailed(String)
}

@MainActor
final class SubscriptionService {
    private let provider: SubscriptionProvider
    private let api: ApplePayApiViewModel

    init(provider: SubscriptionProvider, api: ApplePayApiViewModel) {
        self.provider = provider
        self.api = api
    }

    private func parseGoodsId(_ any: Any?) -> Int32? {
        switch any {
        case let i as Int:
            return Int32(i)
        case let i64 as Int64:
            return Int32(clamping: i64)
        case let d as Double:
            return Int32(d)
        case let n as NSNumber:
            return Int32(truncating: n)
        case let k as KotlinInt:
            return Int32(k.intValue)
        case let s as String:
            let trimmed = s.trimmingCharacters(in: .whitespacesAndNewlines)
            return Int32(trimmed)
        default:
            return nil
        }
    }

    func subscribe(plan: VipPackage) async throws {
        guard let goodsId = parseGoodsId(plan.id) else {
            print("[SubscriptionService] Invalid goodsId. Raw id=\(String(describing: plan.id)) type=\(type(of: plan.id))")
            throw SubscriptionError.invalidPlan
        }
//        let sku = "vip_one_m"
        // parse sku from backend
        let sku: String = {
            if let s = plan.sku as? String { return s.trimmingCharacters(in: .whitespacesAndNewlines) }
            if let n = plan.sku as? NSNumber { return n.stringValue }
            return ""
        }()
        guard !sku.isEmpty else {
            print("[SubscriptionService] Invalid sku. Raw sku=\(String(describing: plan.sku)) type=\(type(of: plan.sku))")
            throw SubscriptionError.invalidPlan
        }

        await api.createOrder(goodsId: goodsId, productType: .vip)
        guard let order = api.createResult, let tranNo = order.tranNo as? String else {
            throw SubscriptionError.purchaseFailed(api.errorMessage ?? "Create order failed")
        }

        let purchaseResult = try await provider.purchase(sku: sku)
        
        // Validate receipt data before sending to backend
        print("[SubscriptionService] Purchase completed, transactionId=\(purchaseResult.transactionId)")
        print("[SubscriptionService] Receipt data length=\(purchaseResult.receiptData.count) chars")
        print("[SubscriptionService] Receipt first 100 chars: \(String(purchaseResult.receiptData.prefix(100)))")
        
        // Basic validation - just check length
        guard purchaseResult.receiptData.count > 100 else {
            print("[SubscriptionService] ERROR: Receipt too short for backend verification")
            throw SubscriptionError.purchaseFailed("Receipt data too short")
        }
        
        print("[SubscriptionService] Receipt validation passed - ready for backend verification")

        await api.verifyPayment(
            tranNo: tranNo,
            productId: sku,
            productType: .vip,
            receiptData: purchaseResult.receiptData,
            transactionId: purchaseResult.transactionId
        )

        guard api.verifyResult != nil else {
            throw SubscriptionError.verifyFailed(api.errorMessage ?? "Verify failed")
        }
    }

    func restore() async throws {
        try await provider.restore()
    }
}


