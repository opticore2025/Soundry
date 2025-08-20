import SwiftUI
import Factory
import APIClient

struct MusicListView: View {
    let songs: [MusicDetail]
    let onPlay: (MusicDetail) -> Void
    let onLike: (MusicDetail) -> Void
    
    @InjectedObject(\.musicPlayerViewModel) var musicPlayer: MusicPlayerViewModel
    
    var body: some View {
        ScrollView {
            LazyVStack(spacing: 12) {
                if songs.isEmpty {
                    EmptyStateView()
                        .frame(height: 200)
                } else {
                    ForEach(songs, id: \.id) { song in
                        MusicRowView(
                            song: song,
                            isPlaying: musicPlayer.currentSong?.id == song.id && musicPlayer.isPlaying,
                            onPlay: { onPlay(song) },
                            onLike: { onLike(song) }
                        )
                    }
                }
            }
            .padding(.horizontal, 32)
        }
    }
}

struct MusicRowView: View {
    let song: MusicDetail
    let isPlaying: Bool
    let onPlay: () -> Void
    let onLike: () -> Void
    
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    @State private var showingActionSheet = false
    
    private var isLiked: Bool {
        get {
            return musicApiViewModel.isLiked(musicID: Int32(song.id!)!, rawIsLike: song.isLiked!.boolValue)
        }
    }
    
    var body: some View {
        HStack(spacing: 12) {
            // Album Art
            Button(action: onPlay) {
                AsyncImage(url: URL(string: song.coverMediaUrl ?? "")) { image in
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
                .frame(width: 60, height: 60)
                .cornerRadius(8)
                .overlay(
                    RoundedRectangle(cornerRadius: 8)
                        .stroke(Color.white.opacity(0.1), lineWidth: 1)
                )
            }
            
            // Song Info
            VStack(alignment: .leading, spacing: 4) {
                Text(song.title!)
                    .font(.system(size: 16, weight: .medium))
                    .foregroundColor(.white)
                    .lineLimit(1)
                
                Text(song.userInfo?.nickname ?? "Unknown Artist")
                    .font(.system(size: 14))
                    .foregroundColor(.white.opacity(0.6))
                    .lineLimit(1)
                
                HStack(spacing: 8) {
                    if let style = song.style, !style.isEmpty {
                        Text(style)
                            .font(.system(size: 12))
                            .foregroundColor(.white.opacity(0.5))
                            .padding(.horizontal, 6)
                            .padding(.vertical, 2)
                            .background(
                                RoundedRectangle(cornerRadius: 4)
                                    .fill(Color.white.opacity(0.1))
                            )
                    }
                    
                    Text(song.duration ?? "0:00")
                        .font(.system(size: 12))
                        .foregroundColor(.white.opacity(0.5))
                }
            }
            .frame(maxWidth: .infinity, alignment: .leading)
            .onTapGesture {
                onPlay()
            }
            
            // Control Buttons
            HStack(spacing: 16) {
                // Playing Indicator or Play Button
                if isPlaying {
                    Image(systemName: "speaker.wave.2.fill")
                        .font(.system(size: 16))
                        .foregroundColor(.purple)
                } else {
                    Button(action: onPlay) {
                        Image(systemName: "play.fill")
                            .font(.system(size: 16))
                            .foregroundColor(.white.opacity(0.7))
                    }
                }
                
                // Like Button
                Button(action: onLike) {
                    Image(systemName: isLiked ? "heart.fill" : "heart")
                        .font(.system(size: 16))
                        .foregroundColor(isLiked ? .red : .white.opacity(0.7))
                }
                
                // More Actions
                Button(action: {
                    showingActionSheet = true
                }) {
                    Image(systemName: "ellipsis")
                        .font(.system(size: 16))
                        .foregroundColor(.white.opacity(0.7))
                }
            }
        }
        .padding(.vertical, 8)
        .background(Color.clear)
        .contentShape(Rectangle())
        .confirmationDialog("Music Actions", isPresented: $showingActionSheet) {
            Button(isPlaying ? "Pause" : "Play") {
                onPlay()
            }
            
            Button(isLiked ? "Unlike" : "Like") {
                onLike()
            }
            
            Button("Download") {
                // Download action
            }
            
            Button("Share") {
                // Share action
            }
            
            Button("Delete", role: .destructive) {
                // Delete action
            }
            
            Button("Cancel", role: .cancel) {}
        }
    }
}

struct EmptyStateView: View {
    var body: some View {
        VStack(spacing: 16) {
            Image("music_empty")
                .resizable()
                .aspectRatio(contentMode: .fit)
                .frame(width: 80, height: 80)
                .foregroundColor(.white.opacity(0.3))
            
            Text("No music found")
                .font(.system(size: 16, weight: .medium))
                .foregroundColor(.white.opacity(0.6))
        }
    }
}

#Preview {
    MusicListView(
        songs: [],
        onPlay: { _ in },
        onLike: { _ in }
    )
    .background(Color.black)
    .environmentObject(MusicPlayerViewModel())
    .preferredColorScheme(.dark)
}
