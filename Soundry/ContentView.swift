import SwiftUI
import Factory

struct ContentView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    
    var body: some View {
        MainView()
    }
}

#Preview {
    ContentView()
        .environmentObject(AppState())
        .environmentObject(MusicPlayerViewModel())
        .environmentObject(UserSessionViewModel())
        .preferredColorScheme(.dark)
}
