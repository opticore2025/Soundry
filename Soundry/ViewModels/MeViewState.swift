import SwiftUI
import APIClient
import Factory


// MARK: - MeView State Management
@MainActor
class MeViewState: ObservableObject {
    
    // 依赖注入，让 ViewModel 可以访问 API 和用户会话
    private let musicVM: MusicApiViewModel = Container.shared.musicApiViewModel()
    private let userSession: UserSessionViewModel = Container.shared.userSessionViewModel()
        

    @Published var currentTab: MeTab = .library
    @Published var showingSettings: Bool = false
    @Published var showingNotifications: Bool = false
    
    
    // Library (我的作品) Tab State
    @Published var worksList: [Any] = []
    @Published var isLoadingWorks = false
    @Published var hasMoreWorks = false
    private var worksCurrentPage: Int32 = 1
    private var loadedWorksForUserUID: Int32?

    // Likes (我的喜欢) Tab State
    @Published var likesList: [Any] = []
    @Published var isLoadingLikes = false
    @Published var hasMoreLikes = false
    private var likesCurrentPage: Int32 = 1
    private var loadedLikesForUserUID: Int32?
    
    enum MeTab: String, CaseIterable {
        case library = "My Library"
        case likes = "My Likes"
//        case drafts = "Drafts"  // 添加drafts选项
//        case downloads = "Downloads"
    }
    
    // MARK: - 下拉刷新逻辑
    func handleRefresh() async {
        // 1. 调用 getMusicMy 接口获取最新的用户信息
        await musicVM.getMusicMy()

        // 2. 使用返回的数据更新全局的用户会话信息
        // 这会自动更新 UserInfoView 和 CreditsSectionView
        if let apiUserInfo = musicVM.myData?.userInfo {
            let updatedUserInfo = UserInfo(
                uid: apiUserInfo.uid as! Int32,
                email: userSession.userInfo?.email ?? "",
                nickname: apiUserInfo.nickname ?? "",
                avatar: apiUserInfo.avatar ?? "",
                balance: apiUserInfo.credits?.int32Value ?? 0,
                isVip: apiUserInfo.isVip == 1
            )
            try? userSession.saveUserInfo(updatedUserInfo)
        }

        // 3. 并行强制刷新两个列表的数据
        await withTaskGroup(of: Void.self) { group in
            group.addTask { await self.forceRefreshWorks() }
            group.addTask { await self.forceRefreshLikes() }
        }
    }
    
    // MARK: - Logic for Library (我的作品)
    
    // 强制刷新，由 handleRefresh 调用
    private func forceRefreshWorks() async {
        worksCurrentPage = 1
        await loadMyWorks()
    }
    // 按需加载，由 onAppear 调用
    func loadMyWorksIfNeeded() {
        guard let currentUserUID = userSession.userInfo?.uid, !isLoadingWorks else { return }
        if worksList.isEmpty || loadedWorksForUserUID != currentUserUID {
            worksCurrentPage = 1
            Task { await loadMyWorks() }
        }
    }
        
    // REFACTORED: 核心加载逻辑改为 async 函数
    private func loadMyWorks() async {
        guard !isLoadingWorks else { return }
        isLoadingWorks = true
        
        // 如果是第一页，先清空列表以显示加载动画
        if worksCurrentPage == 1 {
            worksList = []
        }
        
        await musicVM.getMyMusic(page: worksCurrentPage, pageSize: 20)
        
        if let data = musicVM.myMusicList {
            if worksCurrentPage == 1 {
                worksList = data.list ?? []
            } else {
                worksList.append(contentsOf: data.list ?? [])
            }
            hasMoreWorks = data.hasMoreBoolean
            loadedWorksForUserUID = userSession.userInfo?.uid
        }
        isLoadingWorks = false
    }
        
    func loadMoreWorks() {
        guard hasMoreWorks, !isLoadingWorks else { return }
        worksCurrentPage += 1
        Task { await loadMyWorks() }
    }

    // MARK: - Logic for Likes (我的喜欢) - REFACTORED

     // 强制刷新
     private func forceRefreshLikes() async {
         likesCurrentPage = 1
         await loadLikedMusic()
     }
     
     // 按需加载
     func loadLikedMusicIfNeeded() {
         guard let currentUserUID = userSession.userInfo?.uid, !isLoadingLikes else { return }
         if likesList.isEmpty || loadedLikesForUserUID != currentUserUID {
             likesCurrentPage = 1
             Task { await loadLikedMusic() }
         }
     }
     
     // REFACTORED: 核心加载逻辑改为 async 函数
     private func loadLikedMusic() async {
         guard !isLoadingLikes else { return }
         isLoadingLikes = true
         
         if likesCurrentPage == 1 {
             likesList = []
         }
         
         await musicVM.getMyLikes(page: likesCurrentPage, pageSize: 20)

         if let data = musicVM.myLikeList {
             if likesCurrentPage == 1 {
                 likesList = data.list ?? []
             } else {
                 likesList.append(contentsOf: data.list ?? [])
             }
             hasMoreLikes = data.hasMoreBoolean
             loadedLikesForUserUID = userSession.userInfo?.uid
         }
         isLoadingLikes = false
     }
     
     func loadMoreLikes() {
         guard hasMoreLikes, !isLoadingLikes else { return }
         likesCurrentPage += 1
         Task { await loadLikedMusic() }
     }
     
     // MARK: - User Session Management (无变化)
     func clearAllDataOnLogout() {
         worksList = []
         loadedWorksForUserUID = nil
         worksCurrentPage = 1
         likesList = []
         loadedLikesForUserUID = nil
         likesCurrentPage = 1
     }
}

