import SwiftUI
import Factory

struct HomeView: View {
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    @InjectedObject(\.appState) var appState: AppState
    @State private var scrollViewOffset: CGFloat = 0
    @State private var scrollViewContentHeight: CGFloat = 0
    @State private var scrollViewVisibleHeight: CGFloat = 0
    
    var body: some View {
        ZStack {
            GeometryReader { geometry in
                ScrollView {
                    LazyVStack(alignment: .leading, spacing: 0) {
                        // Activity Box
                        Button(action: {
                            
                            appState.currentTab = .ai
                        }) {
                            ZStack {
                                // 背景图片
                                Image("start-music-bg")
                                    .resizable()
                                    .scaledToFill()
                                    .frame(height: 160) // 减少高度适配手机屏幕
                                    .clipped()
                                    .cornerRadius(20) // 稍微减小圆角
                                
                                // 左侧文本内容
                                HStack {
                                    VStack(alignment: .leading, spacing: 12) { // 减少垂直间距
                                        // 主标题
                                        VStack(alignment: .leading, spacing: 2) { // 减少标题间距
                                            Text("Start Your")
                                                .font(.title3) // 调整字体大小
                                                .fontWeight(.bold)
                                                .foregroundColor(.white)
                                            
                                            Text("AI Music Journey")
                                                .font(.title3) // 调整字体大小
                                                .fontWeight(.bold)
                                                .foregroundColor(.white)
                                        }
                                        
                                        // 副标题
                                        VStack(alignment: .leading, spacing: 1) { // 减少副标题间距
                                            Text("Enter your inspiration and generate")
                                                .font(.caption) // 调整为更小的字体
                                                .foregroundColor(.white.opacity(0.9))
                                            
                                            Text("your own music instantly.")
                                                .font(.caption) // 调整为更小的字体
                                                .foregroundColor(.white.opacity(0.9))
                                        }
                                        
                                        // 创建按钮指示器（仅显示，无点击效果）
                                        HStack(spacing: 6) { // 减少按钮内部间距
                                            Text("Create Now")
                                                .font(.caption) // 调整按钮文字大小
                                                .fontWeight(.semibold)
                                            
                                            Image(systemName: "arrow.right")
                                                .font(.system(size: 12)) // 调整图标大小
                                        }
                                        .foregroundColor(.white)
                                        .padding(.horizontal, 16) // 减少按钮padding
                                        .padding(.vertical, 8)
                                        .background(
                                            RoundedRectangle(cornerRadius: 20)
                                                .stroke(Color.white, lineWidth: 1.5) // 减少边框宽度
                                                .background(Color.clear)
                                        )
                                        
                                        Spacer()
                                    }
                                    .padding(.leading, 16) // 减少左边距
                                    .padding(.top, 16) // 减少顶部padding
                                    
                                    Spacer()
                                }
                            }
                        }
                        .buttonStyle(PlainButtonStyle()) // 移除默认的点击效果
                        .padding(.horizontal, 16) // 减少水平padding
                        .padding(.bottom, 20) // 减少底部间距

                        // Music Library
                        Text("Music Library")
                            .font(.title)
                            .fontWeight(.bold)
                            .padding(.horizontal)
                            .foregroundColor(.white)
                        
                        if musicApiViewModel.musicHallData?.isEmpty ?? true {
                            HStack {
                                Spacer()
                                Text("No music found")
                                Spacer()
                            }.padding()
                        } else {
                            LazyVGrid(columns: [
                                GridItem(.flexible(), spacing: 15),
                                GridItem(.flexible(), spacing: 15)
                            ], spacing: 15) {
                                ForEach(musicApiViewModel.musicHallData ?? [], id: \.id) { musicItem in
                                    MusicItemView(
                                        musicItem: musicItem,
                                        userItem: musicApiViewModel.musicHallUserInfoMap[musicItem.uid!]!
                                    )
                                    .id(musicItem.id)
                                }
                            }
                            .padding(.horizontal)
                            .padding(.bottom, musicApiViewModel.musicHallHasMore ? 20 : 80)
                            
                            // 上拉加载更多区域
                            if musicApiViewModel.musicHallHasMore {
                                VStack(spacing: 10) {
                                    HStack {
                                        Spacer()
                                        
                                        if musicApiViewModel.isHomeMallLoadingMore {
                                            // 正在加载状态
                                            HStack {
                                                ProgressView()
                                                    .scaleEffect(0.8)
                                                Text("Loading...")
                                                    .font(.caption)
                                                    .foregroundColor(.gray)
                                            }
                                            .padding(.bottom, 40)
                                        } else {
                                            // 显示上拉加载提示
                                            HStack {
                                                Image(systemName: "arrow.down.circle")
                                                    .foregroundColor(.gray)
                                                Text("Pull to loading more..")
                                                    .font(.caption)
                                                    .foregroundColor(.gray)
                                            }
                                            .padding(.bottom, 10)
                                        }
                                        Spacer()
                                    }
                                }
                                .onAppear {
                                    // 当加载更多指示器出现时，自动加载下一页
                                    if !musicApiViewModel.isHomeMallLoadingMore {
                                        Task {
                                            print("Auto loading more music hall data...")
                                            let nextPage = musicApiViewModel.currentHomeHallPage + 1
                                            await musicApiViewModel.getMusicHall(page: nextPage)
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                .refreshable {
                    await musicApiViewModel.getMusicHall()
                }
            }
        }
        .onAppear {
            if musicApiViewModel.musicHallData != nil {
                return
            }
            Task {
                await musicApiViewModel.getMusicHall()
                // TODO add a loading view before return
            }
        }
    }
}

#Preview {
    HomeView()
}
