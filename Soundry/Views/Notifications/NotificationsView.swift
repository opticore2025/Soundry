import Factory
import SwiftUI
import APIClient

struct NotificationsView: View {
    @Environment(\.dismiss) var dismiss
    @InjectedObject(\.appState) var appState: AppState
    @InjectedObject(\.musicApiViewModel) var musicApiViewModel: MusicApiViewModel
    @State private var notifications: [NotificationItem] = []
    @State private var isLoading: Bool = false
    
    var body: some View {
        NavigationView {
            ZStack {
                // Background
                Color.appBackground
                    .ignoresSafeArea()
                
                VStack(spacing: 0) {
                    // Navigation Bar
                    HStack {
                        Button(action: {
                            appState.currentTab = appState.previousTab
                        }) {
                            Image(systemName: "chevron.left")
                                .font(.system(size: 20, weight: .medium))
                                .foregroundColor(.white)
                        }
                        
                        Spacer()
                        
                        Text("Notifications")
                            .font(.system(size: 18, weight: .semibold))
                            .foregroundColor(.white)
                        
                        Spacer()

                        Button(action: markAllAsRead) {
                            Text("Mark All Read")
                                .font(.system(size: 14))
                                .foregroundColor(.purple)
                        }
                    }
                    .padding(.horizontal, 20)
                    .padding(.top, 12)
                    .frame(height: 44)
                    
                    if isLoading {
                        VStack { Spacer(); ProgressView().tint(.white); Spacer() }
                    } else if notifications.isEmpty {
                        emptyStateView
                    } else {
                        notificationsList
                    }
                }
            }
        }
        .navigationBarHidden(true)
        .task { await loadNotices() }
        .refreshable { await loadNotices() }
    }

    // MARK: - Empty State
    private var emptyStateView: some View {
        VStack(spacing: 20) {
            Spacer()
            
            Image(systemName: "bell.slash")
                .font(.system(size: 60))
                .foregroundColor(.white.opacity(0.3))
            
            VStack(spacing: 8) {
                Text("No Notifications")
                    .font(.system(size: 20, weight: .semibold))
                    .foregroundColor(.white)
                
                Text("You're all caught up!")
                    .font(.system(size: 14))
                    .foregroundColor(.white.opacity(0.6))
            }
            
            Spacer()
    }
}

    // MARK: - Notifications List
    private var notificationsList: some View {
        ScrollView {
            LazyVStack(spacing: 1) {
                ForEach(notifications) { notification in
                    NotificationRowView(
                        notification: notification,
                        onTap: {
                            markAsRead(notification)
                        },
                        onDelete: {
                            deleteNotification(notification)
                        }
                    )
                }
            }
            .padding(.top, 8)
        }
    }
    
    // MARK: - Actions
    private func markAsRead(_ notification: NotificationItem) {
        if let index = notifications.firstIndex(where: { $0.id == notification.id }) {
            notifications[index].isRead = true
        }
    }

    private func markAllAsRead() {
        for index in notifications.indices { notifications[index].isRead = true }
    }

    private func deleteNotification(_ notification: NotificationItem) {
        notifications.removeAll { $0.id == notification.id }
    }

    // MARK: - Data
    private func loadNotices() async {
        isLoading = true
        await musicApiViewModel.getNotice()
        await MainActor.run {
            self.notifications = mapNoticesFromViewModel()
            self.isLoading = false
        }
    }

    private func mapNoticesFromViewModel() -> [NotificationItem] {
        guard let data = musicApiViewModel.noticeList else { return [] }
        let list = data.list ?? []
        var result: [NotificationItem] = []
        for raw in list {
            // 优先使用强类型字段，必要时反射兜底
            let msgType = normalizedInt(value: (raw as AnyObject).value(forKey: "msgType"))
                ?? reflectedInt(in: raw, keys: ["msg_type"]) ?? -1
            let subMsgType = normalizedInt(value: (raw as AnyObject).value(forKey: "subMsgType"))
                ?? reflectedInt(in: raw, keys: ["sub_msg_type"]) ?? -1
            let chatType = normalizedInt(value: (raw as AnyObject).value(forKey: "chatType"))
                ?? reflectedInt(in: raw, keys: ["chat_type"]) ?? -1
            let noticeTime = normalizedInt64(value: (raw as AnyObject).value(forKey: "noticeTime"))
            let mtime = noticeTime != nil ? dateFromMicros(noticeTime!) : (reflectedTimestamp(in: raw, keys: ["mtime"]) ?? Date())

            var title = "Notice"
            var message = ""
            var type: NotificationType = .system

            if msgType == 100 && subMsgType == 10 {
                type = .newFeature
                title = "Welcome"
                message = "Welcome to Soundry! We're glad you're here."
            } else if chatType == 4 {
                type = .system
                title = "System Notice"
                message = "You have a new system notification"
            } else {
                type = .system
                title = "Notification"
                message = "You have a new message"
            }

            result.append(NotificationItem(
                type: type,
                title: title,
                message: message,
                timestamp: mtime,
                isRead: false
            ))
        }
        return result
    }

