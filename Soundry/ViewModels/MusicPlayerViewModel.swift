import AVFoundation
import AVKit
import Combine
import Factory
import SVProgressHUD
import SwiftUI
import APIClient

// MARK: - Music Player ViewModel
@MainActor
class MusicPlayerViewModel: NSObject, ObservableObject {

    @Injected(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    
    @Published var currentSong: MusicDetail?
    @Published var isPlaying: Bool = false
    @Published var currentTime: TimeInterval = 0
    @Published var duration: TimeInterval = 0
    @Published var playProgress: Double = 0
    @Published var volume: Float = 1.0
    @Published var isShuffled: Bool = false
    @Published var repeatMode: RepeatMode = .none
    @Published var playlist: [MusicDetail] = []
    @Published var currentIndex: Int = 0
    @Published var isLoading: Bool = false

    private var player: AVPlayer?
    private var playerItem: AVPlayerItem?
    private var timeObserver: Any?
    private var cancellables = Set<AnyCancellable>()
    
    private var isLiked: Bool {
        get {
            if currentSong == nil {
                return false
            }
            return musicApiViewModel.isLiked(musicID: Int32(currentSong!.id!)!, rawIsLike: currentSong!.isLiked!.boolValue)
        }
    }

    enum RepeatMode: CaseIterable {
        case none, single, all

        var iconName: String {
            switch self {
            case .none: return "repeat"
            case .single: return "repeat.1"
            case .all: return "repeat"
            }
        }
    }

    // MARK: - Initialization
    override init() {
        super.init()
        setupBindings()
        setupAudioSession()
    }

//    deinit {
//        cleanupPlayer()
//    }
    
    private func cleanupPlayer() {
        // Stop time observer first with the current player instance
        if let timeObserver = timeObserver, let player = player {
            player.removeTimeObserver(timeObserver)
            self.timeObserver = nil
        }
        
        // Remove other observers
        removePlayerObservers()
        
        // Clean up player references
        player = nil
        playerItem = nil
    }

    private func setupBindings() {
        // Update progress when current time changes
        $currentTime
            .combineLatest($duration)
            .map { currentTime, duration in
                guard duration > 0 else { return 0.0 }
                return currentTime / duration
            }
            .assign(to: \.playProgress, on: self)
            .store(in: &cancellables)
    }

    // MARK: - Audio Session Setup
    func setupAudioSession() {
        do {
            try AVAudioSession.sharedInstance().setCategory(
                .playback,
                mode: .default
            )
            try AVAudioSession.sharedInstance().setActive(true)
        } catch {
            print("Failed to setup audio session: \(error)")
        }
    }

    // MARK: - Playback Control
    func play(song: MusicDetail, in playlist: [MusicDetail] = []) {
        if !playlist.isEmpty {
            self.playlist = playlist
            if let index = playlist.firstIndex(where: { $0.id == song.id }) {
                currentIndex = index
            }
        } else {
            self.playlist.insert(song, at: 0)
            currentIndex = 0
        }

        currentSong = song
        loadAndPlaySong(song)
    }

    func togglePlayPause() {
        if isPlaying {
            pause()
        } else {
            resume()
        }
    }

    func pause() {
        player?.pause()
        isPlaying = false
        stopTimeObserver()
    }

    func resume() {
        player?.play()
        isPlaying = true
        startTimeObserver()
    }

    func stop() {
        // Properly clean up current player
        cleanupPlayer()
        
        // Reset state
        isPlaying = false
        currentTime = 0
        duration = 0
    }

    func seek(to time: TimeInterval) {
        let cmTime = CMTime(seconds: time, preferredTimescale: 1000)
        player?.seek(to: cmTime)
        currentTime = time
    }

    func seekToProgress(_ progress: Double) {
        let time = duration * progress
        seek(to: time)
    }

    // MARK: - Playlist Navigation
    func playNext() {
        guard !playlist.isEmpty else { return }

        if isShuffled {
            playRandomSong()
        } else {
            let nextIndex = (currentIndex + 1) % playlist.count
            playAtIndex(nextIndex)
        }
    }

    func playPrevious() {
        guard !playlist.isEmpty else { return }

        if isShuffled {
            playRandomSong()
        } else {
            let previousIndex =
                currentIndex > 0 ? currentIndex - 1 : playlist.count - 1
            playAtIndex(previousIndex)
        }
    }

    func playAtIndex(_ index: Int) {
        guard index >= 0 && index < playlist.count else { return }
        currentIndex = index
        let song = playlist[index]
        play(song: song, in: playlist)
    }

    private func playRandomSong() {
        let randomIndex = Int.random(in: 0..<playlist.count)
        playAtIndex(randomIndex)
    }

    // MARK: - Playback Modes
    func toggleShuffle() {
        isShuffled.toggle()
    }

    func toggleRepeatMode() {
        switch repeatMode {
        case .none:
            repeatMode = .single
        case .single:
            repeatMode = .all
        case .all:
            repeatMode = .none
        }
    }

    func setVolume(_ volume: Float) {
        self.volume = volume
        player?.volume = volume
    }

    // MARK: - Like/Unlike Songs
    func toggleLike(for song: MusicDetail) {
        Task {
            if isLiked {
                await musicApiViewModel.unlikeMusic(Int32(song.id!)!)
            } else {
                await musicApiViewModel.likeMusic(Int32(song.id!)!)
            }
        }
    }

    // MARK: - Private Methods
    private func loadAndPlaySong(_ song: MusicDetail) {
        isLoading = true

        // Construct the full URL
        if let audioURL = ResourceUtils.shared.mediaURL(song.audioUrl!) {
            print("Loading audio from URL: \(audioURL)")
            loadAudioFromURL(audioURL)
        } else {
            print("Failed to create URL from: \(song.audioUrl ?? "nil")")
            isLoading = false
        }
    }

    private func loadAudioFromURL(_ url: URL) {
        // Stop current playback and clean up properly
        stop()
        
        // Create new player item and player
        playerItem = AVPlayerItem(url: url)
        player = AVPlayer(playerItem: playerItem)

        // Set volume
        player?.volume = volume

        // Add observers for the new player item
        addPlayerObservers()

        // Start playing
        player?.play()
        isPlaying = true

        startTimeObserver()
    }

    private func addPlayerObservers() {
        guard let playerItem = playerItem else { return }

        // Observer for player status
        playerItem.addObserver(
            self,
            forKeyPath: #keyPath(AVPlayerItem.status),
            options: [.old, .new],
            context: nil
        )

        // Observer for duration
        playerItem.addObserver(
            self,
            forKeyPath: #keyPath(AVPlayerItem.duration),
            options: [.old, .new],
            context: nil
        )

        // Observer for loaded time ranges (buffering)
        playerItem.addObserver(
            self,
            forKeyPath: #keyPath(AVPlayerItem.loadedTimeRanges),
            options: [.old, .new],
            context: nil
        )

        // Observer for playback end
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(playerDidFinishPlaying),
            name: .AVPlayerItemDidPlayToEndTime,
            object: playerItem
        )

        // Observer for playback stalled
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(playerDidStall),
            name: .AVPlayerItemPlaybackStalled,
            object: playerItem
        )

