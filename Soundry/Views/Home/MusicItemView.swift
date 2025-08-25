import SwiftUI
import Factory
import SDWebImageSwiftUI
import SVProgressHUD
import APIClient

struct MusicItemView: View {
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSessionViewModel: UserSessionViewModel
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    @InjectedObject(\.musicPlayerViewModel) var musicPlayerViewModel: MusicPlayerViewModel
    
    let musicItem: MusicHallItem
    let userItem: APIClient.UserInfo
    @State private var navigateToReport: Bool = false
    
    private var isLike: Bool {
        get {
            guard let musicID = musicItem.id, let rawIsLike = musicItem.isLike else {
                return false
            }
            return musicApiViewModel.isLiked(musicID: Int32(musicID)!, rawIsLike: rawIsLike)
        }
    }

    // A simple number formatter for thousands
    private func formatCount(_ count: Int) -> String {
        if count < 1000 {
            return "\(count)"
        } else {
            return String(format: "%.1fk", Double(count) / 1000.0)
        }
    }

    var body: some View {
        ZStack(alignment: .topTrailing) {
            // 跳转到举报页（状态驱动）
            NavigationLink(isActive: $navigateToReport) {
                MusicReportView(
                    musicId: Int(musicItem.id!)!,
                    titleText: musicItem.title ?? "",
                    artistText: userItem.nickname ?? "",
                    coverURLString: musicItem.coverMediaUrl
                )
            } label: {
                EmptyView()
            }
            // Background Image
            WebImage(url: ResourceUtils.shared.imageURL(musicItem.coverMediaUrl!)) { image in
                image.resizable()
            } placeholder: {
                Color(white: 0.1, opacity: 1.0)
            }
            .scaledToFill()
            .frame(width: 168, height: 218)
            .clipped()
            .cornerRadius(16)

            VStack {
                // Report Button Area
                HStack {
                    Spacer()
                    Button {
                        if !userSessionViewModel.isLoggedIn {
                            appState.showLogin()
                            return
                        }
                        navigateToReport = true
                    } label: {
                        Image(systemName: "exclamationmark.triangle")
                            .foregroundColor(.white)
                            .frame(width: 14, height: 14)
                    }
                    .padding(16)
                }
                .background(
                    LinearGradient(
                        gradient: Gradient(colors: [
                            Color.black.opacity(0.5), Color.clear,
                        ]),
                        startPoint: .top,
                        endPoint: .bottom
                    )
                )

                Spacer()

                // Card Info
                VStack(alignment: .leading, spacing: 8) {
                    Text(musicItem.title ?? "")
                        .font(.system(size: 14, weight: .bold))
                        .foregroundColor(.white)

                    HStack {
                        HStack(spacing: 4) {
                            if let avatar = userItem.avatar,
                               let url = ResourceUtils.shared.imageURL(avatar)
                            {
                                WebImage(url: url) { image in
                                    image.resizable()
                                } placeholder: {
                                    Color(white: 0.1, opacity: 1.0)
                                }
                                .frame(width: 20, height: 20)
                                .clipShape(Circle())
                            } else {
                                Image(systemName: "person.circle.fill")
                                    .resizable()
                                    .frame(width: 20, height: 20)
                                    .foregroundColor(.white)
                            }
                            Text(userItem.nickname ?? "Unknown User")
                                .font(.system(size: 12))
                                .foregroundColor(.white)
                                .padding(.leading, 4)
                        }

                        Spacer()

                        HStack(spacing: 8) {
                            Button {
                                Task {
                                    SVProgressHUD.show()
                                    if isLike {
                                        await musicApiViewModel.unlikeMusic(Int32(musicItem.id!)!)
                                    } else {
                                        await musicApiViewModel.likeMusic(Int32(musicItem.id!)!)
                                    }
                                    DispatchQueue.main.async {
                                        SVProgressHUD.dismiss()
                                    }
                                }
                            } label: {
                                Image(
                                    systemName: isLike ? "heart.fill" : "heart"
                                )
                                .foregroundColor(isLike ? .red : .white)
                                .frame(width: 14, height: 14)
                            }
                            Text(formatCount(Int(musicItem.like ?? "-1")!))
                                .font(.system(size: 12))
                                .foregroundColor(.white)
                        }
                    }
                }
                .padding(12)
                .background(
                    LinearGradient(
                        gradient: Gradient(colors: [
                            Color.black.opacity(0.5), Color.clear,
                        ]),
                        startPoint: .bottom,
                        endPoint: .top
                    )
                )
            }
        }
        .frame(width: 168, height: 218)
        .cornerRadius(16)
        .onTapGesture {
            Task {
                SVProgressHUD.show()
                await musicApiViewModel.getMusicDetail(id: Int32(musicItem.id!)!)
                musicPlayerViewModel.play(song: musicApiViewModel.musicDetail!)
                DispatchQueue.main.async {
                    SVProgressHUD.dismiss()
                }
            }
        }
    }
}