    // MARK: - Reflection helpers
    private func reflectedProperty(namedLike candidates: [String], in object: Any) -> Any? {
        let mirror = Mirror(reflecting: object)
        for child in mirror.children {
            guard let label = child.label?.lowercased() else { continue }
            if candidates.contains(where: { label.contains($0.lowercased()) }) {
                return child.value
            }
        }
        return nil
    }

    private func toArray(from any: Any) -> [Any] {
        if let arr = any as? [Any] { return arr }
        let mirror = Mirror(reflecting: any)
        guard mirror.displayStyle == .collection else { return [] }
        return mirror.children.map { $0.value }
    }

    private func reflectedString(in object: Any, keys: [String]) -> String? {
        let mirror = Mirror(reflecting: object)
        for child in mirror.children {
            guard let label = child.label?.lowercased() else { continue }
            if keys.contains(where: { label.contains($0.lowercased()) }) {
                if let s = child.value as? String { return s }
                if let opt = child.value as? Optional<Any>, let v = unwrap(opt) as? String { return v }
                if let n = child.value as? CustomStringConvertible { return n.description }
            }
        }
        return nil
    }

    private func reflectedInt(in object: Any, keys: [String]) -> Int? {
        let mirror = Mirror(reflecting: object)
        for child in mirror.children {
            guard let label = child.label?.lowercased() else { continue }
            if keys.contains(where: { label.contains($0.lowercased()) }) {
                if let i = child.value as? Int { return i }
                if let i32 = child.value as? Int32 { return Int(i32) }
                if let d = child.value as? Double { return Int(d) }
                if let s = child.value as? String, let i = Int(s) { return i }
                // KotlinInt(int: Int32)
                let cm = Mirror(reflecting: child.value)
                if let nested = cm.children.first(where: { $0.label?.lowercased() == "int" })?.value {
                    if let i = nested as? Int { return i }
                    if let i32 = nested as? Int32 { return Int(i32) }
                    if let s = nested as? String, let i = Int(s) { return i }
                }
            }
        }
        return nil
    }

    private func reflectedTimestamp(in object: Any, keys: [String]) -> Date? {
        let mirror = Mirror(reflecting: object)
        for child in mirror.children {
            guard let label = child.label?.lowercased() else { continue }
            if keys.contains(where: { label.contains($0.lowercased()) }) {
                // mtime 为微秒
                if label.contains("mtime") {
                    if let i = child.value as? Int { return Date(timeIntervalSince1970: TimeInterval(i) / 1_000_000.0) }
                    if let i32 = child.value as? Int32 { return Date(timeIntervalSince1970: TimeInterval(Int(i32)) / 1_000_000.0) }
                    if let d = child.value as? Double { return Date(timeIntervalSince1970: d / 1_000_000.0) }
                    if let s = child.value as? String, let i = Int(s) { return Date(timeIntervalSince1970: TimeInterval(i) / 1_000_000.0) }
                }
                // 其他时间字段：自动判断秒/毫秒
                if let i = child.value as? Int { return dateFromEpoch(i) }
                if let i32 = child.value as? Int32 { return dateFromEpoch(Int(i32)) }
                if let d = child.value as? Double { return dateFromEpochSeconds(d) }
                if let s = child.value as? String, let i = Int(s) { return dateFromEpoch(i) }
            }
        }
        return nil
    }

