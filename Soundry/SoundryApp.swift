import SwiftUI
import Factory

@main
struct SoundryApp: App {
    // State management
    @InjectedObject(\.appState) private var appState
    @InjectedObject(\.musicPlayerViewModel) private var musicPlayer
    @InjectedObject(\.userSessionViewModel) private var userSession
    @InjectedObject(\.appApiViewModel) private var appApiViewModel
    @InjectedObject(\.musicApiViewModel) private var musicApiViewModel
    @Injected(\.subscriptionService) private var subscriptionService
    
    
    
    var body: some Scene {
        WindowGroup {
            ContentView()
                .preferredColorScheme(.dark)
                .onAppear {
                    setupApp()
                }
                .onReceive(NotificationCenter.default.publisher(for: UIApplication.willEnterForegroundNotification)) { _ in
                    Task {
                        await appApiViewModel.openApp()
                    }
                }
                .onReceive(NotificationCenter.default.publisher(for: UIApplication.didEnterBackgroundNotification)) { _ in
                    Task {
                        await appApiViewModel.closeApp()
                    }
                }
        }
    }
    
    private func setupApp() {
        
        // 主动调用一次 subscriptionService，确保它的实例被创建，监听器开始运行
        // 我们不需要用它做什么，所以用 _ 忽略返回值即可
        _ = self.subscriptionService
        print("🚀 SubscriptionService has been initialized and is listening for transactions.")
        
        // Configure app appearance
        configureAppearance()
        
        // Initialize audio session
        musicPlayer.setupAudioSession()
        
        // Load user session if exists
        userSession.loadStoredSession()
        
        Task {
            await appApiViewModel.initializeApp()
            await musicApiViewModel.getMusicOptions()
        }
        
        
    }
    
    private func configureAppearance() {
        // Configure tab bar appearance
        let tabBarAppearance = UITabBarAppearance()
        tabBarAppearance.configureWithOpaqueBackground()
        tabBarAppearance.backgroundColor = UIColor.black
        tabBarAppearance.stackedLayoutAppearance.normal.iconColor = UIColor.white.withAlphaComponent(0.7)
        tabBarAppearance.stackedLayoutAppearance.normal.titleTextAttributes = [
            .foregroundColor: UIColor.white.withAlphaComponent(0.7),
            .font: UIFont.systemFont(ofSize: 12)
        ]
        tabBarAppearance.stackedLayoutAppearance.selected.iconColor = UIColor.white
        tabBarAppearance.stackedLayoutAppearance.selected.titleTextAttributes = [
            .foregroundColor: UIColor.white,
            .font: UIFont.systemFont(ofSize: 12, weight: .medium)
        ]
        
        UITabBar.appearance().standardAppearance = tabBarAppearance
        UITabBar.appearance().scrollEdgeAppearance = tabBarAppearance
    }
}
