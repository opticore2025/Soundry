import Factory
import SwiftUI

struct MainView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.meViewState) var meViewState: MeViewState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel:
        UserSessionViewModel
    @State private var showMusicGenerationView = false
    @State private var animateMusicView = false
    
    private let showMusicGenerationViewNotification = Notification.Name("ShowMusicGenerationView")
    private let hideMusicGenerationViewNotification = Notification.Name("HideMusicGenerationView")

    var body: some View {
        NavigationView {
            ZStack(alignment: .bottom) {
                Group {
                    switch appState.currentTab {
                    case .home:
                        HomeView()
                    case .ai:
                        if !showMusicGenerationView {
                            MusicGenerationView()
                        }
                    case .me:
                        MeView()
                    case .notifications:
                        NotificationsView()
                    case .settings:
                        SettingsView()
                    }
                }
                .frame(maxWidth: .infinity, maxHeight: .infinity)

                if appState.currentTab != .ai {
                    RootTabBar(currentTab: $appState.currentTab, showMusicGenerationView: $showMusicGenerationView)
                }
            }
            .onAppear {
                setupMusicGenerationViewObserver()
            }
            .onReceive(NotificationCenter.default.publisher(for: showMusicGenerationViewNotification)) { _ in
                withAnimation(.easeOut(duration: 0.3)) {
                    showMusicGenerationView = true
                }
            }
            .onReceive(NotificationCenter.default.publisher(for: hideMusicGenerationViewNotification)) { _ in
                withAnimation(.easeOut(duration: 0.3)) {
                    showMusicGenerationView = false
                }
            }
            .toolbar {
                ToolbarItem(placement: .navigationBarLeading) {
                    leadingItems
                }
                ToolbarItem(placement: .navigationBarTrailing) {
                    trailingItems
                }
            }
            // 登录界面overlay，覆盖底部导航栏
            .overlay(
                LoginOverlaysView()
            )
        }
        .overlay(
            Group {
                if showMusicGenerationView {
                    MusicGenerationView()
                        .transition(.move(edge: .bottom))
                        .zIndex(1)
                        .onAppear {
                            withAnimation(.easeOut(duration: 0.3)) {
                                animateMusicView = true
                            }
                        }
                        .onDisappear {
                            animateMusicView = false
                        }
                }
            }
        )
        .preferredColorScheme(.dark)
    }

    @ViewBuilder
    private var leadingItems: some View {
        switch appState.currentTab {
        case .home:
            Text("Soundry")
                .font(.title)
                .bold()
        case .me:
            NavigationLink(destination: NotificationsView()) {
                Image("notification-icon")
                    .resizable()
                    .scaledToFit()
                    .frame(width: 24, height: 24)
            }
        default:
            EmptyView()
        }
    }

    @ViewBuilder
    private var trailingItems: some View {
        switch appState.currentTab {
        case .home:
            NavigationLink(destination: SearchView()) {
                Image("search-icon")
                    .resizable()
                    .scaledToFit()
                    .frame(width: 24, height: 24)
            }
        case .me:
            NavigationLink(destination: SettingsView()) {
                Image("setting-icon")
                    .resizable()
                    .scaledToFit()
                    .frame(width: 24, height: 24)
            }
        default:
            EmptyView()
        }
    }
    
    private func setupMusicGenerationViewObserver() {
        NotificationCenter.default.addObserver(forName: showMusicGenerationViewNotification, object: nil, queue: .main) { _ in
            withAnimation(.easeOut(duration: 0.3)) {
                showMusicGenerationView = true
            }
        }
        
        NotificationCenter.default.addObserver(forName: hideMusicGenerationViewNotification, object: nil, queue: .main) { _ in
            withAnimation(.easeOut(duration: 0.3)) {
                showMusicGenerationView = false
            }
        }
    }

}

#Preview {
    MainView()
}