    private func dateFromEpoch(_ msOrSec: Int) -> Date {
        // >1e12 近似微秒；>2e9 近似毫秒
        if msOrSec > 1_000_000_000_000 { return Date(timeIntervalSince1970: TimeInterval(msOrSec) / 1_000_000.0) }
        if msOrSec > 2_000_000_000 { return Date(timeIntervalSince1970: TimeInterval(msOrSec) / 1000.0) }
        return Date(timeIntervalSince1970: TimeInterval(msOrSec))
    }

    private func dateFromEpochSeconds(_ sec: Double) -> Date {
        return Date(timeIntervalSince1970: sec)
    }

    private func unwrap(_ any: Optional<Any>) -> Any? {
        let mirror = Mirror(reflecting: any)
        if mirror.displayStyle != .optional { return nil }
        if let child = mirror.children.first { return child.value }
        return nil
    }

    // MARK: - Typed helpers
    private func normalizedInt(value: Any?) -> Int? {
        guard let v = value else { return nil }
        if let i = v as? Int { return i }
        if let i32 = v as? Int32 { return Int(i32) }
        if let s = v as? String { return Int(s) }
        return nil
    }
    private func normalizedInt64(value: Any?) -> Int64? {
        guard let v = value else { return nil }
        if let i = v as? Int64 { return i }
        if let i = v as? Int { return Int64(i) }
        if let s = v as? String, let i = Int64(s) { return i }
        return nil
    }
    private func dateFromMicros(_ us: Int64) -> Date {
        return Date(timeIntervalSince1970: TimeInterval(us) / 1_000_000.0)
    }
}

struct NotificationRowView: View {
    let notification: NotificationItem
    let onTap: () -> Void
    let onDelete: () -> Void
    
    var body: some View {
        Button(action: onTap) {
        HStack(spacing: 16) {
                // Icon
            ZStack {
                Circle()
                    .fill(notification.type.backgroundColor)
                    .frame(width: 40, height: 40)
                
                Image(systemName: notification.type.iconName)
                    .font(.system(size: 18))
                    .foregroundColor(.white)
            }
            
                // Content
            VStack(alignment: .leading, spacing: 4) {
                Text(notification.title)
                    .font(
                        .system(
                            size: 16,
                            weight: notification.isRead ? .medium : .semibold
                        )
                    )
                    .foregroundColor(.white)
                    .lineLimit(2)
                
                Text(notification.message)
                    .font(.system(size: 14))
                    .foregroundColor(.white.opacity(0.7))
                    .lineLimit(3)
                
                Text(notification.timeAgo)
                    .font(.system(size: 12))
                    .foregroundColor(.white.opacity(0.5))
            }
            .frame(maxWidth: .infinity, alignment: .leading)
            
                // Unread indicator
            if !notification.isRead {
                Circle()
                    .fill(Color.purple)
                    .frame(width: 8, height: 8)
            }
        }
        .padding(.horizontal, 20)
        .padding(.vertical, 16)
        .background(
            RoundedRectangle(cornerRadius: 12)
                    .fill(
                        notification.isRead ? Color.clear : Color.white.opacity(0.05)
                    )
            )
        }
        .buttonStyle(PlainButtonStyle())
        .swipeActions(edge: .trailing, allowsFullSwipe: true) {
            Button(role: .destructive, action: onDelete) {
                Label("Delete", systemImage: "trash")
            }
        }
        .padding(.horizontal, 20)
    }
}

// MARK: - Notification Models
struct NotificationItem: Identifiable {
    let id = UUID()
    let type: NotificationType
    let title: String
    let message: String
    let timestamp: Date
    var isRead: Bool = false
    
    var timeAgo: String {
        let formatter = RelativeDateTimeFormatter()
        formatter.unitsStyle = .abbreviated
        return formatter.localizedString(for: timestamp, relativeTo: Date())
    }
}

enum NotificationType {
    case musicGenerated
    case newFeature
    case system
    case like
    
    var iconName: String {
        switch self {
        case .musicGenerated: return "music.note"
        case .newFeature: return "star.fill"
        case .system: return "bell.fill"
        case .like: return "heart.fill"
        }
    }
    
    var backgroundColor: Color {
        switch self {
        case .musicGenerated: return .purple
        case .newFeature: return .blue
        case .system: return .gray
        case .like: return .red
        }
    }
}

#Preview {
    NotificationsView()
        .preferredColorScheme(.dark)
}
