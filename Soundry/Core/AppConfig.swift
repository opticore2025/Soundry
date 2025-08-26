import Foundation

struct AppConfig {
//    #if DEBUG
//    static let baseURL = "https://amtapi.267girl.com"
//    static let s3URL = "https://s3.267girl.com/"
//    static let picURL = "https://pic.267girl.com/"
//    #else
    static let baseURL = "https://api.aisoundry.com"
    static let s3URL = "https://s3.aisoundry.com/"
    static let picURL = "https://pic.aisoundry.com/"
//    #endif
    
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
