import Foundation
import APIClient

@MainActor
class MusicApiViewModel: ObservableObject {
    private let musicApi: MusicApi

    @Published var isLoading: Bool = false
    @Published var lastError: String?

    // Music category list data
    @Published var musicCategoryList: GetMusicCategoryList200ResponseData?

    // Music hall data
    @Published var musicHallData: [MusicHallItem]?
    @Published var musicHallHasMore: Bool = false
    @Published var musicHallUserInfoMap: [String: APIClient.UserInfo] = [:]
    @Published var currentHomeHallPage: Int32 = 1
    @Published var isHomeMallLoadingMore: Bool = false
    
    @Published var musicHallSearchData: [MusicHallItem] = []
    @Published var musicHallHasMoreSearch: Bool = false
    @Published var musicHallSearchUserInfoMap: [String: APIClient.UserInfo] = [:]
    @Published var currentHomeHallSearchPage: Int32 = 1
    @Published var isHomeMallSearchLoadingMore: Bool = false

    // Music list data
    @Published var musicList: GetMusicCategoryList200ResponseData?

    // Music detail data
    @Published var musicDetail: MusicDetail?

    // My music data
    @Published var myMusic: GetMusicMy200ResponseData?

    // Music options data
    @Published var musicOptions: GetMusicOptions200ResponseData?

    // Create music result
    @Published var createMusicResult: PostMusicCreate200ResponseData?

    // Music status result
    @Published var musicStatus: PostMusicStatus200ResponseOneOfData?

    @Published var noticeList: GetNoticeList200ResponseData?
    
    @Published var modifiedLikeMusicList: [Int32: Bool] = [:]

    init(client: Ktor_client_coreHttpClient) {
        musicApi = MusicApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }

    // MARK: - Public Methods

    /// 获取分类音乐列表
    /// - Parameters:
    ///   - type: 分类类型：1=我的作品，2=我的点赞，3=草稿（暂未实现），4=下载记录
    ///   - page: 页码（可选，默认为1）
    ///   - pageSize: 每页数量（可选，默认为20）
    func getMusicCategoryList(
        type: MusicApi.TypeGetMusicCategoryList,
        page: Int32 = 1,
        pageSize: Int32 = 20
    ) async {
        await performAPICall {
            let response = try await self.musicApi.getMusicCategoryList(
                type: type,
                page: KotlinInt(int: page),
                pageSize: KotlinInt(int: pageSize)
            )
            let body = try await response.body()
            self.musicCategoryList = body.data
        }
    }

    /// 获取音乐详情
    /// - Parameters:
    ///   - id: 音乐ID
    ///   - targetUid: 目标用户ID（可选）
    func getMusicDetail(id: Int32, targetUid: Int32? = nil) async {
        await performAPICall {
            let response = try await self.musicApi.getMusicDetail(
                id: id,
                targetUid: targetUid.map { KotlinInt(int: $0) }
            )
            let body = try await response.body()
            guard let detail = body.data, body.ok == 1 else {
                
                return
            }
            self.musicDetail = detail
        }
    }

    /// 获取音乐大厅列表
    /// - Parameters:
    ///   - page: 页码（可选，默认为1）
    ///   - pageSize: 每页数量（可选，默认为20）
    ///   - searchText: 搜索关键词（可选）
    func getMusicHall(
        page: Int32 = 1,
        pageSize: Int32 = 20
    ) async {
        await performAPICall {
            if page != 1 {
                self.isHomeMallLoadingMore = true
            }
            let response = try await self.musicApi.getMusicHall(
                page: KotlinInt(int: page),
                pageSize: KotlinInt(int: pageSize),
                searchText: nil
            )
            let body = try await response.body()
            guard let data = body.data, body.ok != 0 else {
                self.musicHallData = nil
                self.musicHallHasMore = false
                self.musicHallUserInfoMap = [:]
                self.currentHomeHallPage = 1
                return
            }
            self.currentHomeHallPage = page
            if page == 1 {
                self.musicHallData = data.list
                self.musicHallUserInfoMap = data.userInfos ?? [:]
                self.musicHallHasMore = data.hasMoreBoolean
                return
            }
            self.musicHallData?.append(contentsOf: data.list!)
            self.musicHallUserInfoMap.merge(data.userInfos ?? [:]) { (_, new) in new }
            self.musicHallHasMore = data.hasMoreBoolean
            self.isHomeMallLoadingMore = false
        }
    }

