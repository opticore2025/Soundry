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
                // 背景色
                Color.appBackground
                    .ignoresSafeArea()

                VStack(spacing: 0) {
                    HStack {
                        Button(action: {
                            appState.currentTab = appState.previousTab
                        }) {
                            Image(systemName: "chevron.left")
                                .font(.system(size: 20, weight: .medium))
                                .foregroundColor(.white)
                        }

                        Spacer()

                        Text("Settings")
                            .font(.system(size: 18, weight: .semibold))
                            .foregroundColor(.white)

                        Spacer()

                        // 平衡左侧按钮的空白占位
                        Image(systemName: "chevron.left")
                            .font(.system(size: 20, weight: .medium))
                            .foregroundColor(.clear)
                    }
                    .padding(.horizontal, 20)
                    .padding(.top, 12)
                    .frame(height: 44)

                    ScrollView {
                        VStack(spacing: 30) {
                            // 仅在已登录状态显示个人资料和账户设置
                            if userSession.isLoggedIn {
                                VStack(spacing: 1) {
                                    SettingsRowView(title: "Profile") {
                                        showProfile = true
                                    }

                                    SettingsRowView(title: "Account") {
                                        showAccount = true
                                    }
                                }
                            }

                            // 始终显示用户协议和隐私政策
                            VStack(spacing: 1) {
                                SettingsRowView(title: "User Agreement") {
                                    openURL(userAgreementURL)
                                }

                                SettingsRowView(title: "Privacy Policy") {
                                    openURL(privacyPolicyURL)
                                }
                            }

                            // 混合区域 - 根据登录状态显示不同内容
                            VStack(spacing: 1) {
                                // 仅在已登录状态显示问题报告
                                if userSession.isLoggedIn {
                                    SettingsRowView(title: "Report an Issue") {
                                        showReport = true
                                    }
                                }

                                // 始终显示关于我们
                                SettingsRowView(
                                    title: "About Us",
                                    detailText: "V\(AppConfig.info.version)"
                                ) {
                                    showingAboutUs = true
                                }

                                // 始终显示清除缓存
                                SettingsRowView(
                                    title: "Clear Cache",
                                    detailText: cacheSize
                                ) {
                                    clearCache()
                                }
                            }

                            // 仅在已登录状态显示退出登录按钮
                            if userSession.isLoggedIn {
                                VStack {
                                    Spacer(minLength: 60)

                                    Button(action: {
                                        showingLogoutAlert = true
                                    }) {
                                        Text("Log Out")
                                            .font(
                                                .system(
                                                    size: 16,
                                                    weight: .medium
                                                )
                                            )
                                            .foregroundColor(.red)
                                            .padding(.horizontal, 30)
                                            .padding(.vertical, 16)
                                            .background(
                                                RoundedRectangle(
                                                    cornerRadius: 12
                                                )
                                                .fill(Color.red.opacity(0.1))
                                            )
                                    }
                                    .padding(.bottom, 40)
                                }
                            }
                        }
                        .padding(.top, 20)
                    }
                }
            }
        }
        .navigationBarHidden(true)
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
        .fullScreenCover(isPresented: $showingAboutUs) {
            AboutUsView()
        }
        .fullScreenCover(isPresented: $showProfile) {
            ProfileView()
        }
        .fullScreenCover(isPresented: $showAccount) {
            AccountView()
        }
        .fullScreenCover(isPresented: $showReport) {
            FeedbackView()
        }
        // 全屏展示带返回按钮的Safari视图
        .fullScreenCover(isPresented: $showingSafari) {
            if let url = targetURL {
                SafariWithBackButtonView(url: url)
            }
        }
    }

    // 计算缓存大小
    private func calculateCacheSize() {
        DispatchQueue.global().async {
            let cacheURLs: [URL?] = [
                FileManager.default.urls(
                    for: .cachesDirectory,
                    in: .userDomainMask
                ).first,
                FileManager.default.urls(
                    for: .documentDirectory,
                    in: .userDomainMask
                ).first,
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
        cacheSize = "Clearing..."

        DispatchQueue.global().async {
            let cacheURLs: [URL?] = [
                FileManager.default.urls(
                    for: .cachesDirectory,
                    in: .userDomainMask
                ).first,
                FileManager.default.urls(
                    for: .documentDirectory,
                    in: .userDomainMask
                ).first,
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

            DispatchQueue.main.async {
                self.cacheSize = "0 KB"
                self.isClearingCache = false
            }
        }
    }
}

struct SettingsRowView: View {
    let title: String
    let image: String?
    let detailText: String?
    let action: () -> Void

    init(
        title: String,
        image: String? = nil,
        detailText: String? = nil,
        action: @escaping () -> Void
    ) {
        self.title = title
        self.image = image
        self.detailText = detailText
        self.action = action
    }

    var body: some View {
        Button(action: action) {
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
            .background(Color.white.opacity(0.05))
        }
        .buttonStyle(PlainButtonStyle())
    }
}

#Preview {
    SettingsView()
        .environmentObject(UserSessionViewModel())
        .preferredColorScheme(.dark)
}
