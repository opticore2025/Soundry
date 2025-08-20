import AuthenticationServices
import Combine
import Factory
import SwiftUI

// MARK: - User Session ViewModel
@MainActor
class UserSessionViewModel: ObservableObject {
    @Injected(\.tokenManager) private var tokenManager

    @Injected(\.musicApiViewModel) private var musicApiViewModel:
        MusicApiViewModel
    @Injected(\.vipApiViewModel) private var vipApiViewModel: VIPApiViewModel

    @Published var isLoading: Bool = false
    @Published var errorMessage: String?

    @Published var userInfo: UserInfo? = nil
    @Published var isLoggedIn: Bool = false

    private var cancellables = Set<AnyCancellable>()
    private let userDefaults = UserDefaults.standard

    // MARK: - Initialization
    init() {
        setupBindings()
    }

    private func setupBindings() {
        // Monitor login state changes
        $isLoggedIn
            .sink { [weak self] isLoggedIn in
                self?.handleLoginStateChange(isLoggedIn)
            }
            .store(in: &cancellables)
    }

    // MARK: - Session Management
    func loadStoredSession() {
        if let userData = userDefaults.data(forKey: "userInfo"),
            let user = try? JSONDecoder().decode(UserInfo.self, from: userData),
            let authDataValue = userDefaults.data(forKey: "authData"),
            let authData = try? JSONDecoder().decode(
                AuthorizationInfo.self,
                from: authDataValue
            )
        {
            self.userInfo = user
            tokenManager.update(authInfo: authData)
            self.isLoggedIn = true
        }
    }

    func handleLoginSuccess(userInfo: UserInfo, authData: AuthorizationInfo) {
        do {
            try saveSession(userInfo: userInfo, authData: authData)
            self.userInfo = userInfo
            isLoggedIn = true
        } catch {
            print("\(error)")
        }
    }

    func saveSession(userInfo: UserInfo, authData: AuthorizationInfo) throws {
        let userData = try JSONEncoder().encode(userInfo)
        let authDataValue = try JSONEncoder().encode(authData)
        userDefaults.set(userData, forKey: "userInfo")
        userDefaults.set(authDataValue, forKey: "authData")
        tokenManager.update(authInfo: authData)
    }
    
    func saveUserInfo(_ userInfo: UserInfo) throws {
        let userData = try JSONEncoder().encode(userInfo)
        userDefaults.set(userData, forKey: "userInfo")
        self.userInfo = userInfo
    }

    func logout() {
        clearSession()
    }

    private func clearSession() {
        userDefaults.removeObject(forKey: "userInfo")
        userDefaults.removeObject(forKey: "authData")
        userInfo = nil
        isLoggedIn = false
        tokenManager.update(authInfo: nil)
        clearAllApiData()
    }

    private func clearAllApiData() {
        vipApiViewModel.clearData()
        musicApiViewModel.clearData()
    }

    private func handleLoginStateChange(_ isLoggedIn: Bool) {
        // Handle any side effects of login state changes
        if !isLoggedIn {
            // Clear any sensitive data
            errorMessage = nil
        }
    }

    // MARK: - Update profile without touching tokens
    func updateProfile(nickname: String?, avatar: String?) {
        guard let current = userInfo else { return }
        let updated = UserInfo(
            uid: current.uid,
            email: current.email,
            nickname: nickname ?? current.nickname,
            avatar: avatar ?? current.avatar,
            balance: current.balance
        )
        do {
            try saveUserInfo(updated)
        } catch {
            print("Failed to update user profile: \(error)")
            errorMessage = "Failed to update profile"
        }
    }
}
