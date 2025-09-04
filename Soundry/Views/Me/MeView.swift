import SwiftUI
import Factory
import SDWebImageSwiftUI
import AuthenticationServices
import UIKit
import APIClient
import SVProgressHUD

struct MeView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.meViewState) var meViewState: MeViewState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    
    var body: some View {
        NavigationView {
            ZStack {
                Color.black
                    .edgesIgnoringSafeArea(.all)
                
                VStack(spacing: 0) {
                    ScrollView {
                        VStack(spacing: 20) {
                            UserInfoView(onCopy: {})
                            CreditsSectionView()
                            TabsSectionView(meViewState: meViewState)
                        }
                        .padding(.top)
                        .padding(.bottom, 80)
                    }
                    .scrollDisabled(appState.showingLogin)
                    .refreshable {
                        if userSession.isLoggedIn{
                            await meViewState.handleRefresh()
                            
                        }

                        }
                    }
                }
            }
        //监听用户信息变化
        .onChange(of: userSession.isLoggedIn){ isLoggedIn in
            if !isLoggedIn {
                // 用户登出清空数据
                meViewState.clearAllDataOnLogout()
            }
        }
    }
}

// 用户信息组件
struct UserInfoView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    let onCopy: () -> Void
    @State private var copyTapped: Bool = false
    @State private var userAvatar: UIImage? // 存储用户头像
    
    init(onCopy: @escaping () -> Void = {}) {
        self.onCopy = onCopy
    }
    
    var body: some View {
        HStack(spacing: 15) {

            if let avatarUrlStr = userSession.userInfo?.avatar, !avatarUrlStr.isEmpty {
                WebImage(url: ResourceUtils.shared.imageURL(avatarUrlStr))
                    .scaledToFill()
                    .frame(width: 80, height: 80)
                    .clipShape(Circle())
            } else {
                Image(systemName: "person.crop.circle.fill")
                    .resizable()
                    .frame(width: 80, height: 80)
                    .foregroundColor(.gray)
            }

            VStack(alignment: .leading, spacing: 6) {
                if userSession.isLoggedIn {
                    if let userInfo = userSession.userInfo {
                        HStack{
                            Text(userInfo.nickname)
                                .font(.title2)
                                .fontWeight(.bold)
                                .foregroundColor(.white)
                            if userInfo.isVip ?? false{
                                Image("vip-icon")
                                    .resizable()
                                    .scaledToFit()
                                    .frame(height: 22)
                                    .alignmentGuide(.firstTextBaseline) { $0[.bottom] }
                            }
                        }
                        
                        
                        HStack(spacing: 8) {
                            Text(String(format: "ID: %ld", userInfo.uid))
                                .font(.subheadline)
                                .foregroundColor(.gray)
                            
                            // 复制按钮
                            Button(action: copyToClipboard) {
                                Image(systemName: "square.on.square")
                                    .foregroundColor(.gray)
                                    .font(.system(size: 14, weight: .medium))
                            }
                            .scaleEffect(copyTapped ? 0.85 : 1.0)
                            .animation(.spring(response: 0.2, dampingFraction: 0.6), value: copyTapped)
                        }
                    } else {
                        Text("Loading...")
                            .font(.title2)
                            .fontWeight(.bold)
                            .foregroundColor(.white)
                    }
                } else {
                    VStack(alignment: .leading, spacing: 12) {
                        Text("Not logged in")
                            .font(.title2)
                            .fontWeight(.bold)
                            .foregroundColor(.gray)
                        
                        Button(action: {
                            // 点击登录按钮时，从底部弹出登录页面
                            appState.showLogin()
                        }) {
                            Text("Login & Register")
                                .font(.subheadline)
                                .fontWeight(.semibold)
                                .foregroundColor(.black)
                                .frame(maxWidth: .infinity)
                                .padding(.vertical, 8)
                                .background(Color.white)
                                .cornerRadius(8)
                                .multilineTextAlignment(.center)
                        }
                    }
                }
            }
            Spacer()
        }
        .padding(.horizontal)
        .onAppear {
            loadUserAvatar()
            
        }
        .onChange(of: userSession.userInfo?.avatar) { _ in
            // 当用户头像信息更新时，重新加载头像
            loadUserAvatar()
        }
    }
    
    // MARK: - 复制到剪贴板
    private func copyToClipboard() {
        guard let userInfo = userSession.userInfo else { return }
            
        // 触觉反馈
        UIImpactFeedbackGenerator(style: .light).impactOccurred()
            
        // 复制到剪贴板
        UIPasteboard.general.string = "\(userInfo.uid)"
            
        // 使用SVProgressHUD显示复制成功提示
        SVProgressHUD.showSuccess(withStatus: "Copied successfully")
        SVProgressHUD.dismiss(withDelay: 0.5)
            
        // 调用复制成功回调
        onCopy()
            
        // 恢复按钮状态
        DispatchQueue.main.asyncAfter(deadline: .now() + 0.15) {
            withAnimation(.spring(response: 0.15, dampingFraction: 0.7)) {
                copyTapped = false
            }
        }
    }

    
    // 加载用户头像
    private func loadUserAvatar() {
        if let uid = userSession.userInfo?.uid,
            let avatarPath = UserDefaults.standard.string(forKey: "userAvatarPath_\(uid)"),
            let imageData = try? Data(contentsOf: URL(fileURLWithPath: avatarPath)),
            let image = UIImage(data: imageData) {
            userAvatar = image
        } else {
            userAvatar = nil
        }
    }
}

 // 积分区域组件
