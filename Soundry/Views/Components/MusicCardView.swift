import SwiftUI
import Factory
import APIClient

struct MusicCardView: View {
    let song: MusicDetail
    let onPlay: () -> Void
    let onLike: () -> Void
    
    @InjectedObject(\.musicPlayerViewModel) var musicPlayer: MusicPlayerViewModel
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    @State private var showingActionSheet = false
    
    var isCurrentSong: Bool {
        musicPlayer.currentSong?.id == song.id
    }
    
    private var isLiked: Bool {
        get {
            return musicApiViewModel.isLiked(musicID: Int32(song.id!)!, rawIsLike: song.isLiked!.boolValue)
        }
    }

    var body: some View {
        Button(action: onPlay) {
            ZStack {
                // Background Image
                AsyncImage(url: URL(string: song.coverMediaUrl ?? "")) { image in
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
                
                // Gradient Overlay
                LinearGradient(
                    colors: [Color.clear, Color.black.opacity(0.8)],
                    startPoint: .center,
                    endPoint: .bottom
                )
                .cornerRadius(16)
                
                // Content Overlay
                VStack {
                    Spacer()
                    
                    VStack(alignment: .leading, spacing: 6) {
                        // Song Title
                        Text(song.title!)
                            .font(.system(size: 16, weight: .semibold))
                            .foregroundColor(.white)
                            .lineLimit(1)
                            .frame(maxWidth: .infinity, alignment: .leading)
                        
                        // Bottom Row
                        HStack {
                            // User Info
                            HStack(spacing: 6) {
                                // User Avatar
                                Circle()
                                    .fill(Color.gray.opacity(0.5))
                                    .frame(width: 20, height: 20)
                                    .overlay(
                                        Image(systemName: "person.fill")
                                            .font(.system(size: 10))
                                            .foregroundColor(.white.opacity(0.7))
                                    )
                                
                                Text(song.userInfo?.nickname ?? "Unknown Artist")
                                    .font(.system(size: 12))
                                    .foregroundColor(.white.opacity(0.7))
                                    .lineLimit(1)
                            }
                            
                            Spacer()
                            
                            // Like Button and Count
                            Button(action: onLike) {
                                HStack(spacing: 2) {
                                    Image(systemName: isLiked ? "heart.fill" : "heart")
                                        .font(.system(size: 14))
                                        .foregroundColor(isLiked ? .red : .white.opacity(0.7))
                                    
                                    Text(song.like ?? "0")
                                        .font(.system(size: 12))
                                        .foregroundColor(.white.opacity(0.7))
                                }
                            }
                            .buttonStyle(PlainButtonStyle())
                        }
                    }
                    .padding(.horizontal, 12)
                    .padding(.bottom, 12)
                }
                
                // Play Indicator
                if isCurrentSong && musicPlayer.isPlaying {
                    VStack {
                        HStack {
                            Spacer()
                            
                            Image(systemName: "speaker.wave.2.fill")
                                .font(.system(size: 16))
                                .foregroundColor(.white)
                                .padding(.trailing, 8)
                                .padding(.top, 8)
                        }
                        
                        Spacer()
                    }
                }
                
                // More Actions Button (Top Right)
                VStack {
                    HStack {
                        Spacer()
                        
                        Button(action: {
                            showingActionSheet = true
                        }) {
                            Image(systemName: "ellipsis")
                                .font(.system(size: 16, weight: .medium))
                                .foregroundColor(.white)
                                .frame(width: 24, height: 24)
                                .background(
                                    Circle()
                                        .fill(Color.black.opacity(0.3))
                                )
                        }
                        .buttonStyle(PlainButtonStyle())
                        .padding(.trailing, 8)
                        .padding(.top, 8)
                    }
                    
                    Spacer()
                }
            }
        }
        .buttonStyle(PlainButtonStyle())
        .confirmationDialog("Music Actions", isPresented: $showingActionSheet) {
            Button(isCurrentSong && musicPlayer.isPlaying ? "Pause" : "Play") {
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
            
            Button("Cancel", role: .cancel) {}
        }
    }
}

#Preview {
    HStack(spacing: 16) {
//        MusicCardView(
//            song: Music.demoSongs[0],
//            onPlay: {},
//            onLike: {}
//        )
    }
    .padding()
    .background(Color.black)
    .environmentObject(MusicPlayerViewModel())
    .preferredColorScheme(.dark)
}
