import Factory
import Foundation
import APIClient
import SVProgressHUD

private func generateUserAgent() -> String {
    let device = UIDevice.current
    let screen = UIScreen.main
    let bundle = Bundle.main
    
    let uaComponents: [String] = [
        "i",
        String(describing: device.systemVersion),
        bundle.infoDictionary?["CFBundleVersion"] as? String ?? "0",
        bundle.infoDictionary?["CFBundleShortVersionString"] as? String ?? "0",
        device.identifierForVendor?.uuidString ?? "unknown",
        TimeZone.current.identifier,
        bundle.bundleIdentifier ?? "unknown",
        "appstore",
        "\(Locale.current.languageCode ?? "en"),\(Locale.current.identifier)",
        String(Int(screen.bounds.width * screen.scale)),
        String(Int(screen.bounds.height * screen.scale)),
        "Apple",
        String(describing: device.model),
        String(Int(Date().timeIntervalSince1970))
    ]
    
    return uaComponents.joined(separator: "|")
}

private func noticeNetworkErr() {
    DispatchQueue.main.async {
        SVProgressHUD.showError(withStatus: "Network Error")
        SVProgressHUD.dismiss(withDelay: 2)
    }
}

extension Container {
    var tokenManager: Factory<TokenManager> {
        self { TokenManager() }.singleton
    }

    var httpClient: Factory<Ktor_client_coreHttpClient> {
        self {
            HTTPClientFactory.shared.initialize(
                getAccessToken: {
                    return self.tokenManager().getAccessToken()
                },
                getUserAgent: {
                    return generateUserAgent()
                },
                handleUnauthorized: {
                    // TODO
                    print(">== Unauthorized ==<")
                },
                handleConnectionError: {
                    noticeNetworkErr()
                },
                handleTimeoutError: {
                    noticeNetworkErr()
                },
                handleDNSError: {
                    noticeNetworkErr()
                },
                handleSSLError: {
                    noticeNetworkErr()
                },
                handleUnknownError: { _ in
                    noticeNetworkErr()
                },
                isCarryUserAgent: true,
                isDebug: true
            )
            return HTTPClientFactory.shared.getClient()
        }
        .singleton
    }

    // MARK: - ViewModels
    /// ignore warning, fk swift6
    @MainActor
    var appState: Factory<AppState> {
        self { @MainActor in AppState() }.singleton
    }

    @MainActor
    var meViewState: Factory<MeViewState> {
        self { @MainActor in MeViewState() }.singleton
    }

    @MainActor
    var userSessionViewModel: Factory<UserSessionViewModel> {
        self { @MainActor in UserSessionViewModel() }.singleton
    }

    @MainActor
    var musicPlayerViewModel: Factory<MusicPlayerViewModel> {
        self { @MainActor in MusicPlayerViewModel() }.singleton
    }

    @MainActor
    var appApiViewModel: Factory<AppApiViewModel> {
        self { @MainActor in AppApiViewModel(client: self.httpClient()) }
            .singleton
    }

    @MainActor
    var applePayApiViewModel: Factory<ApplePayApiViewModel> {
        self { @MainActor in ApplePayApiViewModel(client: self.httpClient()) }
            .singleton
    }

    // MARK: - Subscription
    @MainActor
    var subscriptionProvider: Factory<SubscriptionProvider> {
        self { @MainActor in StoreKitSubscriptionProvider() }.singleton
    }

    @MainActor
    var subscriptionService: Factory<SubscriptionService> {
        self { @MainActor in SubscriptionService(provider: self.subscriptionProvider(), api: self.applePayApiViewModel()) }
            .singleton
    }

    @MainActor
    var authenticationApiViewModel: Factory<AuthenticationApiViewModel> {
        self { @MainActor in
            AuthenticationApiViewModel(client: self.httpClient())
        }.singleton
    }

    @MainActor
    var feedbackApiViewModel: Factory<FeedbackApiViewModel> {
        self { @MainActor in FeedbackApiViewModel(client: self.httpClient()) }
            .singleton
    }

    @MainActor
    var musicApiViewModel: Factory<MusicApiViewModel> {
        self { @MainActor in MusicApiViewModel(client: self.httpClient()) }
            .singleton
    }

    @MainActor
    var reportApiViewModel: Factory<ReportApiViewModel> {
        self { @MainActor in ReportApiViewModel(client: self.httpClient()) }
            .singleton
    }

    @MainActor
    var uploadApiViewModel: Factory<UploadApiViewModel> {
        self { @MainActor in UploadApiViewModel(client: self.httpClient()) }
            .singleton
    }

    @MainActor
    var vipApiViewModel: Factory<VIPApiViewModel> {
        self { @MainActor in VIPApiViewModel(client: self.httpClient()) }
            .singleton
    }
}
