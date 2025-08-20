import SwiftUI
import SafariServices

// SFSafariViewController的SwiftUI包装器
struct SafariView: UIViewControllerRepresentable {
    let url: URL
    
    func makeUIViewController(context: Context) -> SFSafariViewController {
        let configuration = SFSafariViewController.Configuration()
        configuration.barCollapsingEnabled = false // 禁止导航栏折叠
        let safariVC = SFSafariViewController(url: url, configuration: configuration)
        safariVC.preferredControlTintColor = .white // 控制按钮颜色
        safariVC.preferredBarTintColor = .black // 导航栏背景色
        return safariVC
    }
    
    func updateUIViewController(_ uiViewController: SFSafariViewController, context: Context) {}
}

// 自定义带返回按钮的Safari视图容器
struct SafariWithBackButtonView: View {
    let url: URL
    @Environment(\.dismiss) var dismiss
    
    var body: some View {
        NavigationView {
            SafariView(url: url)
                .navigationBarTitleDisplayMode(.inline)
                .navigationTitle("")
                .toolbar {
                    ToolbarItem(placement: .navigationBarLeading) {
                        Button(action: {
                            dismiss()
                        }) {
                            HStack(spacing: 8) {
                                Image(systemName: "chevron.left")
                                Text("Soundry")
                            }
                            .foregroundColor(.white)
                            .font(.system(size: 16, weight: .medium))
                        }
                    }
                }
        }
        .navigationViewStyle(.stack)
        .background(Color.black.ignoresSafeArea())
    }
}
