import SwiftUI
import SafariServices
import UIKit



struct AboutUsView: View {
    @Environment(\.dismiss) var dismiss
    @State private var showingSafari = false
    @State private var targetURL: URL?
    @State private var showingURLError = false
    
    private var appVersion: String {
        return AppConfig.info.version
    }
    
    // 打开指定URL（外部浏览器）
    private func openURL(_ urlString: String) {
        guard let url = URL(string: urlString) else {
            showingURLError = true
            return
        }
        UIApplication.shared.open(url)
    }
    
    var body: some View {
        ZStack {
            Color.black
                .ignoresSafeArea()
            
            VStack {
                // 顶部导航栏
                HStack {
                    Button(action: {
                        dismiss()
                    }) {
                        Image(systemName: "chevron.left")
                            .font(.system(size: 22, weight: .medium))
                            .foregroundColor(.white)
                    }
                    
                    Spacer()
                    
                    Text("About Us")
                        .font(.system(size: 18, weight: .semibold))
                        .foregroundColor(.white)
                    
                    Spacer()
                    
                    Image(systemName: "chevron.left")
                        .font(.system(size: 22))
                        .foregroundColor(.clear)
                }
                .padding(.horizontal, 20)
                .padding(.top, 12)
                .frame(height: 44)
                
                Spacer()
                
                // 主要内容区域
                VStack(spacing: 60) {
                    VStack(spacing: 20) {
                        Image("Logo")
                            .resizable()
                            .scaledToFit()
                            .frame(width: 140, height: 140)
                        
                        Text("Soundry")
                            .font(.largeTitle)
                            .foregroundColor(.white)
                        
                        Text("Version \(appVersion)")
                            .font(.system(size: 16))
                            .foregroundColor(.white.opacity(0.7))
                    }
                    
                    VStack(alignment: .leading, spacing: 16) {
                        Text("Legal & Policies")
                            .font(.system(size: 18, weight: .semibold))
                            .foregroundColor(.white)
                        
                        VStack(spacing: 8) {
                            // 用户协议按钮
                            Button(action: {
                                openURL("https://giant-flyingfish-c30.notion.site/Soundry-User-Agreement-254270f6474f8031b4e7d59223212c2b?pvs=73")
                            }) {
                                HStack {
                                    Image("user-agreement-icon")
                                        .resizable()
                                        .scaledToFit()
                                        .frame(width: 28, height: 28)
                                        .foregroundColor(.white.opacity(0.8))
                                    
                                    Text("User Agreement")
                                        .font(.system(size: 18))
                                        .foregroundColor(.white)
                                    
                                    Spacer()
                                    
                                    Image(systemName: "chevron.right")
                                        .font(.system(size: 20))
                                        .foregroundColor(.white.opacity(0.5))
                                }
                                .padding(.vertical, 16)
                                .padding(.horizontal, 20)
                            }
                            
                            // 隐私政策按钮
                            Button(action: {
                                openURL("https://giant-flyingfish-c30.notion.site/Soundry-Privacy-Policy-254270f6474f80158ef4ed0805af3ff2?pvs=73")
                            }) {
                                HStack {
                                    Image("privacy-policy-icon")
                                        .resizable()
                                        .scaledToFit()
                                        .frame(width: 28, height: 28)
                                        .foregroundColor(.white.opacity(0.8))
                                    
                                    Text("Privacy Policy")
                                        .font(.system(size: 18))
                                        .foregroundColor(.white)
                                    
                                    Spacer()
                                    
                                    Image(systemName: "chevron.right")
                                        .font(.system(size: 20))
                                        .foregroundColor(.white.opacity(0.5))
                                }
                                .padding(.vertical, 16)
                                .padding(.horizontal, 20)
                            }
                        }
                    }
                }
                
                Spacer()
            }
        }
        .navigationBarHidden(true)
        // 不再使用内置Safari视图，统一外部打开
        .alert("Unable to Open Link", isPresented: $showingURLError) {
            Button("OK") {
                showingURLError = false
            }
        } message: {
            Text("The link could not be opened. Please try again later.")
        }
    }
}

#Preview("About Us") {
    AboutUsView()
        .preferredColorScheme(.dark)
}

