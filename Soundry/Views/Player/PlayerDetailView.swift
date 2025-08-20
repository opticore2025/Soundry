import Factory
import SwiftUI

struct PlayerDetailView: View {
    @InjectedObject(\.musicPlayerViewModel) var musicPlayer:
        MusicPlayerViewModel
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel:
        MusicApiViewModel
    @Environment(\.dismiss) var dismiss
    @State private var isDraggingProgress = false
    @State private var draggedProgress: Double = 0

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
        ZStack {
            // Background
            LinearGradient(
                colors: [
                    Color.black,
                    Color.purple.opacity(0.3),
                    Color.black,
                ],
                startPoint: .top,
                endPoint: .bottom
            )
            .ignoresSafeArea()

            VStack(spacing: 0) {
                // Top Bar
                topBar

                Spacer()

                // Album Art
                albumArt

                Spacer()

                // Song Info
                songInfo

                // Progress Section
                progressSection
                    .padding(.top, 32)

                // Control Buttons
                controlButtons
                    .padding(.top, 40)

                Spacer()

                // Bottom Actions
                bottomActions
                    .padding(.bottom, 32)
            }
        }
    }

    // MARK: - Top Bar
    private var topBar: some View {
        HStack {
            Button(action: {
                dismiss()
            }) {
                Image(systemName: "chevron.down")
                    .font(.system(size: 24, weight: .medium))
                    .foregroundColor(.white)
            }

            Spacer()

            Text("Now Playing")
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white)

            Spacer()

//            Button(action: {
//                // More options
//            }) {
//                Image(systemName: "ellipsis")
//                    .font(.system(size: 24, weight: .medium))
//                    .foregroundColor(.white)
//            }
        }
        .padding(.horizontal, 20)
        .padding(.top, 12)
    }

    // MARK: - Album Art
    private var albumArt: some View {
        AsyncImage(
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
                        .font(.system(size: 80))
                        .foregroundColor(.white.opacity(0.5))
                )
        }
        .frame(width: 300, height: 300)
        .cornerRadius(20)
        .shadow(color: .black.opacity(0.3), radius: 20, x: 0, y: 10)
    }

    // MARK: - Song Info
    private var songInfo: some View {
        VStack(spacing: 8) {
            Text(musicPlayer.currentSong?.title ?? "")
                .font(.system(size: 24, weight: .bold))
                .foregroundColor(.white)
                .multilineTextAlignment(.center)
                .lineLimit(2)

            Text(musicPlayer.currentSong?.userInfo?.nickname ?? "")
                .font(.system(size: 18, weight: .medium))
                .foregroundColor(.white.opacity(0.7))
        }
        .padding(.horizontal, 40)
        .padding(.top, 32)
    }

    // MARK: - Progress Section
    private var progressSection: some View {
        VStack(spacing: 8) {
            // Progress Bar
            ZStack(alignment: .leading) {
                Rectangle()
                    .fill(Color.white.opacity(0.3))
                    .frame(height: 4)
                    .cornerRadius(2)

                Rectangle()
                    .fill(Color.white)
                    .frame(
                        width: max(0, UIScreen.main.bounds.width - 80)
                            * (isDraggingProgress
                                ? draggedProgress : musicPlayer.playProgress),
                        height: 4
                    )
                    .cornerRadius(2)

                // Thumb
                Circle()
                    .fill(Color.white)
                    .frame(width: 16, height: 16)
                    .offset(
                        x: max(0, UIScreen.main.bounds.width - 80)
                            * (isDraggingProgress
                                ? draggedProgress : musicPlayer.playProgress)
                            - 8
                    )
                    .gesture(
                        DragGesture()
                            .onChanged { value in
                                isDraggingProgress = true
                                let progress = max(
                                    0,
                                    min(
                                        1,
                                        value.location.x
                                            / (UIScreen.main.bounds.width - 80)
                                    )
                                )
                                draggedProgress = progress
                            }
                            .onEnded { _ in
                                musicPlayer.seekToProgress(draggedProgress)
                                isDraggingProgress = false
                            }
                    )
            }
            .padding(.horizontal, 40)

            // Time Labels
            HStack {
                Text(
                    formatTime(
                        isDraggingProgress
                            ? draggedProgress * musicPlayer.duration
                            : musicPlayer.currentTime
                    )
                )
                .font(.system(size: 14, weight: .medium))
                .foregroundColor(.white.opacity(0.7))

                Spacer()

                Text(formatTime(musicPlayer.duration))
                    .font(.system(size: 14, weight: .medium))
                    .foregroundColor(.white.opacity(0.7))
            }
            .padding(.horizontal, 40)
        }
    }

    // MARK: - Control Buttons
    private var controlButtons: some View {
        HStack(spacing: 60) {
            // Previous
            Button(action: {
                musicPlayer.playPrevious()
            }) {
                Image(systemName: "backward.fill")
                    .font(.system(size: 32))
                    .foregroundColor(.white)
            }

            // Play/Pause
            Button(action: {
                musicPlayer.togglePlayPause()
            }) {
                ZStack {
                    Circle()
                        .fill(Color.white)
                        .frame(width: 80, height: 80)

                    Image(
                        systemName: musicPlayer.isPlaying
                            ? "pause.fill" : "play.fill"
                    )
                    .font(.system(size: 36))
                    .foregroundColor(.black)
                    .offset(x: musicPlayer.isPlaying ? 0 : 2)  // Slight offset for play icon
                }
            }

            // Next
            Button(action: {
                musicPlayer.playNext()
            }) {
                Image(systemName: "forward.fill")
                    .font(.system(size: 32))
                    .foregroundColor(.white)
            }
        }
    }

    // MARK: - Bottom Actions
    private var bottomActions: some View {
        HStack(spacing: 40) {
            // Shuffle
            Button(action: {
                musicPlayer.toggleShuffle()
            }) {
                Image(systemName: "shuffle")
                    .font(.system(size: 24))
                    .foregroundColor(
                        musicPlayer.isShuffled ? .purple : .white.opacity(0.7)
                    )
            }

            // Like
            Button(action: {
                if let song = musicPlayer.currentSong {
                    musicPlayer.toggleLike(for: song)
                }
            }) {
                Image(
                    systemName: isLiked == true ? "heart.fill" : "heart"
                )
                .font(.system(size: 24))
                .foregroundColor(
                    isLiked == true
                        ? .red : .white.opacity(0.7)
                )
            }

            // Repeat
            Button(action: {
                musicPlayer.toggleRepeatMode()
            }) {
                Image(systemName: musicPlayer.repeatMode.iconName)
                    .font(.system(size: 24))
                    .foregroundColor(
                        musicPlayer.repeatMode != .none
                            ? .purple : .white.opacity(0.7)
                    )
            }

            // Share
            //            Button(action: {
            //                // Share functionality
            //            }) {
            //                Image(systemName: "square.and.arrow.up")
            //                    .font(.system(size: 24))
            //                    .foregroundColor(.white.opacity(0.7))
            //            }
        }
    }

    // MARK: - Helper Methods
    private func formatTime(_ time: TimeInterval) -> String {
        let minutes = Int(time) / 60
        let seconds = Int(time) % 60
        return String(format: "%d:%02d", minutes, seconds)
    }
}

#Preview {
    PlayerDetailView()
}
