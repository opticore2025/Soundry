import SwiftUI
import Factory

@main
struct SoundryApp: App {
    // State management
    @InjectedObject(\.appState) private var appState
    @InjectedObject(\.musicPlayerViewModel) private var musicPlayer
    @InjectedObject(\.userSessionViewModel) private var userSession
    @InjectedObject(\.musicApiViewModel) private var musicApiViewModel
    
    var body: some Scene {
        WindowGroup {
            ContentView()
                .preferredColorScheme(.dark)
                .onAppear {
                    setupApp()
                }
        }
    }
    
    private func setupApp() {
        // Configure app appearance
        configureAppearance()
        
        // Initialize audio session
        musicPlayer.setupAudioSession()
        
        // Load user session if exists
        userSession.loadStoredSession()
        
        Task {
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
