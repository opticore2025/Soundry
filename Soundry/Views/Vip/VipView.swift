import SwiftUI
import Factory
import StoreKit
import PassKit

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
    @Injected(\.applePayApiViewModel) private var applePayVM: ApplePayApiViewModel

    
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
    
    // Apple Pay 相关状态
    @State private var isApplePayProcessing = false
    @State private var showApplePayError = false
    @State private var applePayErrorMessage = ""
    @State private var showApplePaySuccess = false
    @State private var currentOrderTransactionNo: String?
    
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
                                if isApplePayProcessing {
                                    HStack {
                                        ProgressView()
                                            .progressViewStyle(CircularProgressViewStyle(tint: .black))
                                            .scaleEffect(0.8)
                                        Text("Processing...")
                                            .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 16), weight: .medium))
                                            .foregroundColor(.black)
                                    }
                                } else {
                                Text("Subscribe Now")
                                    .font(.system(size: adaptiveFontSize(geometry: geometry, baseSize: 18), weight: .bold))
                                    .foregroundColor(.black)
                                }
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
                            .disabled(isApplePayProcessing || vipItems.isEmpty)
                            .opacity((isApplePayProcessing || vipItems.isEmpty) ? 0.6 : 1.0)
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
        // Apple Pay 成功提示
        .alert("Payment Successful", isPresented: $showApplePaySuccess) {
            Button("OK") {
                showApplePaySuccess = false
            }
        } message: {
            Text("Congratulations! You are now a VIP member and can enjoy all member privileges")
        }
        // Apple Pay 错误提示
        .alert("Payment Failed", isPresented: $showApplePayError) {
            Button("Retry") {
                showApplePayError = false
                handleSubscribe()
            }
            Button("Cancel", role: .cancel) {
                showApplePayError = false
            }
        } message: {
            Text(applePayErrorMessage)
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
    
    
    @MainActor private func subscriptionCards(geometry: GeometryProxy) -> some View {
        VStack(spacing: adaptiveSpacing(geometry: geometry, baseSpacing: 12)) {
            if vipVM.isLoading {
                loadingView(geometry: geometry)
            } else if vipVM.errorMessage != nil {
                errorView(geometry: geometry)
            } else {
                ForEach(Array(vipItems.enumerated()), id: \.offset) { index, plan in
                    subscriptionCard(plan: plan, index: index, geometry: geometry)
                }
            }
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
//        print("🔍 [Apple Pay] 开始订阅流程")
//        print("  - 选中套餐: \(plan.title)")
//        print("  - 套餐ID: \(plan.id)")
//        print("  - SKU: \(plan.sku)")
//        print("  - 价格: $\(plan.price)")

        
        Task {
            await startApplePayFlow(for: plan)
        }
    }
    
    // MARK: - Apple Pay 流程
    
    /// 1. 创建订单并启动 Apple Pay

    
    private func startApplePayFlow(for plan: VipPackage) async {
//        print("🔍 [Apple Pay] 步骤1：开始创建后端订单")

        
        // 设置加载状态
        await MainActor.run {
            isApplePayProcessing = true
            showApplePayError = false
            applePayErrorMessage = ""
        }
        
        // 创建后端订单
        await applePayVM.createOrder(
            goodsId: Int32((plan.id as? Int) ?? 0),
            productType: .vip  // 2 表示 VIP
        )
        
        // 检查订单创建结果
        guard let orderData = await applePayVM.createResult else {
            if let errorMsg = await applePayVM.errorMessage {
            }
            return
        }
        
        
        // 保存订单信息
        await MainActor.run {
            currentOrderTransactionNo = orderData.tranNo as? String
        }
        
        // 启动 StoreKit 支付
        await startStoreKitPayment(plan: plan, orderData: orderData)
    }
    
    /// 2. 启动 StoreKit 支付流程（IAP）

    private func startStoreKitPayment(plan: VipPackage, orderData: PostAppleCreate200ResponseData) async {
//        print("🔍 [IAP] 开始购买商品: \(plan.sku)")

        
        do {
            let products = try await Product.products(for: [ (plan.sku as? String) ?? "" ])
            guard let product = products.first else {
                return
            }
            
            
            let result = try await product.purchase()
            
            switch result {
            case .success(let verificationResult):
                let transaction = try verificationResult.payloadValue
                let transactionId = String(transaction.id)
                
                
                // 获取收据数据
                let receiptBase64 = try await loadAppReceiptBase64()
                
                await applePayVM.handleNotice(
                    environment: nil,
                    transactionId: transactionId,
                    notificationType: nil,
                    notificationUuid: nil
                )
                
                // 完成交易
                await transaction.finish()
                
                // 验证支付
                await verifyPaymentWithBackend(
                    plan: plan,
                    orderData: orderData,
                    transactionId: transactionId,
                    receiptData: receiptBase64
                )
                
//            case .userCancelled:
                
//            case .pending:
                
            @unknown default:
                print("")
            }
            
        } catch {
        }
    }

    private func loadAppReceiptBase64() async throws -> String {
        if let url = Bundle.main.appStoreReceiptURL,
           let data = try? Data(contentsOf: url),
           !data.isEmpty {
            return data.base64EncodedString()
        }
        try await AppStore.sync()
        guard let url2 = Bundle.main.appStoreReceiptURL,
              let data2 = try? Data(contentsOf: url2),
              !data2.isEmpty else {
            throw NSError(domain: "IAP", code: 404, userInfo: [NSLocalizedDescriptionKey: "App receipt not found"])
        }
        return data2.base64EncodedString()
    }
    
    /// 3. 模拟 Apple Pay 支付（测试环境）

    private func simulateApplePayPayment(plan: VipPackage, orderData: PostAppleCreate200ResponseData) async {
//        print("🔍 [Apple Pay] 步骤3：模拟支付流程（测试环境）")

        
        // 模拟支付延迟
        try? await Task.sleep(nanoseconds: 2_000_000_000) // 2秒
        
        // 模拟支付成功（90%概率成功，10%失败用于测试）
        let isPaymentSuccess = Int.random(in: 1...10) <= 9
        
        if isPaymentSuccess {
//            print("🔍 [Apple Pay] 模拟支付成功")
            
            // 模拟交易信息
            let mockTransactionId = "mock_transaction_\(UUID().uuidString.prefix(8))"
            let mockReceiptData = "mock_receipt_data_\(Date().timeIntervalSince1970)"
            
            // 先上报 Apple 交易ID（handle notice）
            await applePayVM.handleNotice(
                environment: nil,               // 可按需传 .sandbox / .production
                transactionId: mockTransactionId,
                notificationType: nil,
                notificationUuid: nil
            )
            
            // 再使用同一个 transactionId 进行支付验证
            await verifyPaymentWithBackend(
                plan: plan,
                orderData: orderData,
                transactionId: mockTransactionId,
                receiptData: mockReceiptData
            )
        } else {
        }
    }
    
    /// 4. 后端验证支付
    private func verifyPaymentWithBackend(
        plan: VipPackage,
        orderData: PostAppleCreate200ResponseData,
        transactionId: String,
        receiptData: String
    ) async {
//        
        guard let tranNo = orderData.tranNo as? String else {

            return
        }
        
        // 调用验证接口
        await applePayVM.verifyPayment(
            tranNo: tranNo,
            productId: (plan.sku as? String) ?? "",
            productType: .vip,
            receiptData: receiptData,
            transactionId: transactionId
        )
        
        // 检查验证结果
        if let verifyResult = await applePayVM.verifyResult {

            await handleApplePaySuccess()
        } else {
//            if let errorMsg = applePayVM.errorMessage {
//            }
            
            // 根据错误类型提供不同的用户提示
            let userMessage: String
            if let errorMsg = await applePayVM.errorMessage {
                if errorMsg.contains("network") || errorMsg.contains("timeout") {
                    userMessage = "Network connection timeout, please check your network and try again"
                } else if errorMsg.contains("invalid") || errorMsg.contains("failed") {
                    userMessage = "Payment verification failed, please contact customer service"
                } else {
                    userMessage = "Payment verification failed:\(errorMsg)"
                }
            } else {
                userMessage = "Payment verification failed, please contact customer service"
            }
            
            await handleApplePayError(userMessage)
        }
    }
    
    /// 5. 处理支付成功
    @MainActor
    private func handleApplePaySuccess() async {
        
        isApplePayProcessing = false
        showApplePaySuccess = true
        
        // 刷新用户VIP状态
        Task {
            await fetchPlans()
        }
        
        // 3秒后自动关闭成功提示
        DispatchQueue.main.asyncAfter(deadline: .now() + 3.0) {
            self.showApplePaySuccess = false
            self.dismiss() // 支付成功后返回
        }
    }
    
    /// 6. 处理支付错误
    @MainActor
    private func handleApplePayError(_ message: String) async {
//        print("🔍 [Apple Pay] 支付流程完成：失败 - \(message)")
        
        isApplePayProcessing = false
        applePayErrorMessage = message
        showApplePayError = true
    }
    
    private func fetchPlans() async {
//        print("🔍 开始获取VIP套餐...")
            
            // 简化版：不依赖userSession，直接从Container获取用户信息
            let userSession = await Container.shared.userSessionViewModel()
            let uidString = await userSession.userInfo?.uid != nil ? String(userSession.userInfo!.uid) : "Not logged in"
            let email = await userSession.userInfo?.email ?? "None"
//            print("🔍 当前用户: \(uidString), email: \(email)")
        
        do {
            await vipVM.getVIPList()
            
            guard let data = await vipVM.vipList else {
//                print("🔍 警告：vipList 为 nil")
                return
            }
            
//            print("🔍 调试：原始套餐数据 = \(data)")

            // 主标题（新字段）
            if let apiMainTitle = (data.mainTitle as? String) {
                self.mainTitle = apiMainTitle
            }

            // 更新用户 VIP 状态，兼容新旧字段
            if let status = data.userVipStatus {
                // isVip 可能为 Int(0/1) 或 Bool
                let isVipFlag = ((status.isVip as? Int) == 1) || ((status.isVip as? Bool) == true)

                // 过期时间，单位秒
                let expSeconds = (status.vipExp as? Int) ?? 0
                let expDate: Date? = expSeconds > 0 ? Date(timeIntervalSince1970: TimeInterval(expSeconds)) : nil

                
                let remainDays = (status.remainingDays as? Int) ?? 0

                let vipType = (status.vipType as? Int)

                userVipStatus = UserVIPStatus(
                    isVip: isVipFlag,
                    vipExp: expDate,
                    remainingDays: remainDays,
                    vipType: vipType
                )
//                print("🔍 用户VIP状态更新：isVip = \(isVipFlag), remainingDays = \(remainDays)")
            }

            // 直接使用后端返回的 VIP 列表
            self.vipItems = data.vipList ?? []

            
        } catch {

        }
    }
    

    
    private func handleRestore() { print("Restore Purchase") }
    private func handleUserAgreement() { print("User Agreement") }
    private func handlePrivacyPolicy() { print("Privacy Policy") }
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

