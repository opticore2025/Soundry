import SwiftUI

extension Color {
    // App Color Scheme
    static let appBackground = Color(red: 0.05, green: 0.05, blue: 0.1) // #0D0D1A
    static let cardBackground = Color(red: 0.15, green: 0.15, blue: 0.16) // #252529
    static let secondaryBackground = Color(red: 0.19, green: 0.19, blue: 0.23) // #31313C
    
    // Accent Colors
    static let primaryPurple = Color(red: 0.66, green: 0.33, blue: 0.97) // #A855F7
    static let primaryBlue = Color(red: 0.39, green: 0.4, blue: 0.95) // #6366F1
    static let accentYellow = Color(red: 0.99, green: 0.84, blue: 0.22) // #FCD34D
    
    // Text Colors
    static let primaryText = Color.white
    static let secondaryText = Color.white.opacity(0.7)
    static let tertiaryText = Color.white.opacity(0.5)
    
    // Status Colors
    static let successGreen = Color(red: 0.13, green: 0.83, blue: 0.31) // #22C55E
    static let warningOrange = Color(red: 1.0, green: 0.59, blue: 0.0) // #FF9500
    static let errorRed = Color(red: 0.94, green: 0.23, blue: 0.19) // #EF4444
    
    // Initialize from hex
    init(hex: String) {
        let hex = hex.trimmingCharacters(in: CharacterSet.alphanumerics.inverted)
        var int: UInt64 = 0
        Scanner(string: hex).scanHexInt64(&int)
        let a, r, g, b: UInt64
        switch hex.count {
        case 3: // RGB (12-bit)
            (a, r, g, b) = (255, (int >> 8) * 17, (int >> 4 & 0xF) * 17, (int & 0xF) * 17)
        case 6: // RGB (24-bit)
            (a, r, g, b) = (255, int >> 16, int >> 8 & 0xFF, int & 0xFF)
        case 8: // ARGB (32-bit)
            (a, r, g, b) = (int >> 24, int >> 16 & 0xFF, int >> 8 & 0xFF, int & 0xFF)
        default:
            (a, r, g, b) = (1, 1, 1, 0)
        }

        self.init(
            .sRGB,
            red: Double(r) / 255,
            green: Double(g) / 255,
            blue:  Double(b) / 255,
            opacity: Double(a) / 255
        )
    }
}
