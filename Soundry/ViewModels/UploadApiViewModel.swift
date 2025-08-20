import Foundation
import APIClient
import Alamofire
import CryptoKit

@MainActor
class UploadApiViewModel: ObservableObject {
    private let uploadApi: UploadApi
    
    init(client: Ktor_client_coreHttpClient) {
        uploadApi = UploadApi(
            baseUrl: AppConfig.baseURL,
            httpClient: client
        )
    }
    
    @Published var isLoading = false
    @Published var errorMessage: String?
    
    @Published var avatarUploadRelativePath: String? = nil
    @Published var feedbackUploadResultMap: [String:String?] = [:]
    @Published var aiPromptCoverMediaID: Int32? = nil
    @Published var aiPromptVoiceMediaID: Int32? = nil
    
    func uploadAvatar(filePath: String) async -> String? {
        isLoading = true
        errorMessage = nil
        
        do {
            guard let (uploadID, relativePath) = try await uploadFile(flag: .avatar, type: .image, file: filePath) else {
                print("Failed to upload avatar file")
                return nil
            }
            print("Avatar upload successful with ID: \(uploadID), relative path: \(relativePath)")
            return relativePath
        } catch {
            isLoading = false
            errorMessage = "Failed to upload avatar: \(error)"
            print("Error uploading avatar: \(error)")
            return nil
        }
    }
    
    func uploadFeedback(filePaths: [String]) async {
        isLoading = true
        errorMessage = nil
        feedbackUploadResultMap = [:]
        
        do {
            for filePath in filePaths {
                guard let (_, relativePath) = try await uploadFile(flag: .feedback, type: .image, file: filePath) else {
                    self.feedbackUploadResultMap[filePath] = nil
                    print("Failed to upload feedback file: \(filePath)")
                    continue
                }
                self.feedbackUploadResultMap[filePath] = relativePath
            }
        } catch {
            isLoading = false
            errorMessage = "Failed to upload feedback: \(error.localizedDescription)"
            print("Error uploading feedback: \(error)")
            return
        }
        isLoading = false
    }
    
    func uploadAIPromptCover(filePath: String) async throws {
        isLoading = true
        errorMessage = nil
        
        do {
            guard let (uploadID, _) = try await uploadFile(flag: .aiPromptCover, type: .image, file: filePath) else {
                print("Failed to upload AI prompt cover file")
                return
            }
            guard let mediaID = try await createMediaRecord(uploadId: uploadID, mediaType: .image) else {
                print("Failed to create media record for AI prompt cover")
                return
            }
            self.aiPromptCoverMediaID = mediaID
            print("AI prompt cover upload successful with ID: \(uploadID), media ID: \(mediaID)")
        } catch {
            isLoading = false
            errorMessage = "Failed to upload AI prompt cover: \(error.localizedDescription)"
            print("Error uploading AI prompt cover: \(error)")
            throw error
        }
        isLoading = false
    }
    
    func uploadAIPromptVoice(filePath: String) async throws{
        isLoading = true
        errorMessage = nil
        
        do {
            guard let (uploadID, _)  = try await uploadFile(flag: .aiPromptVoice, type: .voice, file: filePath) else {
                print("Failed to upload AI prompt voice file")
                return
            }
            guard let mediaID = try await createMediaRecord(uploadId: uploadID, mediaType: .audio) else {
                print("Failed to create media record for AI prompt voice")
                return
            }
            self.aiPromptVoiceMediaID = mediaID
            print("AI prompt voice upload successful with ID: \(uploadID), media ID: \(mediaID)")
        } catch {
            isLoading = false
            errorMessage = "Failed to upload AI prompt voice: \(error.localizedDescription)"
            print("Error uploading AI prompt voice: \(error)")
            throw error
        }
        isLoading = false
    }
    
