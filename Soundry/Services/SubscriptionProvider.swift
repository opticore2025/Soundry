import Foundation
import StoreKit

/// 一个结构体，用于在购买流程中传递交易详情。
/// 已恢复为使用旧版的 Base64 receiptData。
struct SubscriptionPurchase {
    let transaction: Transaction
    
    /// 旧版的 Base64 编码收据字符串。
    let receiptData: String
    
    /// 对原始 StoreKit Transaction 对象的引用，
    /// 用于在服务器验证成功后安全地完成交易。
    let rawTransaction: Transaction
}

/// 定义了所有内购提供商必须遵守的接口。
protocol SubscriptionProvider {
    /// 为给定的产品标识符（SKU）启动购买流程。
    /// - Parameter appAccountToken: 一个与用户账户关联的唯一标识符（UUID），用于追踪交易。
    func purchase(sku: String, appAccountToken: UUID?) async throws -> SubscriptionPurchase
    
    /// 恢复用户过去的所有购买。
    func restore() async throws
    
    /// 在服务器成功验证后，完成一个交易。
    /// 这是防止“掉单”的关键步骤。
    func finish(transaction: Transaction) async
}

