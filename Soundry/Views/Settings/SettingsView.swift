import Factory
import Foundation
import SafariServices
import SwiftUI
import UIKit

struct SettingsView: View {
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.userSessionViewModel) var userSession:
        UserSessionViewModel
    @State private var showingLogoutAlert = false
    @State private var showingAboutUs = false
    @State private var cacheSize: String = "Calculating..."
    @State private var isClearingCache = false
    @State private var showProfile = false
    @State private var showAccount = false
    @State private var showReport = false
    @State private var showBlack = false
    @State private var showingSafari = false
    @State private var targetURL: URL?
    @State private var showingURLError = false

    private let userAgreementURL =
        "https://giant-flyingfish-c30.notion.site/Soundry-User-Agreement-254270f6474f8031b4e7d59223212c2b?pvs=73"
    private let privacyPolicyURL =
        "https://giant-flyingfish-c30.notion.site/Soundry-Privacy-Policy-254270f6474f80158ef4ed0805af3ff2?pvs=73"

    // 打开指定URL（外部浏览器）
    private func openURL(_ urlString: String) {
        guard let url = URL(string: urlString) else {
            showingURLError = true
            return
        }
        UIApplication.shared.open(url)
    }

    var body: some View {
        NavigationView {
            ZStack {
                Color.appBackground
                    .ignoresSafeArea()
                
                VStack(spacing: 0) {
                    // 导航栏
                    HStack {
                        Button(action: { dismiss() }) {
                            Image(systemName: "chevron.left")
                                .font(.system(size: 20, weight: .medium))
                                .foregroundColor(.white)
                        }
                        
                        Spacer()
                        
                        Text("Settings")
                            .font(.system(size: 18, weight: .semibold))
                            .foregroundColor(.white)
                        
                        Spacer()
                        
                        Color.clear
                            .frame(width: 20, height: 20)
                    }
                    .padding(.horizontal, 20)
                    .padding(.top, 12)
                    .frame(height: 44)
                    
                    ScrollView {
                        VStack(spacing: 32) {
                            // 用户设置区域（仅登录用户）
                            if userSession.isLoggedIn {
                                SettingsSection {
                                    NavigationLink(destination: ProfileView()) {
                                        SettingsRowView(title: "Profile", isLast: false)
                                    }
                                    
                                    NavigationLink(destination: AccountView()) {
                                        SettingsRowView(title: "Account", isLast: true)
                                    }
                                }
                            }
                            
                            // 通用设置区域
                            SettingsSection {
                                Button(action: { openURL(userAgreementURL) }) {
                                    SettingsRowView(title: "User Agreement", isLast: false)
                                }
                                
                                Button(action: { openURL(privacyPolicyURL) }) {
                                    SettingsRowView(title: "Privacy Policy", isLast: true)
                                }
                            }
                            
                            // 用户相关设置（仅登录用户）
                            if userSession.isLoggedIn {
                                SettingsSection {
                                    NavigationLink(destination: BlackListView()) {
                                        SettingsRowView(title: "Blacklist", isLast: false)
                                    }
                                    
                                    NavigationLink(destination: FeedbackView()) {
                                        SettingsRowView(title: "Report an Issue", isLast: true)
                                    }
                                }
                            }
                            
                            // 应用信息区域
                            SettingsSection {
                                NavigationLink(destination: AboutUsView()) {
                                    SettingsRowView(
                                        title: "About Us",
                                        detailText: "V\(AppConfig.info.version)",
                                        isLast: false
                                    )
                                }
                                
                                Button(action: { clearCache() }) {
                                    SettingsRowView(
                                        title: "Clear Cache",
                                        detailText: isClearingCache ? "Clearing..." : cacheSize,
                                        isLast: true
                                    )
                                }
                            }
                            
                            // 退出登录按钮（仅登录用户）
                            if userSession.isLoggedIn {
                                Button(action: {
                                    showingLogoutAlert = true
                                }) {
                                    Text("Log Out")
                                        .font(.system(size: 16, weight: .medium))
                                        .foregroundColor(.red)
                                        .frame(maxWidth: .infinity)
                                        .padding(.vertical, 16)
                                        .background(
                                            RoundedRectangle(cornerRadius: 12)
                                                .fill(Color.red.opacity(0.1))
                                        )
                                }
                                .padding(.horizontal, 20)
                            }
                        }
                        .padding(.vertical, 20)
                    }
                }
            }
            .navigationBarHidden(true)
            .navigationBarBackButtonHidden(true)
        }
        .onAppear{
            calculateCacheSize()
        }
        .alert("Log Out", isPresented: $showingLogoutAlert) {
            Button("Cancel", role: .cancel) {}
            Button("Log Out", role: .destructive) {
                userSession.logout()
                dismiss()
            }
        } message: {
            Text("Are you sure you want to log out?")
        }
        .alert("Unable to Open Link", isPresented: $showingURLError) {
            Button("OK") {
                showingURLError = false
            }
        } message: {
            Text("The link could not be opened. Please try again later.")
        }
        .navigationBarHidden(true)
        .navigationBarBackButtonHidden(true)
    }

    // 计算缓存大小
    private func calculateCacheSize() {
        DispatchQueue.global().async {
            let cacheURLs: [URL?] = [
                FileManager.default.urls(for: .cachesDirectory,in: .userDomainMask).first,
                URL(fileURLWithPath: NSTemporaryDirectory())//临时目录
            ]
            var totalSize: UInt64 = 0

            for url in cacheURLs {
                if let url = url {
                    do {
                        let size = try calculateDirectorySize(at: url)
                        totalSize += size
                    } catch {
                        print("Error calculating size for \(url): \(error)")
                    }
                }
            }

            let formattedSize = formatFileSize(totalSize)

            DispatchQueue.main.async {
                self.cacheSize = formattedSize
            }
        }
    }

    // 计算目录大小
    private func calculateDirectorySize(at url: URL) throws -> UInt64 {
        guard
            let enumerator = FileManager.default.enumerator(
                at: url,
                includingPropertiesForKeys: [.fileSizeKey],
                options: [.skipsHiddenFiles]
            )
        else {
            return 0
        }

        var totalSize: UInt64 = 0

        for case let fileURL as URL in enumerator {
            let resourceValues = try fileURL.resourceValues(forKeys: [
                .fileSizeKey
            ])
            totalSize += UInt64(resourceValues.fileSize ?? 0)
        }

        return totalSize
    }

    // 格式化文件大小
    private func formatFileSize(_ bytes: UInt64) -> String {
        let units = ["B", "KB", "MB", "GB", "TB"]
        var size = Double(bytes)
        var unitIndex = 0

        while size >= 1024 && unitIndex < units.count - 1 {
            size /= 1024
            unitIndex += 1
        }

        return String(format: "%.1f %@", size, units[unitIndex])
    }

    // 清除缓存
    private func clearCache() {
        isClearingCache = true
        
        DispatchQueue.global().async {
            let cacheURLs: [URL?] = [
                FileManager.default.urls(for: .cachesDirectory,in: .userDomainMask).first,
                URL(fileURLWithPath: NSTemporaryDirectory())
            ]
            for url in cacheURLs {
                if let url = url {
                    do {
                        let contents = try FileManager.default
                            .contentsOfDirectory(
                                at: url,
                                includingPropertiesForKeys: nil,
                                options: []
                            )
                        for fileURL in contents {
                            try FileManager.default.removeItem(at: fileURL)
                        }
                    } catch {
                        print("Error clearing cache: \(error)")
                    }
                }
            }

            DispatchQueue.main.asyncAfter(deadline: .now() + 0.5) {
                self.isClearingCache = false
                self.calculateCacheSize()
            }
        }
    }
}

