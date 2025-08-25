import SwiftUI
import Factory

import UIKit
import APIClient

struct UserVIPStatus {
    let isVip: Bool
    let vipExp: Date?
    let remainingDays: Int
    let vipType: Int?
}

// MARK: - 响应式布局扩展
extension View {
    func adaptiveSpacing(geometry: GeometryProxy, baseSpacing: CGFloat) -> CGFloat {
        let scale = min(geometry.size.width / 375, geometry.size.height / 812)
        return baseSpacing * scale
    }
    
    func adaptiveHorizontalPadding(geometry: GeometryProxy) -> CGFloat {
        adaptiveSpacing(geometry: geometry, baseSpacing: 20)
    }
    
    func adaptiveFontSize(geometry: GeometryProxy, baseSize: CGFloat) -> CGFloat {
        let scale = min(geometry.size.width / 375, geometry.size.height / 812)
        return baseSize * scale
    }
    
    func adaptiveSize(geometry: GeometryProxy, baseSize: CGFloat) -> CGFloat {
        adaptiveSpacing(geometry: geometry, baseSpacing: baseSize)
    }
    
    func adaptiveCornerRadius(geometry: GeometryProxy, baseRadius: CGFloat) -> CGFloat {
        adaptiveSpacing(geometry: geometry, baseSpacing: baseRadius)
    }
    
    func adaptiveShadowRadius(geometry: GeometryProxy, baseRadius: CGFloat) -> CGFloat {
        adaptiveSpacing(geometry: geometry, baseSpacing: baseRadius)
    }
}

// MARK: - VIP购买页面
struct VipView: View {
    
    @Injected(\.vipApiViewModel) private var vipVM: VIPApiViewModel
    @Injected(\.subscriptionService) private var subscriptionService: SubscriptionService

    
    @State private var selectedPlan: Int = 0
    @State private var vipItems: [VipPackage] = []
    @State private var isLoading: Bool = true
    @State private var hasError: Bool = false
    @State private var showRetentionPopup: Bool = false
    @State private var userVipStatus: UserVIPStatus = UserVIPStatus(
        isVip: false,
        vipExp: nil,
        remainingDays: 0,
        vipType: nil
    )
    @State private var mainTitle: String = "Unlock Your Music Universe"
    
    @Environment(\.dismiss) var dismiss

