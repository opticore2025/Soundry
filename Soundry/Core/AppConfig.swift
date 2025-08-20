import Foundation

struct AppConfig {
    
    static let baseURL = "https://api.aisoundry.com"
    static let s3URL = "https://s3.aisoundry.com/"
    static let picURL = "https://pic.aisoundry.com/"
    
    static let info = AppInfo(
        name: "Soundry",
        version: "1.0.0",
        logo: "logo"
    )
}

// MARK: - App Info Model
struct AppInfo {
    let name: String
    let version: String
    let logo: String
}