    /// 获取音乐大厅列表
    /// - Parameters:
    ///   - page: 页码（可选，默认为1）
    ///   - pageSize: 每页数量（可选，默认为20）
    ///   - searchText: 搜索关键词（可选）
    func searchMusicHall(
        page: Int32 = 1,
        pageSize: Int32 = 20,
        searchText: String? = nil
    ) async {
        await performAPICall {
            if page == 1 {
                self.musicHallSearchData = []
                self.musicHallHasMoreSearch = false
            } else {
                self.isHomeMallSearchLoadingMore = true
            }
            let response = try await self.musicApi.getMusicHall(
                page: KotlinInt(int: page),
                pageSize: KotlinInt(int: pageSize),
                searchText: searchText
            )
            let body = try await response.body()
            guard let data = body.data, body.ok != 0 else {
                self.musicHallData = nil
                self.musicHallHasMore = false
                self.musicHallUserInfoMap = [:]
                self.currentHomeHallSearchPage = 1
                return
            }
            self.currentHomeHallPage = page
            if page == 1 {
                self.musicHallSearchData = data.list ?? []
                self.musicHallSearchUserInfoMap = data.userInfos ?? [:]
                self.musicHallHasMoreSearch = data.hasMoreBoolean
                return
            }
            self.musicHallSearchData.append(contentsOf: data.list!)
            self.musicHallSearchUserInfoMap.merge(data.userInfos ?? [:]) { (_, new) in new }
            self.musicHallHasMoreSearch = data.hasMoreBoolean
            self.isHomeMallSearchLoadingMore = false
        }
    }

    /// 获取用户音乐列表
    /// - Parameters:
    ///   - page: 页码（可选，默认为1）
    ///   - pageSize: 每页数量（可选，默认为20）
    func getMusicList(page: Int32 = 1, pageSize: Int32 = 20) async {
        await performAPICall {
            let response = try await self.musicApi.getMusicList(
                page: KotlinInt(int: page),
                pageSize: KotlinInt(int: pageSize)
            )
            let body = try await response.body()
            guard let data = body.data, body.ok != 0 else {
                return
            }
            self.musicList = data
        }
    }

    /// 获取我的页面数据
    /// - Parameters:
    ///   - page: 页码（可选，默认为1）
    ///   - pageSize: 每页数量（可选，默认为20）
    func getMusicMy(page: Int32 = 1, pageSize: Int32 = 20) async {
        await performAPICall {
            let response = try await self.musicApi.getMusicMy(
                page: KotlinInt(int: page),
                pageSize: KotlinInt(int: pageSize)
            )
            let body = try await response.body()
            guard let data = body.data, body.ok != 0 else {
                // TODO 改为通用形式
                return
            }
            self.myMusic = data
        }
    }

    /// 获取音乐选项数据
    func getMusicOptions() async {
        await performAPICall {
            let response = try await self.musicApi.getMusicOptions()
            let body = try await response.body()
            guard let options = body.data, body.ok != 0 else {
                return
            }
            self.musicOptions = options
        }
    }

    /// 获取通知
    /// - Parameters:
    ///   - page: 页码（可选，默认为1）
    ///   - pageSize: 每页数量（可选，默认为20）
    func getNotice(page: Int32 = 1, pageSize: Int32 = 20) async {
        await performAPICall {
            let response = try await self.musicApi.getNotice(
                page: KotlinInt(int: page),
                pageSize: KotlinInt(int: pageSize)
            )
            let body = try await response.body()
            guard let data = body.data, body.ok != 0 else {
                // TODO 改notice为通用形式
                return
            }
            self.noticeList = data

        }
    }

    
    /// 创建音乐
    /// - Parameters:
    ///   - mood: 音乐心情ID数组（可多选）
    ///   - intro: 生成音乐的提示词
    ///   - style: 音乐风格ID数组（可多选）
    ///   - title: 音乐标题（可选）
    ///   - lyrics: 歌词提示词（用于AI参考生成音乐）
    ///   - language: 音乐语言ID数组（可多选）
    ///   - instrument: 音乐乐器ID数组（可多选）
    ///   - isInstrumental: 是否为纯音乐：0=不是纯音乐，1=纯音乐
    ///   - introPicMediaId: 提示图片媒体ID
    ///   - introVoiceMediaId: 录音文件媒体ID
    func createMusic(
        mood: [Int32]? = nil,
        intro: String? = nil,
        style: [Int32]? = nil,
        title: String? = nil,
        lyrics: String? = nil,
        language: [Int32]? = nil,
        instrument: [Int32]? = nil,
        isInstrumental: Bool? = nil,
        introPicMediaId: Int32? = nil,
        introVoiceMediaId: Int32? = nil
    ) async {
        let request = PostMusicCreateRequest(
            mood: mood?.map { KotlinInt(int: $0) },
            intro: intro,
            style: style?.map { KotlinInt(int: $0) },
            title: title,
            lyrics: lyrics,
            language: language?.map { KotlinInt(int: $0) },
            instrument: instrument?.map { KotlinInt(int: $0) },
            isInstrumental: isInstrumental == nil ? 0 : (isInstrumental! ? 1 : 0),
            introPicMediaId: introPicMediaId.map { KotlinInt(int: $0) },
            introVoiceMediaId: introVoiceMediaId.map { KotlinInt(int: $0) }
        )

        await performAPICall {
            let response = try await self.musicApi.postMusicCreate(
                postMusicCreateRequest: request
            )
            let body = try await response.body()
            guard let result = body.data, body.ok != 0 else {
                return
            }
            self.createMusicResult = result
        }
    }