struct CreditsSectionView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    @State private var navigateToVip: Bool = false
    
    var body: some View {
        VStack(spacing: 20) {
            HStack {
                Text("Remaining Credits")
                    .font(.headline)
                    .fontWeight(.semibold)
                    .foregroundColor(.white)
                Spacer()
                HStack(spacing: 6) {
                    Image("credit_icon")
                        .resizable()
                        .scaledToFit()
                        .frame(width: 25, height: 25)
                        .foregroundColor(.yellow)
                    if userSession.isLoggedIn {
                        Text("\(userSession.userInfo?.balance ?? 0)")
                            .fontWeight(.bold)
                            .foregroundColor(.yellow)
                    } else {
                        Text("0")
                            .fontWeight(.bold)
                            .foregroundColor(.gray)
                    }
                }
            }

            Button {
                if userSession.isLoggedIn {
                    // 已登录：跳转到 VIP 购买页
                    navigateToVip = true
                } else {
                    // 未登录状态下弹出登录界面
                    appState.showLogin()
                }
            } label: {
                Text("Add Credits")
                    .font(.headline)
                    .fontWeight(.semibold)
                    .frame(maxWidth: .infinity)
                    .padding(.vertical, 12)
                    .background(Color(UIColor.systemYellow).opacity(0.2))
                    .foregroundColor(.yellow)
                    .cornerRadius(12)
                    .shadow(color: .blue.opacity(0.2), radius: 4, x: 0, y: 2)
            }
        }
        .padding(20)
        .cornerRadius(18)
        .padding(.horizontal)
        .frame(height: 160)
        .fullScreenCover(isPresented: $navigateToVip) {
            VipView()
        }
    }
}

// 优化后的标签区域组件
struct TabsSectionView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    
    //接收meviewstate实例
    @ObservedObject var meViewState : MeViewState
    
    private let tabs = MeViewState.MeTab.allCases
    
    var body: some View {
        VStack(spacing: 0) {
            // 标签栏
            HStack(spacing: 0) {
                ForEach(tabs, id: \.self) { tab in
                    TabButton(tab: tab, selectedTab: $meViewState.currentTab)
                }
            }
            .background(Color.black)
            
            // 标签内容区域
            TabView(selection: $meViewState.currentTab) {
                ForEach(tabs, id: \.self) { tab in
                    if userSession.isLoggedIn {
                        switch tab {
                        case .library:
                            MyLibraryView(meViewState: meViewState)
                                .tag(tab)
                        case .likes:
                            MyLikesView(meViewState: meViewState)
                                .tag(tab)
                        }
                    } else {
                        TabLoginPromptView(appState: appState)
                            .tag(tab)
                    }
                }
            }
            .tabViewStyle(.page(indexDisplayMode: .never))
            .frame(height: 300)
        }
        .frame(maxWidth: .infinity)
    }
}

// 标签页空状态组件
struct TabEmptyStateView: View {
    var body: some View {
        VStack(spacing: 20) {
            Image("music_empty")
                .resizable()
                .scaledToFit()
                .frame(width: 80, height: 80)
                .foregroundColor(.gray)
            
            Text("There's nothing here")
                .font(.subheadline)
                .foregroundColor(.gray)
                .multilineTextAlignment(.center)
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(Color.black)
    }
}

// 标签页登录提示组件
struct TabLoginPromptView: View {
    @ObservedObject var appState: AppState
    
    var body: some View {
        VStack(spacing: 20) {
            Image("music_empty")
                .resizable()
                .scaledToFit()
                .frame(width: 80, height: 80)
                .foregroundColor(.gray)
            
            Text("Please login to view this content")
                .font(.subheadline)
                .foregroundColor(.gray)
                .multilineTextAlignment(.center)
            
            Button(action: {
                appState.showLogin()
            }) {
                Text("Login Now")
                    .font(.subheadline)
                    .fontWeight(.semibold)
                    .foregroundColor(.white)
                    .frame(width: 120, height: 36)
                    .background(Color.blue)
                    .cornerRadius(18)
            }
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(Color.black)
    }
}

// 单个标签按钮组件
struct TabButton: View {
    let tab: MeViewState.MeTab
    @Binding var selectedTab: MeViewState.MeTab
    
