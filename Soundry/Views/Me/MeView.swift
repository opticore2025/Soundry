import SwiftUI
import Factory
import AuthenticationServices
import UIKit
import APIClient

// MARK: - Constants
private enum Constants {
    static let animationDuration: Double = 0.3
    static let cornerRadius: CGFloat = 20
    static let buttonHeight: CGFloat = 48
    static let iconSize: CGFloat = 24
    static let logoSize: CGFloat = 64
    static let titleFontSize: CGFloat = 30
    static let subtitleFontSize: CGFloat = 16
    static let buttonFontSize: CGFloat = 16
    static let smallFontSize: CGFloat = 12
    static let spacing: CGFloat = 20
    static let smallSpacing: CGFloat = 16
    static let largeSpacing: CGFloat = 48
    static let mediumSpacing: CGFloat = 26
    static let bottomSpacing: CGFloat = 40
    static let overlayHeightRatio: CGFloat = 0.74
    static let transparentHeightRatio: CGFloat = 0.26
    static let maxOverlayHeight: CGFloat = 600
    static let backgroundOpacity: Double = 0.4
    static let disabledOpacity: Double = 0.5
}

struct MeView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.meViewState) var meViewState: MeViewState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    @State private var showCopyToast: Bool = false
    
    var body: some View {
        NavigationView {
            ZStack {
                Color.black
                    .edgesIgnoringSafeArea(.all)
                
                VStack(spacing: 0) {
                    ScrollView {
                        VStack(spacing: 20) {
                            // 传递复制回调函数到UserInfoView
                            UserInfoView(onCopy: {
                                showToast()
                            })
//                            CreditsSectionView()
                            TabsSectionView()
                        }
                        .padding(.top)
                        .padding(.bottom, 80)
                    }
                    .scrollDisabled(appState.showingLogin)
                }
            }
        }
        .overlay(alignment: .top) {
            // 复制成功弹窗
            CopyToastView(isShowing: showCopyToast)
        }
    }
    
    // MARK: - 显示复制成功弹窗
    private func showToast() {
        withAnimation(.easeInOut(duration: 0.15)) {
            showCopyToast = true
        }
        
        // 1.4秒后自动隐藏弹窗
        DispatchQueue.main.asyncAfter(deadline: .now() + 1.4) {
            withAnimation(.easeOut(duration: 0.2)) {
                showCopyToast = false
            }
        }
    }
}

// MARK: - 复制成功弹窗组件
struct CopyToastView: View {
    let isShowing: Bool
    
    var body: some View {
        if isShowing {
            HStack(spacing: 8) {
                // 成功图标
                Image(systemName: "checkmark.circle.fill")
                    .foregroundColor(.green)
                    .font(.system(size: 16, weight: .semibold))
                
                Text("Copied")
                    .font(.system(size: 14, weight: .medium))
                    .foregroundColor(.white)
            }
            .padding(.horizontal, 16)
            .padding(.vertical, 10)
            .background(
                RoundedRectangle(cornerRadius: 20)
                    .fill(Color.black.opacity(0.85))
                    .overlay(
                        RoundedRectangle(cornerRadius: 20)
                            .stroke(Color.white.opacity(0.2), lineWidth: 1)
                    )
            )
            .transition(.asymmetric(
                insertion: .scale.combined(with: .opacity),
                removal: .opacity
            ))
            .padding(.top, 60)
        }
    }
}

// 通用底部弹出容器
struct BottomSheetOverlay<Content: View>: View {
    let isPresented: Bool
    let onDismiss: () -> Void
    let content: Content
    
    init(isPresented: Bool, onDismiss: @escaping () -> Void, @ViewBuilder content: () -> Content) {
        self.isPresented = isPresented
        self.onDismiss = onDismiss
        self.content = content()
    }
    
    var body: some View {
        if isPresented {
            GeometryReader { geometry in
                ZStack {
                    // 半透明背景遮罩
                    Color.black.opacity(Constants.backgroundOpacity)
                        .ignoresSafeArea()
                        .onTapGesture {
                            withAnimation(.easeInOut(duration: 0.3)) {
                                onDismiss()
                            }
                        }
                    
                    // 内容区域
                    VStack(spacing: 0) {
                        // 增加上半部分透明区域，让MeView的登录按钮能够显示
                        Spacer()
                            .frame(height: geometry.size.height * Constants.transparentHeightRatio)
                        
                        VStack(spacing: 0) {
                            // 内容
                            content
                                .background(
                                    Color(red: 0.15, green: 0.15, blue: 0.16)
                                        .cornerRadius(Constants.cornerRadius)
                                )
                                .frame(height: min(geometry.size.height * Constants.overlayHeightRatio, Constants.maxOverlayHeight))
                        }
                    }
                }
            }
            .transition(.opacity.combined(with: .move(edge: .bottom)))
            .allowsHitTesting(true)
        }
    }
}