    private func uploadFile(flag: PostUploadPresignedRequest.Flag, type: PostUploadPresignedRequest.Type_, file: String)
        async throws -> (Int32, String)?
    {
        let fileURL = URL(fileURLWithPath: file)
        let fileData = try Data(contentsOf: fileURL)
        let hash = Insecure.MD5.hash(data: fileData)
        let hashString = hash.map { String(format: "%02hhx", $0) }.joined()
        
        print("File MD5 Hash: \(hashString)")
        
        guard let data = try await getPresignedUrl(flag: flag, type: type, md5: hashString) else {
            print("Failed to get presigned URL")
            // You might want to throw an error here instead of just returning
            throw URLError(.badServerResponse, userInfo: [NSLocalizedDescriptionKey: "Failed to get presigned URL"])
        }
        
        let dir = data.dir
        
        if data.isUpload == .yes {
            print("Already uploaded: \(String(describing: data.uploadId))")
            return (data.uploadId!.int32Value, dir.path)
        }
        
        let presignedPost = data.presignedPost!
        let urlString = presignedPost.url
        let fields = presignedPost.fields
        
        let task = AF.upload(multipartFormData: { multipartFormData in
            multipartFormData.append(Data(fields.key.utf8), withName: "key")
            multipartFormData.append(Data(fields.policy.utf8), withName: "Policy")
            multipartFormData.append(Data(fields.xAmzDate.utf8), withName: "X-Amz-Date")
            multipartFormData.append(Data(fields.contentType.utf8), withName: "Content-Type")
            multipartFormData.append(Data(fields.xAmzAlgorithm.utf8), withName: "X-Amz-Algorithm")
            multipartFormData.append(Data(fields.xAmzSignature.utf8), withName: "X-Amz-Signature")
            multipartFormData.append(Data(fields.xAmzCredential.utf8), withName: "X-Amz-Credential")
            
            // Append the actual file data
            multipartFormData.append(fileData, withName: "file", fileName: fileURL.lastPathComponent, mimeType: fields.contentType)
            
        }, to: urlString)
        .validate() // Automatically validates for 200...299 status codes

        do {
            // Await the upload task to complete
            _ = try await task.serializingData().value
            
            guard let uploadID = data.uploadId?.int32Value else {
                print("No upload ID returned from server")
                return nil
            }
            
            print("Upload successful with Alamofire")
            // After successful upload, notify the backend
            try await markUploadSuccess(uploadIds: [uploadID])
            print("Finish upload notification sent successfully")
            return (uploadID, dir.path)
            
        } catch {
            print("Upload failed with Alamofire: \(error)")
            if let afError = error as? AFError, let data = afError.errorDescription {
                print("S3 Error Response: \(data)")
            }
            // Re-throw the error to let the caller handle it
            throw error
        }
    }
    
    private func getPresignedUrl(
        flag: PostUploadPresignedRequest.Flag,
        type: PostUploadPresignedRequest.Type_,
        md5: String? = nil,
        width: Int32? = nil,
        height: Int32? = nil,
        imgType: String? = nil,
        outWidth: Int32? = nil,
        outHeight: Int32? = nil
    ) async throws -> UploadPresignedData? {
        do {
            let request = PostUploadPresignedRequest(
                flag: flag,
                list: nil,
                md5: md5,
                type: type,
                width: width != nil ? KotlinInt(int: width!) : nil,
                height: height != nil ? KotlinInt(int: height!) : nil,
                imgType: imgType,
                outWidth: outWidth != nil ? KotlinInt(int: outWidth!) : nil,
                outHeight: outHeight != nil ? KotlinInt(int: outHeight!) : nil
            )
            
            let response = try await uploadApi.postUploadPresigned(postUploadPresignedRequest: request)
            let body = try await response.body()
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "No data returned from server"
                print("Failed to get presigned url \(String(describing: body))")
                return nil
            }
            return data
        } catch {
            print("Error getting presigned URL: \(error)")
            throw error
        }
    }
    
    private func markUploadSuccess(uploadIds: [Int32]) async throws {
        do {
            let request = PostUploadSuccessRequest(id: uploadIds.map { KotlinInt(int: $0) })
            let response = try await uploadApi.postUploadSuccess(postUploadSuccessRequest: request)
            let body = try await response.body()
            guard body.ok == 1 else {
                errorMessage = "Failed to mark upload success: \(String(describing: body))"
                print("Failed to mark upload success: \(String(describing: body))")
                isLoading = false
                return
            }
            print("Upload success marked: \(String(describing: body))")
        } catch {
            print("Error marking upload success: \(error)")
            throw error
        }
    }
    
    private func createMediaRecord(uploadId: Int32, mediaType: PostUploadCreateMediaRequest.MediaType) async throws -> Int32? {
        do {
            let request = PostUploadCreateMediaRequest(
                uploadId: uploadId,
                mediaType: mediaType.value
            )
            let response = try await uploadApi.postUploadCreateMedia(postUploadCreateMediaRequest: request)
            let body = try await response.body()
            guard let data = body.data, body.ok == 1 else {
                errorMessage = "No response body"
                isLoading = false
                print("Failed to create media record: \(String(describing: body))")
                return nil
            }
            print("Media record created successfully with ID: \(String(describing: data.mediaId))")
            return data.mediaId!.int32Value
        } catch {
            print("Error creating media record: \(error)")
            throw error
        }
    }
}