    var body: some View {
        Button(action: {
            withAnimation(.easeInOut) {
                selectedTab = tab
            }
        }) {
            VStack(spacing: 4) {
                Text(tab.rawValue)
                    .fontWeight(selectedTab == tab ? .bold : .regular)
                    .foregroundColor(selectedTab == tab ? .white : .gray)
                
                if selectedTab == tab {
                    Color.blue
                        .frame(height: 2)
                } else {
                    Color.clear.frame(height: 2)
                }
            }
            .padding(.vertical, 12)
        }
        .frame(maxWidth: .infinity)
        .buttonStyle(PlainButtonStyle())
    }
}


// 优化后的我的作品视图
struct MyLibraryView: View {
    // 从环境中获取共享的 MeViewState 实例
    @ObservedObject var meViewState: MeViewState
    
    var body: some View {
        VStack {
            // UI直接绑定 ViewModel 的属性
            if meViewState.isLoadingWorks && meViewState.worksList.isEmpty {
                VStack(spacing: 16) {
                    ProgressView().scaleEffect(1.2)
                    Text("Loading your works...").foregroundColor(.gray)
                }
            } else if !meViewState.worksList.isEmpty {
                ScrollView {
                    LazyVStack(spacing: 12) {
                        ForEach(Array(meViewState.worksList.enumerated()), id: \.offset) { index, musicItem in
                            LikedMusicItemView(musicItem: musicItem)
                            
                            // 上拉加载更多
                            if index == meViewState.worksList.count - 1 && meViewState.hasMoreWorks && !meViewState.isLoadingWorks {
                                Button(action: { meViewState.loadMoreWorks() }) {
                                    HStack {
                                        ProgressView().scaleEffect(0.8)
                                        Text("Loading more...").font(.caption)
                                    }
                                    .foregroundColor(.gray)
                                    .padding(.vertical, 8)
                                }
                            }
                        }
                    }
                    .padding(.horizontal)
                }
            } else {
                // 空状态或错误状态
                TabEmptyStateView()
            }
        }
        .onAppear {
            // 视图出现时，让 ViewModel 决定是否需要加载数据
            meViewState.loadMyWorksIfNeeded()
        }
    }
}

// 优化后的我的喜欢音乐视图
struct MyLikesView: View {
    // 从环境中获取共享的 MeViewState 实例
    @ObservedObject var meViewState: MeViewState
    
    var body: some View {
        VStack {
            if meViewState.isLoadingLikes && meViewState.likesList.isEmpty {
                VStack(spacing: 16) {
                    ProgressView().scaleEffect(1.2)
                    Text("Loading your liked music...").foregroundColor(.gray)
                }
            } else if !meViewState.likesList.isEmpty {
                ScrollView {
                    LazyVStack(spacing: 12) {
                        ForEach(Array(meViewState.likesList.enumerated()), id: \.offset) { index, musicItem in
                            LikedMusicItemView(musicItem: musicItem)
                            
                            if index == meViewState.likesList.count - 1 && meViewState.hasMoreLikes && !meViewState.isLoadingLikes {
                                Button(action: { meViewState.loadMoreLikes() }) {
                                     HStack {
                                        ProgressView().scaleEffect(0.8)
                                        Text("Loading more...").font(.caption)
                                    }
                                    .foregroundColor(.gray)
                                    .padding(.vertical, 8)
                                }
                            }
                        }
                    }
                    .padding(.horizontal)
                }
            } else {
                TabEmptyStateView()
            }
        }
        .onAppear {
            meViewState.loadLikedMusicIfNeeded()
        }
    }
}


// MARK: - 喜欢的音乐项视图
struct LikedMusicItemView: View {
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    @InjectedObject(\.musicPlayerViewModel) var playerVM: MusicPlayerViewModel
    let musicItem: Any
    
