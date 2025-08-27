import SwiftUI
import Factory
import SDWebImageSwiftUI
import APIClient

// MARK: - Home Style Music Card (对应 nvue 中的音乐卡片)
struct HomeStyleMusicCard: View {
    let song: MusicDetail
    let currentUser: UserInfo?
    let onPlay: () -> Void
    let onLike: () -> Void
    let onReport: () -> Void
    
    @InjectedObject(\.musicPlayerViewModel) var musicPlayer: MusicPlayerViewModel
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    
    var isCurrentSong: Bool {
        musicPlayer.currentSong?.id == song.id
    }
    
    var showReportButton: Bool {
        // 只有当前用户不是歌曲作者时才显示举报按钮
        guard let currentUser = currentUser else { return true }
        return String(currentUser.uid) != song.uid
    }
    
    private var isLiked: Bool {
        get {
            return musicApiViewModel.isLiked(musicID: Int32(song.id!)!, rawIsLike: song.isLiked!.boolValue)
        }
    }

    var body: some View {
        Button(action: onPlay) {
            ZStack {
                // Background Image (对应 nvue 的 card-bg)
                WebImage(url: URL(string: song.coverMediaUrl ?? "")) { image in
                    image
                        .resizable()
                        .aspectRatio(contentMode: .fill)
                } placeholder: {
                    Rectangle()
                        .fill(Color.gray.opacity(0.3))
                        .overlay(
                            Image(systemName: "music.note")
                                .font(.system(size: 40))
                                .foregroundColor(.white.opacity(0.5))
                        )
                }
                .frame(width: 164, height: 218)
                .clipped()
                .cornerRadius(16)
                
                // Card Info Overlay (对应 nvue 的 card-info)
                VStack {
                    Spacer()
                    
                    VStack(spacing: 0) {
                        // Linear Gradient Background (对应 nvue 的渐变背景)
                        Rectangle()
                            .fill(
                                LinearGradient(
                                    colors: [Color.clear, Color.black.opacity(0.8)],
                                    startPoint: .top,
                                    endPoint: .bottom
                                )
                            )
                            .frame(height: 120)
                            .overlay(
                                VStack(spacing: 6) {
                                    Spacer()
                                    
                                    // Music Title (对应 nvue 的 music-title)
                                    HStack {
                                        Text(song.title!)
                                            .font(.system(size: 16, weight: .semibold))
                                            .foregroundColor(.white)
                                            .lineLimit(1)
                                            .padding(.horizontal, 12)
                                        
                                        Spacer()
                                    }
                                    
                                    // Card Description (对应 nvue 的 card-desc)
                                    HStack {
                                        // Card User (对应 nvue 的 card-user)
                                        HStack(spacing: 6) {
                                            // Avatar (对应 nvue 的 avatar-view)
                                            Circle()
                                                .fill(Color.gray.opacity(0.6))
                                                .frame(width: 20, height: 20)
                                                .overlay(
                                                    Text(song.userInfo?.avatar ?? "")
                                                        .font(.system(size: 10, weight: .medium))
                                                        .foregroundColor(.white)
                                                )
                                            
                                            // User Name (对应 nvue 的 user-name)
                                            Text(song.userInfo?.nickname ?? "Unknown Artist")
                                                .font(.system(size: 12))
                                                .foregroundColor(.white.opacity(0.7))
                                                .lineLimit(1)
                                        }
                                        .padding(.leading, 12)
                                        
                                        Spacer()
                                        
                                        // Card Bottom (对应 nvue 的 card-bottom - 喜欢按钮)
                                        Button(action: onLike) {
                                            HStack(spacing: 2) {
                                                Image(isLiked ? "liked-icon" : "like-icon")
                                                    .resizable()
                                                    .frame(width: 14, height: 14)
                                                
                                                Text(song.like ?? "0")
                                                    .font(.system(size: 12))
                                                    .foregroundColor(.white.opacity(0.7))
                                            }
                                        }
                                        .buttonStyle(PlainButtonStyle())
                                        .padding(.trailing, 12)
                                        .padding(.leading, 6)
                                    }
                                    .padding(.bottom, 12)
                                }
                            )
                    }
                }
                
                // Report Button Overlay (对应 nvue 的 report-bg)
                if showReportButton {
                    VStack {
                        HStack {
                            Spacer()
                            
                            Button(action: onReport) {
                                ZStack {
                                    // Report Background (对应 nvue 的 item-report-bg.png)
                                    Image("item-report-bg")
                                        .resizable()
                                        .frame(width: 164, height: 43)
                                        .h_cornerRadius(16, corners: [.topLeft, .topRight])
                                    
                                    // Report Icon (对应 nvue 的 report-icon)
                                    HStack {
                                        Spacer()
                                        
                                        Image("report-icon")
                                            .resizable()
                                            .frame(width: 14, height: 14)
                                            .padding(.trailing, 8)
                                            .padding(.top, 8)
                                    }
                                }
                            }
                            .buttonStyle(PlainButtonStyle())
                        }
                        
                        Spacer()
                    }
                }
                
                // Playing Indicator (当前播放标识)
                if isCurrentSong {
                    VStack {
                        HStack {
                            Circle()
                                .fill(Color.purple)
                                .frame(width: 8, height: 8)
                                .padding(.leading, 8)
                                .padding(.top, 8)
                            
                            Spacer()
                        }
                        
                        Spacer()
                    }
                }
            }
        }
        .buttonStyle(PlainButtonStyle())
    }
}

// MARK: - Corner Radius Extension
extension View {
    func h_cornerRadius(_ radius: CGFloat, corners: UIRectCorner) -> some View {
        clipShape(H_RoundedCorner(radius: radius, corners: corners))
    }
}

struct H_RoundedCorner: Shape {
    var radius: CGFloat = .infinity
    var corners: UIRectCorner = .allCorners

    func path(in rect: CGRect) -> Path {
        let path = UIBezierPath(
            roundedRect: rect,
            byRoundingCorners: corners,
            cornerRadii: CGSize(width: radius, height: radius)
        )
        return Path(path.cgPath)
    }
}

//#Preview {
//    VStack {
//        HStack(spacing: 16) {
//            HomeStyleMusicCard(
//                song: Music.demoSongs[0],
//                currentUser: nil,
//                onPlay: {},
//                onLike: {},
//                onReport: {}
//            )
//        }
//        
//        Spacer()
//    }
//    .padding()
//    .background(Color.black)
//    .environmentObject(MusicPlayerViewModel())
//    .preferredColorScheme(.dark)
//}