    // External URLs
    private let userAgreementURL = "https://giant-flyingfish-c30.notion.site/Soundry-User-Agreement-254270f6474f8031b4e7d59223212c2b?pvs=73"
    private let privacyPolicyURL = "https://giant-flyingfish-c30.notion.site/Soundry-Privacy-Policy-254270f6474f80158ef4ed0805af3ff2?pvs=73"

    
    var body: some View {
        GeometryReader { geometry in
        ZStack {
                // 背景视图
                backgroundView(geometry: geometry)
                
                // 主内容布局
                VStack(spacing: 0) {
                    // 顶部内容区 - 返回按钮和标题
            VStack(spacing: 0) {
                        // 返回按钮
                        HStack {
                            Button(action: {
                            if userVipStatus.isVip {
                                dismiss()
                            } else {
                                showRetentionPopup = true
                            }
                        }) {
                            Image(systemName: "chevron.left")
                                .font(.system(size: 20, weight: .medium))
                                .foregroundColor(.white)
                        }
                            Spacer()
                        }
                        .padding(.horizontal, 20)
                        .padding(.top, 50)
                
                Spacer()
                
                        // 皇冠图标和文字
                        HStack(spacing: 8) {
                            Image("crown-icon")
                                    .resizable()
                                    .scaledToFit()
                                    .frame(width: 22, height: 22)
                                
                                Text(mainTitle)
                                    .font(.system(size: 22, weight: .bold))
                                    .foregroundColor(.white)
                        }
                        .padding(.bottom, 10)
                    }
                    .frame(maxHeight: geometry.size.height * 0.4)
                    .padding(.horizontal, adaptiveHorizontalPadding(geometry: geometry))
                    
                    // 强制留白区 - 占屏幕10%，确保卡片从50%位置开始
                    Spacer()
                        .frame(height: geometry.size.height * 0.05)
                    
                    // 下半部分核心内容（从50%位置开始）
                    VStack(spacing: adaptiveSpacing(geometry: geometry, baseSpacing: 20)) {
                        // 套餐卡片区域（占下半部分50%）
                        subscriptionCards(geometry: geometry)
                            .frame(maxHeight: geometry.size.height * 0.5 * 0.5)
                            .padding()
                            .padding(.horizontal, adaptiveHorizontalPadding(geometry: geometry))
                        
                        // 订阅按钮区域（占下半部分30%）
                        VStack(spacing: adaptiveSpacing(geometry: geometry, baseSpacing: 10)) {
                            Button(action: handleSubscribe) {
                                Text("Subscribe Now")
                                    .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 18), weight: .bold))
                                    .foregroundColor(.black)
                            }
                                    .frame(height: adaptiveSize(geometry: geometry, baseSize: 50))
                                    .frame(maxWidth: .infinity)
                                    .background(
                                        LinearGradient(
                                            colors: [Color.yellow, Color.yellow.opacity(0.9)],
                                            startPoint: .top,
                                            endPoint: .bottom
                                        )
                                    )
                                    .cornerRadius(adaptiveCornerRadius(geometry: geometry, baseRadius: 25))
                                    .shadow(color: Color.yellow.opacity(0.3), radius: adaptiveShadowRadius(geometry: geometry, baseRadius: 15), x: 0, y: 6)
                            .disabled(vipItems.isEmpty)
                            .opacity(vipItems.isEmpty ? 0.6 : 1.0)
                            .padding()
                            .padding(.horizontal, adaptiveHorizontalPadding(geometry: geometry))
                        }
                        
                        // 底部按钮区域（占下半部分20%）
                        VStack {
                            HStack(spacing: adaptiveSpacing(geometry: geometry, baseSpacing: 12)) {
                                #if os(iOS)
                                Button("Restore") { handleRestore() }
                                    .foregroundColor(.white.opacity(0.6))
                                    .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 13), weight: .medium))
                                
                                Text("|")
                                    .foregroundColor(.white.opacity(0.3))
                                #endif
                                
                                Button("User Agreement") { openExternalURL(userAgreementURL) }
                                    .foregroundColor(.white.opacity(0.6))
                                    .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 13), weight: .medium))
                                
                                Text("|")
                                    .foregroundColor(.white.opacity(0.3))
                                
                                Button("Privacy Policy") { openExternalURL(privacyPolicyURL) }
                                    .foregroundColor(.white.opacity(0.6))
                                    .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 13), weight: .medium))
                            }
                        }
                        .frame(maxHeight: geometry.size.height * 0.5 * 0.2)
                        .padding(.bottom, geometry.safeAreaInsets.bottom + 10)
                    }
                    .frame(maxHeight: geometry.size.height * 0.5)
                }
            }
        }
        .navigationBarHidden(true)
        .ignoresSafeArea(edges: .top)
        .onAppear {
            Task{
                await fetchPlans()
            }
        }
        .overlay(alignment: .center) {
            if showRetentionPopup {
                ZStack {
                    // 半透明变暗遮罩层，且拦截点击
                    Color.black.opacity(0.45)
                        .ignoresSafeArea()
                        .allowsHitTesting(true)

                    VIPRetentionPopup(onLeave: handleLeave, onStay: handleStay)
                        .transition(.scale.combined(with: .opacity))
                }
            }
        }
    }
    
    // MARK: - 核心布局组件
    private func backgroundView(geometry: GeometryProxy) -> some View {
        ZStack {
            Color.black.ignoresSafeArea()
            
            VStack(spacing: 0) {
                Image("vip-bg")
                .resizable()
                    .aspectRatio(contentMode: .fill)
                    .frame(height: geometry.size.height * 0.5)
                .clipped()
                
                Rectangle()
                    .fill(Color.black)
                    .frame(height: geometry.size.height * 0.5)
            }
            .ignoresSafeArea()
            
            LinearGradient(
                colors: [
                    Color.clear,
                    Color.black.opacity(0.4),
                    Color.black.opacity(0.8),
                    Color.black
                ],
                startPoint: .top,
                endPoint: .bottom
            )
            .ignoresSafeArea()
        }
    }
    
    
    private func subscriptionCards(geometry: GeometryProxy) -> some View {
        VStack(spacing: adaptiveSpacing(geometry: geometry, baseSpacing: 12)) {
//            if vipVM.isLoading {
//                loadingView(geometry: geometry)
//            } else if vipVM.errorMessage != nil {
//                errorView(geometry: geometry)
//            } else {
//                ForEach(Array(vipItems.enumerated()), id: \.offset) { index, plan in
//                    subscriptionCard(plan: plan, index: index, geometry: geometry)
//                }
//            }
        }
        .padding(.vertical, 8)
    }
    
    private func subscriptionCard(plan: VipPackage, index: Int, geometry: GeometryProxy) -> some View {
        Button(action: { selectedPlan = index }) {
            ZStack(alignment: .topTrailing) { // 使用顶部右对齐来放置save标签
                // 卡片背景
                RoundedRectangle(cornerRadius: adaptiveCornerRadius(geometry: geometry, baseRadius: 16))
                    .fill(selectedPlan == index ?
                          LinearGradient(colors: [Color.yellow.opacity(0.15), Color.orange.opacity(0.15)], startPoint: .topLeading, endPoint: .bottomTrailing) :
                          LinearGradient(colors: [Color.white.opacity(0.08), Color.white.opacity(0.03)], startPoint: .topLeading, endPoint: .bottomTrailing)
                    )
                    .overlay(
                        RoundedRectangle(cornerRadius: adaptiveCornerRadius(geometry: geometry, baseRadius: 16))
                            .stroke(selectedPlan == index ?
                                    LinearGradient(colors: [Color.yellow, Color.orange], startPoint: .topLeading, endPoint: .bottomTrailing) :
                                    LinearGradient(colors: [Color.white.opacity(0.1)], startPoint: .topLeading, endPoint: .bottomTrailing),
                                    lineWidth: selectedPlan == index ? 2 : 1
                            )
                    )
                
                // Save标签 - 放置在右上角边框线上
                if let save = plan.save as? String {
                    saveBadge(text: save, geometry: geometry)
                        .offset(x: adaptiveSpacing(geometry: geometry, baseSpacing: 8),
                                y: -adaptiveSpacing(geometry: geometry, baseSpacing: 8))
                }
                
                // 卡片内容
                VStack(alignment: .leading, spacing: 12) {
                    // 第一行：标题和周价格
                    HStack(alignment: .center) {
                        HStack(alignment: .center, spacing: 8) {
                            Text((plan.title as? String) ?? "")
                                .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 18), weight: .bold))
                                .foregroundColor(.white)
                           
                            if (plan.isPopular as? Bool) == true { popularBadge(geometry: geometry) }
                        }
                        Spacer()
                        
                        // 右侧价格区域：
                        // - 年套餐: 上方显示 weekly_price，下方显示 price(年价)
                        // - 周套餐: 仅显示 price（周价），不显示年价
                        Group {
                            let isYearly = ((plan.isYearly as? Bool) == true) || (((plan.period as? String)?.lowercased()) == "yearly")
                            let priceText: String = {
                                if let s = plan.price as? String { return s }
                                if let d = plan.price as? Double { return String(format: "%.2f", d) }
                                if let n = plan.price as? NSNumber { return String(format: "%.2f", n.doubleValue) }
                                return "0"
                            }()
                            let weeklyText: String = {
                                if let s = plan.weeklyPrice as? String { return s }
                                if let d = plan.weeklyPrice as? Double { return String(format: "%.2f", d) }
                                if let n = plan.weeklyPrice as? NSNumber { return String(format: "%.2f", n.doubleValue) }
                                return priceText
                            }()
                            if isYearly {
                                VStack(alignment: .trailing, spacing: 2) {
                                    HStack(alignment: .bottom, spacing: 1) {
                                        Text("$\(weeklyText)")
                                            .font(.system(size: 22, weight: .bold))
                                            .foregroundColor(.white)
                                        Text("/wk")
                                            .font(.system(size: 13))
                                            .foregroundColor(.white.opacity(0.7))
                                    }
                                    HStack(alignment: .bottom, spacing: 1) {
                                        Text("($\(priceText)")
                                            .font(.system(size: 14, weight: .semibold))
                                            .foregroundColor(.white.opacity(0.85))
                                        Text("/yr)")
                                            .font(.system(size: 12))
                                            .foregroundColor(.white.opacity(0.7))
                                    }
                                }
                            } else {
                                Text("$\(priceText)")
                                    .font(.system(size: 22, weight: .bold))
                                    .foregroundColor(.white)
                            }
                        }
                    }
                    
                    // 第二行：积分信息（年价格不再使用 original_price，仅在上方按 period 渲染）
                    HStack(alignment: .center) {
                        Text((plan.creditsDescription as? String) ?? "")
                            .font(.system(size: 15, weight: .semibold))
                            .foregroundColor(.yellow)
                    
                    Spacer()

                    }
                    
                    // 生成描述
                    Text((plan.generateDescription as? String) ?? "")
                        .font(.system(size: 13))
                            .foregroundColor(.white.opacity(0.7))
                        .lineLimit(2)
                }
                .padding(14)
            }
        }
        .buttonStyle(PlainButtonStyle())
        .frame(height: 130)
    }
    
    // MARK: - 辅助视图
    private func saveBadge(text: String, geometry: GeometryProxy) -> some View {
        Text(text)
            .font(.system(size: 11, weight: .bold))
            .foregroundColor(.white)
            .padding(.horizontal, 10)
            .padding(.vertical, 4)
            .background(
                LinearGradient(
                    colors: [Color.purple, Color.blue],
                    startPoint: .topLeading,
                    endPoint: .bottomTrailing
                )
            )
            .cornerRadius(10)
            .shadow(color: .black.opacity(0.3), radius: 3, x: 0, y: 2)
    }
    
    private func popularBadge(geometry: GeometryProxy) -> some View {
        Text("Popular")
            .font(.system(size: 11, weight: .semibold))
                    .foregroundColor(.white)
            .padding(.horizontal, 8)
            .padding(.vertical, 3)
            .background(
                RoundedRectangle(cornerRadius: 6)
                    .fill(Color.white.opacity(0.15))
                    .overlay(RoundedRectangle(cornerRadius: 6).stroke(Color.white.opacity(0.3), lineWidth: 1))
            )
    }
    
    private func loadingView(geometry: GeometryProxy) -> some View {
        VStack(spacing: 16) {
            ProgressView()
                .progressViewStyle(CircularProgressViewStyle(tint: .white))
                .scaleEffect(1.2)
            Text("Loading...")
                .font(.system(size: 16))
                .foregroundColor(.white.opacity(0.7))
        }
        .frame(maxHeight: .infinity)
    }
    
    private func errorView(geometry: GeometryProxy) -> some View {
        VStack(spacing: 16) {
            Text("Failed to load, please try again")
                .font(.system(size: 16))
                .foregroundColor(.white.opacity(0.7))
                .multilineTextAlignment(.center)
            Button("Retry") { Task {await fetchPlans()} }
                .font(.system(size: 14, weight: .semibold))
                .foregroundColor(.black)
                .padding(.horizontal, 20)
                .padding(.vertical, 10)
                .background(Color.yellow)
                .cornerRadius(20)
        }
        .frame(maxHeight: .infinity)
    }
    
    private func emptyView(geometry: GeometryProxy) -> some View {
        Text("No available plans")
            .font(.system(size: 16))
            .foregroundColor(.white.opacity(0.7))
            .frame(maxHeight: .infinity)
    }
    
    // MARK: - 交互方法
    private func handleBack() {
        if !showRetentionPopup && !userVipStatus.isVip {
            showRetentionPopup = true
        } else {
            dismiss()
        }
    }
    
    private func handleSubscribe() {
        guard selectedPlan < vipItems.count else {
            return 
        }
        let plan = vipItems[selectedPlan]
        Task {
            do {
                try await subscriptionService.subscribe(plan: plan)
                await fetchPlans()
                dismiss()
        } catch {
                print("Subscribe failed: \(error)")
            }
        }
    }
    
    private func fetchPlans() async {
//            let userSession = Container.shared.userSessionViewModel()
//        
//        do {
//            await vipVM.getVIPList()
//            
//            guard let data = vipVM.vipList else {
//                return
//            }
//            
//            if let apiMainTitle = (data.mainTitle) {
//                self.mainTitle = apiMainTitle
//            }
//
//            if let status = data.userVipStatus {
//                let isVipFlag = ((status.isVip as? Int) == 1) || ((status.isVip as? Bool) == true)
//
//                // 过期时间，单位秒
//                let expSeconds = (status.vipExp as? Int) ?? 0
//                let expDate: Date? = expSeconds > 0 ? Date(timeIntervalSince1970: TimeInterval(expSeconds)) : nil
//
//                
//                let remainDays = (status.remainingDays as? Int) ?? 0
//
//                let vipType = (status.vipType as? Int)
//
//                userVipStatus = UserVIPStatus(
//                    isVip: isVipFlag,
//                    vipExp: expDate,
//                    remainingDays: remainDays,
//                    vipType: vipType
//                )
//            }
//            self.vipItems = data.vipList ?? []
//
//            
//        } catch {
//
//        }
    }
    

    
    private func handleRestore() {
        Task {
            do {
                try await subscriptionService.restore()
                await fetchPlans()
            } catch {
                print("Restore failed: \(error)")
            }
        }
    }
    //打开指定URL
    private func openExternalURL(_ urlString: String) {
        guard let url = URL(string: urlString) else { return }
        UIApplication.shared.open(url)
    }
    private func handleLeave() { showRetentionPopup = false; dismiss() }
    private func handleStay() { showRetentionPopup = false }
}

