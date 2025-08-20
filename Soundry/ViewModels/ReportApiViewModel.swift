import Foundation
import APIClient

@MainActor
class ReportApiViewModel: ObservableObject {
    private let reportApi: ReportApi

    @Published var isLoading = false
    @Published var errorMessage: String?

    @Published var reportTypes: [GetReportTypes200ResponseOneOfDataTypesInner] =
        []
    @Published var isSubmitSuccess: Bool = false

    init(client: Ktor_client_coreHttpClient) {
        reportApi = ReportApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }

    func getReportTypes() async {
        isLoading = true
        errorMessage = nil

        do {
            let response = try await reportApi.getReportTypes()
            if response.success {
                let body = try await response.body()
                guard let data = body.data, body.ok == 1 else {
                    errorMessage = "No report types available."
                    isLoading = false
                    return
                }
                reportTypes = data.types ?? []
            }
            isLoading = false
        } catch {
            errorMessage =
                "Failed to get reports: \(error.localizedDescription)"
            isLoading = false
        }
    }

    struct MusicInfo {
        let id: String
        let name: String
        let artists: [Artist]

        struct Artist {
            let id: String
            let name: String
        }
    }

    func submitReport(
        types: [PostReportSubmitRequest.Type_],
        musicID: Int32,
        url: String? = nil,
        content: String?
    ) async {
        isLoading = true
        isSubmitSuccess = false
        errorMessage = nil

        do {
            let request = PostReportSubmitRequest(
                type: types,
                targetId: musicID,
                url: (url != nil && !(url!.isEmpty)) ? url : nil,
                content: content
            )

            let response = try await reportApi.postReportSubmit(
                postReportSubmitRequest: request
            )

            let result = try await response.body()
            
            guard result.ok != 0 else {
                errorMessage = result.msg ?? "Report submission failed."
                isSubmitSuccess = false
                isLoading = false
                return
            }
            isSubmitSuccess = true
            isLoading = false

        } catch {
            errorMessage = "Failed to submit report: \(error.localizedDescription)"
            isLoading = false
        }
    }
}
