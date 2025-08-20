import SwiftUI



// MARK: - MeView State Management
@MainActor
class MeViewState: ObservableObject {
    @Published var currentTab: MeTab = .library
    @Published var showingSettings: Bool = false
    @Published var showingNotifications: Bool = false
    
    
    enum MeTab: String, CaseIterable {
        case library = "My Library"
        case likes = "My Likes"
//        case drafts = "Drafts"  // 添加drafts选项
//        case downloads = "Downloads"
    }
}