    var body: some View {
        HStack(spacing: 12) {
            // 封面（使用 ResourceUtils 生成图片URL）
            WebImage(url: ResourceUtils.shared.imageURL(getCoverUrl())) { image in
                image
                    .resizable()
                    .scaledToFill()
            } placeholder: {
                Rectangle().fill(Color.gray.opacity(0.3))
            }
            .frame(width: 60, height: 60)
            .cornerRadius(8)
            
            // 详情
            VStack(alignment: .leading, spacing: 4) {
                Text(getTitle())
                    .font(.subheadline)
                    .fontWeight(.medium)
                    .foregroundColor(.white)
                    .lineLimit(2)
                
                if let artist = getArtist(), !artist.isEmpty {
                    Text(artist)
                        .font(.caption)
                        .foregroundColor(.gray)
                        .lineLimit(1)
                }
                
                HStack(spacing: 8) {
                    HStack(spacing: 4) {
                        Image(systemName: "heart.fill").font(.caption).foregroundColor(.red)
                        Text("\(getLikeCount())").font(.caption).foregroundColor(.gray)
                    }
                    HStack(spacing: 4) {
                        Image(systemName: "play.fill").font(.caption).foregroundColor(.blue)
                        Text("\(getPlayCount())").font(.caption).foregroundColor(.gray)
                    }
                }
            }
            Spacer()
            
            // 播放
            Button(action: playTapped) {
                Image(systemName: "play.circle.fill")
                    .font(.title2)
                    .foregroundColor(.white)
            }
        }
        .padding(.vertical, 8)
        .padding(.horizontal, 12)
        .background(Color.gray.opacity(0.1))
        .cornerRadius(12)
        .contentShape(Rectangle())
        .onTapGesture(perform: playTapped)
    }
    
    // MARK: - Actions
    private func playTapped() {
        guard let id = getId() else { return }
        Task {
            await musicVM.getMusicDetail(id: Int32(id))
            if let detail = musicVM.musicDetail {
                playerVM.play(song: detail)
            }
        }
    }
    
    // MARK: - Field extractors
    private func normalizedInt(_ value: Any?) -> Int {
        guard let value else { return 0 }
        if let v = value as? Int { return v }
        if let v = value as? Int32 { return Int(v) }
        if let v = value as? Int64 { return Int(v) }
        if let v = value as? UInt { return Int(v) }
        if let v = value as? NSNumber { return v.intValue }
        if let v = value as? String { return Int(v) ?? 0 }
        return 0
    }
    
    private func childValue<T>(_ labels: [String]) -> T? {
        let mirror = Mirror(reflecting: musicItem)
        for child in mirror.children {
            if let label = child.label, labels.contains(label) {
                return child.value as? T
            }
        }
        return nil
    }
    
    private func nestedChildValue<T>(_ rootLabels: [String], _ labels: [String]) -> T? {
        let mirror = Mirror(reflecting: musicItem)
        for child in mirror.children {
            if let label = child.label, rootLabels.contains(label) {
                let inner = Mirror(reflecting: child.value)
                for c in inner.children {
                    if let l = c.label, labels.contains(l) {
                        return c.value as? T
                    }
                }
            }
        }
        return nil
    }
    
    private func getId() -> Int? {
        if let item = musicItem as? MusicListItem { return normalizedInt(item.id) }
        if let v: Int = childValue(["id", "musicId", "mid"]) { return v }
        if let v: Int32 = childValue(["id", "musicId"]) { return Int(v) }
        if let v: Int64 = childValue(["id"]) { return Int(v) }
        if let s: String = childValue(["id", "musicId"]) { return Int(s) }
        return nil
    }
    
    private func getTitle() -> String {
        if let item = musicItem as? MusicListItem { return item.title ?? "Unknown Title" }
        if let v: String = childValue(["title", "name", "musicName"]) { return v }
        return "Unknown Title"
    }
    
    private func getArtist() -> String? {
        if let item = musicItem as? MusicListItem {
            // 尝试从嵌套userInfo/nickname不存在时回退到uid
            if let nick: String = nestedChildValue(["user", "userInfo", "owner"], ["nickname"]) { return nick }
            // 使用uid作为显示
            let uidInt = normalizedInt(item.uid)
            return uidInt == 0 ? nil : "UID \(uidInt)"
        }
        if let v: String = childValue(["artist", "nickname", "author"]) { return v }
        if let v: String = nestedChildValue(["user", "userInfo", "owner"], ["nickname"]) { return v }
        return nil
    }
    
    private func getCoverUrl() -> String {
        if let item = musicItem as? MusicListItem { return item.coverMediaUrl ?? "" }
        if let v: String = childValue(["coverMediaUrl", "coverUrl", "cover", "cover_url", "image"]) { return v }
        return ""
    }
    
    private func getLikeCount() -> Int {
        if let item = musicItem as? MusicListItem {
            if let s = item.like { return Int(s) ?? 0 }
            return 0
        }
        if let v: Int = childValue(["likeCount", "likes"]) { return v }
        if let v: Int32 = childValue(["likeCount"]) { return Int(v) }
        if let s: String = childValue(["like"]) { return Int(s) ?? 0 }
        return 0
    }
    
    private func getPlayCount() -> Int {
//      if let item = musicItem as? MusicListItem { return 0 }
        if let v: Int = childValue(["playCount", "plays"]) { return v }
        if let v: Int32 = childValue(["playCount"]) { return Int(v) }
        if let s: String = childValue(["play"]) { return Int(s) ?? 0 }
        return 0
    }
}


#Preview {
    MeView()
        .preferredColorScheme(.dark)
}