        // Observer for failed to play to end time
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(playerFailedToPlayToEndTime),
            name: .AVPlayerItemFailedToPlayToEndTime,
            object: playerItem
        )
    }

    private func removePlayerObservers() {
        guard let playerItem = playerItem else { return }

        // Remove KVO observers safely
        playerItem.removeObserver(
            self,
            forKeyPath: #keyPath(AVPlayerItem.status)
        )

        playerItem.removeObserver(
            self,
            forKeyPath: #keyPath(AVPlayerItem.duration)
        )

        playerItem.removeObserver(
            self,
            forKeyPath: #keyPath(AVPlayerItem.loadedTimeRanges)
        )

        NotificationCenter.default.removeObserver(
            self,
            name: .AVPlayerItemDidPlayToEndTime,
            object: playerItem
        )
        NotificationCenter.default.removeObserver(
            self,
            name: .AVPlayerItemPlaybackStalled,
            object: playerItem
        )
        NotificationCenter.default.removeObserver(
            self,
            name: .AVPlayerItemFailedToPlayToEndTime,
            object: playerItem
        )
    }

    @objc private func playerDidFinishPlaying() {
        DispatchQueue.main.async {
            self.handlePlaybackFinished()
        }
    }

    @objc private func playerDidStall() {
        DispatchQueue.main.async {
            print("Player playback stalled - checking network connectivity")
            self.isLoading = true
        }
    }

    @objc private func playerFailedToPlayToEndTime(_ notification: Notification)
    {
        DispatchQueue.main.async {
            if let error = notification.userInfo?[
                AVPlayerItemFailedToPlayToEndTimeErrorKey
            ] as? Error {
                print(
                    "Player failed to play to end time: \(error.localizedDescription)"
                )
            }
            self.isLoading = false
            self.isPlaying = false
        }
    }

    // KVO for player item
    override func observeValue(
        forKeyPath keyPath: String?,
        of object: Any?,
        change: [NSKeyValueChangeKey: Any]?,
        context: UnsafeMutableRawPointer?
    ) {
        DispatchQueue.main.async {
            if keyPath == #keyPath(AVPlayerItem.status) {
                if let statusNumber = change?[.newKey] as? NSNumber {
                    let status = AVPlayerItem.Status(
                        rawValue: statusNumber.intValue
                    )
                    switch status {
                    case .readyToPlay:
                        print("✅ Audio ready to play")
                        self.isLoading = false
                        if let duration = self.playerItem?.duration,
                            duration.isValid && !duration.isIndefinite
                        {
                            self.duration = CMTimeGetSeconds(duration)
                        }
                    case .failed:
                        self.isLoading = false
                        self.isPlaying = false
                        if let error = self.playerItem?.error {
                            print(
                                "❌ Player item failed with error: \(error.localizedDescription)"
                            )
                            // Check if it's a network error
                            let nsError = error as NSError
                            if nsError.domain == NSURLErrorDomain {
                                print(
                                    "🌐 Network error detected - URL: \(nsError.code)"
                                )
                                // You might want to retry or show network error message
                            }
                        }
                    case .unknown:
                        print("⏳ Player status unknown - loading...")
                        self.isLoading = true
                    default:
                        break
                    }
                }
            } else if keyPath == #keyPath(AVPlayerItem.duration) {
                if let duration = self.playerItem?.duration,
                    duration.isValid && !duration.isIndefinite
                {
                    self.duration = CMTimeGetSeconds(duration)
                }
            } else if keyPath == #keyPath(AVPlayerItem.loadedTimeRanges) {
                // Handle buffering status
                if let timeRanges = self.playerItem?.loadedTimeRanges,
                    !timeRanges.isEmpty
                {
                    let timeRange = timeRanges[0].timeRangeValue
                    let bufferedTime = CMTimeGetSeconds(
                        CMTimeAdd(timeRange.start, timeRange.duration)
                    )
                    print("🔄 Buffered: \(bufferedTime)s")

                    // If we have some buffer and player was stalled, resume loading state
                    if bufferedTime > self.currentTime + 5.0 && self.isLoading {
                        self.isLoading = false
                    }
                }
            }
        }
    }

    private func startTimeObserver() {
        stopTimeObserver()  // Remove any existing observer

        let interval = CMTime(
            seconds: 0.1,
            preferredTimescale: CMTimeScale(NSEC_PER_SEC)
        )
        timeObserver = player?.addPeriodicTimeObserver(
            forInterval: interval,
            queue: .main
        ) { [weak self] time in
            let realTime = CMTimeGetSeconds(time)
            if let duration = self?.duration, realTime > duration {
                return
            }
            self?.currentTime = realTime
        }
    }

    private func stopTimeObserver() {
        if let timeObserver = timeObserver, let player = player {
            player.removeTimeObserver(timeObserver)
            self.timeObserver = nil
        }
    }

    private func handlePlaybackFinished() {
        switch repeatMode {
        case .none:
            if currentIndex < playlist.count - 1 {
                playNext()
            } else {
                stop()
            }
        case .single:
            seek(to: 0)
            resume()
        case .all:
            playNext()
        }
    }
}