// MARK: - VIP挽留弹窗
struct VIPRetentionPopup: View {
    let onLeave: () -> Void
    let onStay: () -> Void
    
    var body: some View {
        ZStack {
            // 背景图片完全覆盖整个弹窗
            Image("vip-popup-bg")
                .resizable()
                .scaledToFill()
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .clipped()
            
            // 渐变遮罩层 - 从图片顶部到底部的渐变，确保文字可读性
            LinearGradient(
                gradient: Gradient(colors: [
                    .clear,
                    .clear,
                    .black.opacity(0.1),
                    .black.opacity(0.3),
                    .black.opacity(0.6),
                    .black.opacity(0.8),
                    .black.opacity(0.95)
                ]),
                startPoint: .top,
                endPoint: .bottom
            )
            
            // 内容层 - 垂直排列的文本和按钮
            VStack(spacing: 0) {
                Spacer()
                
                // 文本内容区域
                VStack(spacing: 16) {
                    // 皇冠和标题
                    HStack(spacing: 8) {
                        Image("crown-icon")
                            .resizable()
                            .scaledToFit()
                            .frame(width: 20,height: 20)
                        Text("Unlock Your Music Universe")
                            .font(.system(size: 20, weight: .bold))
                            .foregroundColor(.white)
                    }
                    
                    // 描述文本
                    VStack{
                        Text("Your musical talent should not be constrained")
                        Text("Get more Credits after opening VIP")
                    }
                        .font(.system(size: 14))
                        .foregroundColor(.white.opacity(0.9))
                        .multilineTextAlignment(.center)
                        .lineSpacing(3)
                        .padding(.horizontal, 30)
                }
                .padding(.bottom, 30)
                
                // 按钮区域
                HStack(spacing: 12) {
                    // Leave 按钮
                    Button("Leave") {
                        onLeave()
                    }
                    .font(.system(size: 15, weight: .medium))
                    .foregroundColor(.white.opacity(0.8))
                    .frame(height: 40) // 减小按钮高度
                            .frame(maxWidth: .infinity)
                    .background(
                        RoundedRectangle(cornerRadius: 20) // 对应调整圆角
                            .stroke(Color.white.opacity(0.3), lineWidth: 1)
                    )
                    .cornerRadius(20)
                    
                    // Stay 按钮
                    Button("Stay") {
                        onStay()
                    }
                    .font(.system(size: 15, weight: .semibold))
                    .foregroundColor(.black)
                    .frame(height: 40) // 减小按钮高度
                    .frame(maxWidth: .infinity)
                    .background(Color.yellow)
                    .cornerRadius(20)
                }
                .padding(.horizontal, 28) // 增加水平内边距，确保按钮在弹窗内
                .frame(maxWidth: 350)//限制最大宽度
                .padding(.bottom, 30)
                .padding(.top, 8)
            }
        }
        .frame(maxWidth: 360, maxHeight: 360)
        .cornerRadius(26)
        .shadow(color: .black.opacity(0.4), radius: 25, x: 0, y: 15)
        .padding(.horizontal, 20)
    }
}

// MARK: - 预览
#Preview {
    VipView()
        .preferredColorScheme(.dark)
}

