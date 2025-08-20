import Factory
import SwiftUI

struct MainView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.meViewState) var meViewState: MeViewState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel:
        UserSessionViewModel

    var body: some View {
        NavigationView {
            ZStack(alignment: .bottom) {
                Group {
                    switch appState.currentTab {
                    case .home:
                        HomeView()
                    case .ai:
                        MusicGenerationView()
                    case .me:
                        MeView()
                    case .notifications:
                        NotificationsView()
                            .navigationBarHidden(true)
                    case .settings:
                        SettingsView()
                            .navigationBarHidden(true)
                    }
                }
                .frame(maxWidth: .infinity, maxHeight: .infinity)

                if appState.currentTab != .ai
                    && appState.currentTab != .notifications
                    && appState.currentTab != .settings
                {
                    RootTabBar(currentTab: $appState.currentTab)
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
            Button {
                if userSessionViewModel.isLoggedIn {
                    appState.currentTab = .notifications
                } else {
                    appState.showLogin()
                }
            } label: {
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
            Button {
                appState.currentTab = .settings
            } label: {
                Image("setting-icon")
                    .resizable()
                    .scaledToFit()
                    .frame(width: 24, height: 24)
            }
        default:
            EmptyView()
        }
    }

}

#Preview {
    MainView()
}