struct SettingsSection<Content: View>: View {
    let content: Content
    
    init(@ViewBuilder content: () -> Content) {
        self.content = content()
    }
    
    var body: some View {
        VStack(spacing: 0) {
            content
        }
        .background(Color.white.opacity(0.05))
        .cornerRadius(12)
        .padding(.horizontal, 20)
    }
}

struct SettingsRowView: View {
    let title: String
    let image: String?
    let detailText: String?
    let action: (() -> Void)?
    let isLast: Bool

    init(
        title: String,
        image: String? = nil,
        detailText: String? = nil,
        action: (() -> Void)? = nil,
        isLast: Bool = false
    ) {
        self.title = title
        self.image = image
        self.detailText = detailText
        self.action = action
        self.isLast = isLast
    }

    var body: some View {
        VStack(spacing: 0) {
            HStack(spacing: 16) {
                if let image = image {
                    Image(image)
                        .resizable()
                        .scaledToFit()
                        .frame(width: 25, height: 25)
                        .foregroundColor(.purple)
                }

                Text(title)
                    .font(.system(size: 16, weight: .medium))
                    .foregroundColor(.white)
                    .frame(maxWidth: .infinity, alignment: .leading)

                if let detailText = detailText {
                    Text(detailText)
                        .font(.system(size: 14))
                        .foregroundColor(.white.opacity(0.6))
                }

                Image(systemName: "chevron.right")
                    .font(.system(size: 14))
                    .foregroundColor(.white.opacity(0.4))
            }
            .padding(.horizontal, 20)
            .padding(.vertical, 16)
            
            if !isLast {
                Divider()
                    .background(Color.white.opacity(0.1))
                    .padding(.leading, 20)
            }
        }
    }
}

#Preview {
    SettingsView()
        .environmentObject(UserSessionViewModel())
        .preferredColorScheme(.dark)
}