// 用户信息组件 - 优化复制按钮功能
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
            // 头像显示
            // if let avatar = userAvatar {
            //     Image(uiImage: avatar)
            //         .resizable()
            //         .scaledToFill()
            //         .frame(width: 80, height: 80)
            //         .clipShape(Circle())
            // } else {
            //     Image(systemName: "person.crop.circle.fill")
            //         .resizable()
            //         .frame(width: 80, height: 80)
            //         .foregroundColor(.gray)
            // }
            if let avatarUrlStr = userSession.userInfo?.avatar, !avatarUrlStr.isEmpty {
                AsyncImage(url: ResourceUtils.shared.imageURL(avatarUrlStr))
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
                        Text(userInfo.nickname)
                            .font(.title2)
                            .fontWeight(.bold)
                            .foregroundColor(.white)
                        
                        HStack(spacing: 8) {
                            Text("ID: \(userInfo.uid)")
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
        
        // 按钮点击动画
        withAnimation(.spring(response: 0.15, dampingFraction: 0.6)) {
            copyTapped = true
        }
        
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
//struct CreditsSectionView: View {
//    @InjectedObject(\.appState) var appState: AppState
//    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
//    @State private var navigateToVip: Bool = false
//    
//    var body: some View {
//        VStack(spacing: 20) {
//            HStack {
//                Text("Remaining Credits")
//                    .font(.headline)
//                    .fontWeight(.semibold)
//                    .foregroundColor(.white)
//                Spacer()
//                HStack(spacing: 6) {
//                    Image("credit_icon")
//                        .resizable()
//                        .scaledToFit()
//                        .frame(width: 25, height: 25)
//                        .foregroundColor(.yellow)
//                    if userSession.isLoggedIn {
//                        Text("\(userSession.userInfo?.balance ?? 0)") // TODO: 从API获取真实积分
//                            .fontWeight(.bold)
//                            .foregroundColor(.yellow)
//                    } else {
//                        Text("0")
//                            .fontWeight(.bold)
//                            .foregroundColor(.gray)
//                    }
//                }
//            }
//
//            Button {
//                if userSession.isLoggedIn {
//                    // 已登录：跳转到 VIP 购买页
//                    navigateToVip = true
//                } else {
//                    // 未登录状态下弹出登录界面
//                    appState.showLogin()
//                }
//            } label: {
//                Text("Add Credits")
//                    .font(.headline)
//                    .fontWeight(.semibold)
//                    .frame(maxWidth: .infinity)
//                    .padding(.vertical, 12)
//                    .background(Color(UIColor.systemYellow).opacity(0.2))
//                    .foregroundColor(.yellow)
//                    .cornerRadius(12)
//                    .shadow(color: .blue.opacity(0.2), radius: 4, x: 0, y: 2)
//            }
//        }
//        .padding(20)
//        .cornerRadius(18)
//        .padding(.horizontal)
//        .frame(height: 160)
//        .fullScreenCover(isPresented: $navigateToVip) {
//            VipView()
//        }
//    }
//}

// 标签区域组件
struct TabsSectionView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.meViewState) var meViewState: MeViewState
    @InjectedObject(\.userSessionViewModel) var userSession: UserSessionViewModel
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    
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
                        // 已登录状态：根据标签显示不同内容
                        switch tab {
                        case .library:
                            MyLibraryView()
                                .tag(tab)
                        case .likes:
                            MyLikesView()
                                .tag(tab)
                        }
                    } else {
                        // 未登录状态：显示登录提示
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

// MARK: - 我的作品视图
struct MyLibraryView: View {
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    @State private var isLoading = false
    @State private var hasMore = false
    @State private var currentPage: Int32 = 1
    @State private var showError = false
    @State private var errorMessage = ""
    
    var body: some View {
        VStack {
            // 顶部刷新按钮
//            HStack {
//                Spacer()
//                Button(action: refreshMyWorks) {
//                    HStack(spacing: 4) {
//                        Image(systemName: "arrow.clockwise")
//                            .font(.caption)
//                        Text("Refresh")
//                            .font(.caption)
//                    }
//                    .foregroundColor(.white)
//                    .padding(.horizontal, 12)
//                    .padding(.vertical, 6)
//                    .background(Color.blue.opacity(0.3))
//                    .cornerRadius(8)
//                }
//                .disabled(isLoading)
//                .opacity(isLoading ? 0.6 : 1.0)
//            }
//            .padding(.horizontal)
//            .padding(.bottom, 8)
            
            if isLoading && (musicVM.musicCategoryList?.list?.isEmpty ?? true) {
                // 加载状态
                VStack(spacing: 16) {
                    ProgressView()
                        .scaleEffect(1.2)
                        .foregroundColor(.white)
                    Text("Loading your works...")
                        .font(.subheadline)
                        .foregroundColor(.gray)
                }
            } else if let musicList = musicVM.musicCategoryList?.list, !musicList.isEmpty {
                // 显示我的作品列表
                ScrollView {
                    LazyVStack(spacing: 12) {
                        ForEach(Array(musicList.enumerated()), id: \.offset) { index, musicItem in
                            LikedMusicItemView(musicItem: musicItem)
                            
                            // 加载更多
                            if index == musicList.count - 1 && hasMore && !isLoading {
                                Button(action: loadMore) {
                                    HStack {
                                        ProgressView()
                                            .scaleEffect(0.8)
                                        Text("Loading more...")
                                            .font(.caption)
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
                VStack(spacing: 16) {
                    Image("music_empty")
                        .resizable()
                        .scaledToFit()
                        .frame(width: 80, height: 80)
                        .opacity(0.6)
                    
                    if showError {
                        Text("Failed to load your works")
                            .font(.headline)
                            .fontWeight(.medium)
                            .foregroundColor(.red)
                        
                        Text(errorMessage)
                            .font(.subheadline)
                            .foregroundColor(.gray)
                            .multilineTextAlignment(.center)
                    } else {
                        Text("No works yet")
                            .font(.headline)
                            .fontWeight(.medium)
                            .foregroundColor(.gray)
                        
                        Text("Create music to see them here")
                            .font(.subheadline)
                            .foregroundColor(.gray.opacity(0.8))
                            .multilineTextAlignment(.center)
                    }
                    
                    // 刷新按钮
                    Button(action: refreshMyWorks) {
                        HStack(spacing: 4) {
                            Image(systemName: "arrow.clockwise")
                            Text("Refresh")
                        }
                        .font(.subheadline)
                        .foregroundColor(.white)
                        .padding(.horizontal, 16)
                        .padding(.vertical, 8)
                        .background(Color.blue.opacity(0.3))
                        .cornerRadius(8)
                    }
                    .disabled(isLoading)
                    .opacity(isLoading ? 0.6 : 1.0)
                }
            }
        }
        .onAppear {
            // 进入页面时清空旧数据，避免跨账号残留
            musicVM.musicCategoryList = nil
            hasMore = false
            currentPage = 1
            loadMyWorks()
        }
        .onChange(of: musicVM.musicCategoryList) { newValue in
            if let data = newValue {
                hasMore = data.hasMoreBoolean
                showError = false
            }
        }
        .onChange(of: musicVM.lastError) { error in
            if let error = error {
                showError = true
                errorMessage = error
            }
        }
        .onReceive(Container.shared.userSessionViewModel().$userInfo) { _ in
            // 监控账号切换：重置并重新拉取
            musicVM.musicCategoryList = nil
            hasMore = false
            currentPage = 1
            loadMyWorks()
        }
    }
    
    private func loadMyWorks() {
        guard !isLoading else { return }
        isLoading = true
        currentPage = 1
        Task {
            await musicVM.getMusicCategoryList(
                type: .mywork, // 我的作品
                page: currentPage,
                pageSize: 20
            )
            isLoading = false
        }
    }
    
    private func refreshMyWorks() {
        loadMyWorks()
    }
    
    private func loadMore() {
        guard !isLoading && hasMore else { return }
        isLoading = true
        currentPage += 1
        Task {
            await musicVM.getMusicCategoryList(
                type: .mywork, // 我的作品
                page: currentPage,
                pageSize: 20
            )
            isLoading = false
        }
    }
}

// MARK: - 我的喜欢音乐视图
struct MyLikesView: View {
    @InjectedObject(\.musicApiViewModel) var musicVM: MusicApiViewModel
    @State private var isLoading = false
    @State private var hasMore = false
    @State private var currentPage: Int32 = 1
    @State private var showError = false
    @State private var errorMessage = ""
    
    var body: some View {
        VStack {
            // 顶部刷新按钮
//            HStack {
//                Spacer()
//                Button(action: refreshLikedMusic) {
//                    HStack(spacing: 4) {
//                        Image(systemName: "arrow.clockwise")
//                            .font(.caption)
//                        Text("Refresh")
//                            .font(.caption)
//                    }
//                    .foregroundColor(.white)
//                    .padding(.horizontal, 12)
//                    .padding(.vertical, 6)
//                    .background(Color.blue.opacity(0.3))
//                    .cornerRadius(8)
//                }
//                .disabled(isLoading)
//                .opacity(isLoading ? 0.6 : 1.0)
//            }
//            .padding(.horizontal)
//            .padding(.bottom, 8)
            
            if isLoading && (musicVM.musicCategoryList?.list?.isEmpty ?? true) {
                // 加载状态
                VStack(spacing: 16) {
                    ProgressView()
                        .scaleEffect(1.2)
                        .foregroundColor(.white)
                    Text("Loading your liked music...")
                        .font(.subheadline)
                        .foregroundColor(.gray)
                }
            } else if let musicList = musicVM.musicCategoryList?.list, !musicList.isEmpty {
                // 显示喜欢的音乐列表
                ScrollView {
                    LazyVStack(spacing: 12) {
                        ForEach(Array(musicList.enumerated()), id: \.offset) { index, musicItem in
                            LikedMusicItemView(musicItem: musicItem)
                            
                            // 加载更多
                            if index == musicList.count - 1 && hasMore && !isLoading {
                                Button(action: loadMore) {
                                    HStack {
                                        ProgressView()
                                            .scaleEffect(0.8)
                                        Text("Loading more...")
                                            .font(.caption)
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
                VStack(spacing: 16) {
                    Image("music_empty")
                        .resizable()
                        .scaledToFit()
                        .frame(width: 80, height: 80)
                        .opacity(0.6)
                    
                    if showError {
                        Text("Failed to load liked music")
                            .font(.headline)
                            .fontWeight(.medium)
                            .foregroundColor(.red)
                        
                        Text(errorMessage)
                            .font(.subheadline)
                            .foregroundColor(.gray)
                            .multilineTextAlignment(.center)
                    } else {
                        Text("No liked music yet")
                            .font(.headline)
                            .fontWeight(.medium)
                            .foregroundColor(.gray)
                        
                        Text("Like some music to see them here")
                            .font(.subheadline)
                            .foregroundColor(.gray.opacity(0.8))
                            .multilineTextAlignment(.center)
                    }
                    
                    // 刷新按钮
                    Button(action: refreshLikedMusic) {
                        HStack(spacing: 4) {
                            Image(systemName: "arrow.clockwise")
                            Text("Refresh")
                        }
                        .font(.subheadline)
                        .foregroundColor(.white)
                        .padding(.horizontal, 16)
                        .padding(.vertical, 8)
                        .background(Color.blue.opacity(0.3))
                        .cornerRadius(8)
                    }
                    .disabled(isLoading)
                    .opacity(isLoading ? 0.6 : 1.0)
                }
            }
        }
        .onAppear {
            // 进入页面时清空旧数据，避免跨账号残留
            musicVM.musicCategoryList = nil
            hasMore = false
            currentPage = 1
            loadLikedMusic()
        }
        .onChange(of: musicVM.musicCategoryList) { newValue in
            if let data = newValue {
                hasMore = data.hasMoreBoolean
                showError = false
            }
        }
        .onChange(of: musicVM.lastError) { error in
            if let error = error {
                showError = true
                errorMessage = error
            }
        }
        .onReceive(Container.shared.userSessionViewModel().$userInfo) { _ in
            // 监控账号切换：重置并重新拉取
            musicVM.musicCategoryList = nil
            hasMore = false
            currentPage = 1
            loadLikedMusic()
        }
    }
    
    private func loadLikedMusic() {
        guard !isLoading else { return }
        
        isLoading = true
        currentPage = 1
        
        Task {
            await musicVM.getMusicCategoryList(
                type: .mylike, // 我的点赞
                page: currentPage,
                pageSize: 20
            )
            
            isLoading = false
        }
    }
    
    private func refreshLikedMusic() {
        loadLikedMusic()
    }
    
    private func loadMore() {
        guard !isLoading && hasMore else { return }
        
        isLoading = true
        currentPage += 1
        
        Task {
            await musicVM.getMusicCategoryList(
                type: .mylike, // 我的点赞
                page: currentPage,
                pageSize: 20
            )
            isLoading = false
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
            AsyncImage(url: ResourceUtils.shared.imageURL(getCoverUrl())) { image in
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
        if let item = musicItem as? MusicListItem { return 0 }
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
