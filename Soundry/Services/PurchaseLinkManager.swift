import Foundation

class PurchaseLinkManager {
    
    static let shared = PurchaseLinkManager()
    
    private let userDefaults = UserDefaults.standard
    private let storageKey = "pending_purchase_links"

    private init() {}

    func saveLink(orderID: String, for token: UUID) {
        var links = userDefaults.dictionary(forKey: storageKey) as? [String: String] ?? [:]
        links[token.uuidString] = orderID
        userDefaults.set(links, forKey: storageKey)
    }

    func getOrderID(for token: UUID) -> String? {
        let links = userDefaults.dictionary(forKey: storageKey) as? [String: String] ?? [:]
        let orderID = links[token.uuidString]
        return orderID
    }

    func removeLink(for token: UUID) {
        var links = userDefaults.dictionary(forKey: storageKey) as? [String: String] ?? [:]
        if links.removeValue(forKey: token.uuidString) != nil {
            userDefaults.set(links, forKey: storageKey)
        }
    }
}
