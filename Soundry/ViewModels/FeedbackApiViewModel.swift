import Foundation
import APIClient

@MainActor
class FeedbackApiViewModel: ObservableObject {
    private let feedbackApi: FeedbackApi
    
    @Published var isLoading = false
    @Published var errorMessage: String?
    @Published var isSubmitSuccess = false
    
    init(client: Ktor_client_coreHttpClient) {
        feedbackApi = FeedbackApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }
    
    func submitFeedback(
        content: String? = nil,
        photoUrls: [(url: String, width: Int32?, height: Int32?)]? = nil
    ) async {
        isLoading = true
        errorMessage = nil
        isSubmitSuccess = false
        
        do {
            var photoObjects: [PostFeedbackSubmitRequestPhotosInner]? = nil
            if let photoUrls = photoUrls, !photoUrls.isEmpty {
                photoObjects = photoUrls.map {
                    return PostFeedbackSubmitRequestPhotosInner(
                        url: $0.url,
                        width: $0.width.map { KotlinInt(int: $0) },
                        height: $0.height.map { KotlinInt(int: $0) }
                    )
                }
            }
            
            let request = PostFeedbackSubmitRequest(
                photos: photoObjects,
                content: content
            )
            
            let response = try await feedbackApi.postFeedbackSubmit(postFeedbackSubmitRequest: request)
            
            let body = try await response.body()

            guard body.ok == 1 else {
                isSubmitSuccess = false
                isLoading = false
                print("Error submitting feedback: \(String(describing: body))")
                return
            }
            print("Feedback submitted successfully: \(String(describing: body))")
            isSubmitSuccess = true
            isLoading = false
        } catch {
            errorMessage = "Submit Feedback Error: \(error)"
            isLoading = false
        }
    }
}