    /// 删除音乐
    /// - Parameter musicId: 音乐ID
    func deleteMusic(musicId: Int32) async {
        await performAPICall {
            let request = PostMusicStatusRequest(id: musicId)
            _ = try await self.musicApi.postMusicDelete(
                postMusicStatusRequest: request
            )
        }
    }

    /// 记录音乐下载
    /// - Parameter musicId: 音乐ID
    func downloadMusic(musicId: Int32) async {
        await performAPICall {
            let request = PostMusicStatusRequest(id: musicId)
            _ = try await self.musicApi.postMusicDownload(
                postMusicStatusRequest: request
            )
        }
    }

    /// 音乐点赞
    /// - Parameter musicId: 音乐ID
    private func postLikeMusic(musicId: Int32) async throws {
        do {
            let request = PostMusicStatusRequest(id: musicId)
            let response = try await self.musicApi.postMusicLike(
                postMusicStatusRequest: request
            )
            let body = try await response.body()
            print(String(describing: body))
        } catch {
            throw error
        }
    }

    /// 取消音乐点赞
    /// - Parameter musicId: 音乐ID
    private func postUnlikeMusic(musicId: Int32) async throws {
        do {
            let request = PostMusicStatusRequest(id: musicId)
            let response = try await self.musicApi.postMusicUnlike(
                postMusicStatusRequest: request
            )
            let body = try await response.body()
            print(String(describing: body))
        } catch {
            throw error
        }
    }

    /// 获取音乐生成状态
    /// - Parameter musicId: 音乐ID
    func getMusicStatus(musicId: Int32) async throws {
        await performAPICall {
            let request = PostMusicStatusRequest(id: musicId)
            let response = try await self.musicApi.postMusicStatus(
                postMusicStatusRequest: request
            )
            let body = try await response.body()
            guard let status = body.data, body.ok == 1 else {
                return
            }
            self.musicStatus = status
        }
    }
    
    func likeMusic(_ musicID: Int32) async {
        isLoading = true
        lastError = nil
        do {
            try await postLikeMusic(musicId: musicID)
            modifiedLikeMusicList[musicID] = true
        } catch {
            print("MusicApiWrapper Error: \(error)")
            lastError = "like error: \(error.localizedDescription)"
        }
    }
    
    func unlikeMusic(_ musicID: Int32) async {
        isLoading = true
        lastError = nil
        do {
            try await postUnlikeMusic(musicId: musicID)
            modifiedLikeMusicList[musicID] = false
        } catch {
            print("MusicApiWrapper Error: \(error)")
            lastError = "cancel like error: \(error.localizedDescription)"
        }
    }
    
    func clearData() {
        isLoading = false
        lastError = nil
        musicCategoryList = nil
        musicHallData = nil
        musicHallHasMore = false
        musicHallUserInfoMap = [:]
        currentHomeHallPage = 1
        isHomeMallLoadingMore = false
        musicHallSearchData = []
        musicHallHasMoreSearch = false
        musicHallSearchUserInfoMap = [:]
        currentHomeHallSearchPage = 1
        isHomeMallSearchLoadingMore = false
        modifiedLikeMusicList = [:]
        musicList = nil
        musicDetail = nil
        myMusic = nil
        musicOptions = nil
        createMusicResult = nil
        musicStatus = nil
        noticeList = nil
    }

    // MARK: - Private Methods

    private func performAPICall(_ apiCall: @escaping () async throws -> Void)
        async
    {
        isLoading = true
        lastError = nil

        do {
            try await apiCall()
        } catch {
            lastError = "API send error: \(error.localizedDescription)"
            print("MusicApiWrapper Error: \(error)")
        }

        isLoading = false
    }
}

// MARK: - Extensions for easier access

extension MusicApiViewModel {
    /// 检查是否有错误
    var hasError: Bool {
        return lastError != nil
    }

    /// 获取错误消息
    var errorMessage: String {
        return lastError ?? "Unknown error"
    }

    /// 清除错误信息
    func clearError() {
        lastError = nil
    }
    
    func isLiked(musicID: Int32, rawIsLike: MusicHallItem.IsLike) -> Bool {
        let isLike = rawIsLike == .yes
        if let modified = modifiedLikeMusicList[musicID] {
            return modified
        }
        return isLike
    }
    
    func isLiked(musicID: Int32, rawIsLike: Bool) -> Bool {
        if let modified = modifiedLikeMusicList[musicID] {
            return modified
        }
        return rawIsLike
    }
}
