import Foundation

struct UserInfo: Codable {
    let uid: Int32
    let email: String
    let nickname: String
    let avatar: String
    let balance: Int32
}

struct AuthorizationInfo: Codable {
    let accessToken: String
    let refreshToken: String?
}
