import SwiftUI
import Factory

struct RootTabBar: View {
    @Binding var currentTab: AppState.Tab
    @InjectedObject(\.musicPlayerViewModel) var musicPlayerViewModel: MusicPlayerViewModel

    var body: some View {
        VStack(spacing: 0) {
            if musicPlayerViewModel.currentSong != nil {
                PlayerBarView()
            }
            
            ZStack(alignment: .bottom) {
                HStack(alignment: .bottom, spacing: 0) {
                    TabBarButton(tab: .home, currentTab: $currentTab)
                    
                    TabBarButton(tab: .ai, currentTab: $currentTab).hidden()
                    
                    TabBarButton(tab: .me, currentTab: $currentTab)
                }
                .frame(height: 65)
                .padding(.horizontal)
                .background(Color.black.ignoresSafeArea(.all, edges: .bottom))
                
                Button {
                    currentTab = .ai
                } label: {
                    Image("tabbar_music")
                        .resizable()
                        .aspectRatio(contentMode: .fill)
                        .frame(width: 95, height: 95)
                        .foregroundColor(.white)
                }
                .frame(width: 60, height: 60)
                .contentShape(Circle())
                .clipShape(Circle())
                .offset(y: -15)
            }
        }
    }
}

struct TabBarButton: View {
    let tab: AppState.Tab
    @Binding var currentTab: AppState.Tab

    var body: some View {
        Button {
            currentTab = tab
        } label: {
            VStack(spacing: 4) {
                if currentTab == tab {
                    Image(
                        systemName: tab.selectedIconName
                    )
                    .font(.system(size: 24))
                } else {
                    Image(
                        systemName: tab.iconName
                    )
                    .font(.system(size: 24))
                }

                Text(tab.rawValue)
                    .font(.caption)
            }
            .foregroundColor(currentTab == tab ? .white : .white.opacity(0.7))
            .frame(maxWidth: .infinity)
        }
    }
}

