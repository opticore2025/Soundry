import Foundation

class TokenManager {
    private var authInfo: AuthorizationInfo?

    func getAccessToken() -> String {
        return authInfo?.accessToken ?? ""
    }

    func getRefreshToken() -> String? {
        return authInfo?.refreshToken
    }

    func update(authInfo: AuthorizationInfo?) {
        self.authInfo = authInfo
    }
}
