# Sonar Music - iOS App

一个使用 SwiftUI 实现的 AI 音乐生成和播放应用，完全复制了 Uni App 工程的功能和设计。

## ✨ 功能特性

### 🎵 核心功能
- **AI 音乐生成**: 通过文字、语音或图片描述生成个性化音乐
- **音乐播放器**: 支持播放控制、进度调节、循环播放等完整功能
- **音乐库管理**: 我的音乐、喜欢的音乐、下载管理
- **搜索功能**: 按风格、心情、描述搜索音乐

### 👤 用户功能
- **多种登录方式**: Apple 登录、Google 登录、邮箱登录
- **用户个人资料**: 头像、昵称、积分管理
- **通知系统**: 音乐生成通知、系统消息
- **设置中心**: 个人资料、音频设置、帮助支持

### 🎨 界面设计
- **深色主题**: 专业的音乐应用视觉风格
- **流畅动画**: 页面切换和交互动画
- **响应式布局**: 支持不同屏幕尺寸
- **直观导航**: TabBar + 中间按钮设计

## 🏗️ 技术架构

### 架构模式
- **MVVM**: Model-View-ViewModel 架构
- **SwiftUI**: 声明式 UI 框架
- **Combine**: 响应式编程
- **依赖注入**: EnvironmentObject 状态管理

### 主要组件
```
SonarMusic/
├── Core/                   # 核心状态管理
│   └── AppState.swift
├── Models/                 # 数据模型
│   └── MusicItem.swift
├── ViewModels/            # 视图模型
│   ├── MusicPlayerViewModel.swift
│   └── UserSessionViewModel.swift
├── Views/                 # 视图层
│   ├── Home/             # 首页相关视图
│   ├── Me/               # 个人中心视图
│   ├── Auth/             # 登录认证视图
│   ├── Music/            # 音乐相关视图
│   ├── Player/           # 播放器视图
│   ├── Search/           # 搜索视图
│   ├── Settings/         # 设置视图
│   ├── Notifications/    # 通知视图
│   └── Components/       # 可复用组件
└── Extensions/           # 扩展
    └── Color+Extensions.swift
```

## 📱 页面结构

### 主要页面
1. **应用背景页** (`AppBackgroundView`) - 未登录时的欢迎页面
2. **主标签页** (`MainTabView`) - 主要的 TabBar 导航
3. **首页** (`HomeView`) - 音乐发现和推荐
4. **个人中心** (`MeView`) - 用户信息和音乐库
5. **音乐生成** (`MusicGenerationView`) - AI 音乐创作界面

### 功能页面
- **登录页面** (`LoginView`) - 多种登录方式
- **邮箱登录** (`EmailLoginView`) - 邮箱密码登录
- **邮箱注册** (`EmailSignupView`) - 账号注册
- **忘记密码** (`ForgotPasswordView`) - 密码重置
- **播放器详情** (`PlayerDetailView`) - 全屏播放界面
- **搜索页面** (`SearchView`) - 音乐搜索功能
- **设置页面** (`SettingsView`) - 应用设置
- **通知页面** (`NotificationsView`) - 消息通知

### 组件库
- **音乐卡片** (`MusicCardView`) - 音乐展示卡片
- **音乐列表** (`MusicListView`) - 音乐列表组件
- **播放器条** (`PlayerBarView`) - 底部播放器

## 🛠️ 开发环境

### 系统要求
- iOS 15.0+
- Xcode 14.0+
- Swift 5.7+

### 依赖库 (CocoaPods)
```ruby
pod 'SnapKit', '~> 5.6.0'           # 布局约束
pod 'lottie-ios', '~> 4.3.0'        # 动画
pod 'Alamofire', '~> 5.8.0'         # 网络请求
pod 'SDWebImage', '~> 5.18.0'       # 图片加载
pod 'SDWebImageSwiftUI', '~> 2.2.0' # SwiftUI 图片加载
pod 'SwiftyJSON', '~> 5.0.0'        # JSON 解析
pod 'KeychainAccess', '~> 4.2.0'    # 钥匙串访问
```

## 🚀 运行项目

### 1. 安装依赖
```bash
cd SonarMusic
pod install
```

### 2. 打开项目
```bash
open SonarMusic.xcworkspace
```

### 3. 运行应用
- 选择目标设备或模拟器
- 按 `Cmd + R` 运行项目

## 📋 功能对照表

| Uni App 功能 | iOS SwiftUI 实现 | 状态 |
|-------------|-----------------|------|
| 启动页面 | AppBackgroundView | ✅ |
| TabBar 导航 | MainTabView | ✅ |
| 首页音乐库 | HomeView | ✅ |
| 个人中心 | MeView | ✅ |
| AI 音乐生成 | MusicGenerationView | ✅ |
| 播放器 | PlayerBarView + PlayerDetailView | ✅ |
| 登录系统 | LoginView + EmailLoginView + EmailSignupView | ✅ |
| 搜索功能 | SearchView | ✅ |
| 设置页面 | SettingsView | ✅ |
| 通知系统 | NotificationsView | ✅ |
| 音乐卡片 | MusicCardView | ✅ |
| 下拉刷新 | Native SwiftUI | ✅ |
| 无限滚动 | LazyVStack + 分页 | ✅ |

## 🎨 设计系统

### 颜色主题
```swift
// 主要颜色
static let appBackground = Color(red: 0.05, green: 0.05, blue: 0.1) // #0D0D1A
static let primaryPurple = Color(red: 0.66, green: 0.33, blue: 0.97) // #A855F7
static let primaryBlue = Color(red: 0.39, green: 0.4, blue: 0.95) // #6366F1

// 文字颜色
static let primaryText = Color.white
static let secondaryText = Color.white.opacity(0.7)
static let tertiaryText = Color.white.opacity(0.5)
```

### 字体规范
- **标题**: System Font, Weight: Bold, Size: 20-28pt
- **正文**: System Font, Weight: Medium, Size: 14-16pt
- **辅助**: System Font, Weight: Regular, Size: 12-14pt

## 🔄 状态管理

### 应用状态 (AppState)
- 当前标签页
- 播放器显示状态
- 网络连接状态

### 用户会话 (UserSessionViewModel)
- 登录状态
- 用户信息
- 认证方法

### 音乐播放器 (MusicPlayerViewModel)
- 当前歌曲
- 播放状态
- 播放列表
- 播放模式

## 📱 适配说明

### 设备支持
- iPhone (所有尺寸)
- iPad (Portrait + Landscape)
- 深色模式优化
- 安全区域适配

### 权限配置
- 麦克风权限 (语音输入)
- Apple Music 权限 (音乐库访问)
- 后台音频播放

## 🔮 未来扩展

### 计划功能
- [ ] 真实的 AI 音乐生成 API 集成
- [ ] 云端音乐库同步
- [ ] 社交分享功能
- [ ] 离线音乐播放
- [ ] 个性化推荐算法
- [ ] 音乐可视化效果

### 技术优化
- [ ] 缓存策略优化
- [ ] 性能监控集成
- [ ] 崩溃报告系统
- [ ] A/B 测试框架

---

## 📄 许可证

此项目仅用于学习和演示目的。

## 👥 贡献

欢迎提交 Issue 和 Pull Request！

---

**注意**: 这是一个演示项目，实际的 AI 音乐生成功能需要连接真实的 AI 服务。当前版本使用模拟数据来展示完整的用户体验流程。
