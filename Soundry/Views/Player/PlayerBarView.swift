import Factory
import SwiftUI
import SDWebImageSwiftUI

struct PlayerBarView: View {
    @InjectedObject(\.musicPlayerViewModel) var musicPlayer:
        MusicPlayerViewModel
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel:
        MusicApiViewModel

    @State private var showingPlayerDetail = false

    private var isLiked: Bool {
        if musicPlayer.currentSong == nil {
            return false
        }
        return musicApiViewModel.isLiked(
            musicID: Int32(musicPlayer.currentSong!.id!)!,
            rawIsLike: musicPlayer.currentSong!.isLiked!.boolValue
        )
    }

    var body: some View {
        VStack(spacing: 0) {
            // Progress Bar
            ProgressView(value: musicPlayer.playProgress)
                .progressViewStyle(LinearProgressViewStyle(tint: .purple))
                .scaleEffect(x: 1, y: 0.5, anchor: .center)

            // Player Bar Content
            HStack(spacing: 12) {
                // Album Art
                Button {
                    showingPlayerDetail = true
                } label: {
                    WebImage(
                        url: ResourceUtils.shared.imageURL(
                            musicPlayer.currentSong?.coverMediaUrl ?? ""
                        )
                    ) { image in
                        image
                            .resizable()
                            .aspectRatio(contentMode: .fill)
                    } placeholder: {
                        Rectangle()
                            .fill(Color.gray.opacity(0.3))
                            .overlay(
                                Image(systemName: "music.note")
                                    .font(.system(size: 20))
                                    .foregroundColor(.white.opacity(0.5))
                            )
                    }
                    .frame(width: 48, height: 48)
                    .cornerRadius(8)
                }
                .buttonStyle(PlainButtonStyle())

                // Song Info
                VStack(alignment: .leading, spacing: 2) {
                    Text(musicPlayer.currentSong?.title ?? "")
                        .font(.system(size: 14, weight: .medium))
                        .foregroundColor(.white)
                        .lineLimit(1)

                    Text(musicPlayer.currentSong?.userInfo?.nickname ?? "")
                        .font(.system(size: 12))
                        .foregroundColor(.white.opacity(0.7))
                        .lineLimit(1)
                }
                .frame(maxWidth: .infinity, alignment: .leading)
                .onTapGesture {
                    showingPlayerDetail = true
                }

                // Control Buttons
                HStack(spacing: 16) {
                    // Like Button
                    Button(action: {
                        if let song = musicPlayer.currentSong {
                            musicPlayer.toggleLike(for: song)
                        }
                    }) {
                        Image(systemName: isLiked ? "heart.fill" : "heart")
                            .font(.system(size: 18))
                            .foregroundColor(isLiked == true ? .red : .white)
                    }

                    // Play/Pause Button
                    Button(action: {
                        musicPlayer.togglePlayPause()
                    }) {
                        Image(
                            systemName: musicPlayer.isPlaying
                                ? "pause.fill" : "play.fill"
                        )
                        .font(.system(size: 20))
                        .foregroundColor(.white)
                    }

                    // Next Button
                    Button(action: {
                        musicPlayer.playNext()
                    }) {
                        Image(systemName: "forward.fill")
                            .font(.system(size: 18))
                            .foregroundColor(.white)
                    }
                }
            }
            .padding(.horizontal, 16)
            .padding(.vertical, 8)
            .background(Color.gray.opacity(0.95))
        }
        .background(Color.cyan.opacity(0.95))
        .fullScreenCover(isPresented: $showingPlayerDetail) {
            PlayerDetailView()
        }
    }
}

#Preview {
    //    VStack {
    //        Spacer()
    PlayerBarView()
    //    }
    //    .background(Color.gray)
    //    .environmentObject({
    //        let player = MusicPlayerViewModel()
    //        player.currentSong =
    //        player.isPlaying = true
    //        return player
    //    }())
    //    .preferredColorScheme(.dark)
}
