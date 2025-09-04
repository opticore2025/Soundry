import SwiftUI
import Factory

struct LoginOverlaysView: View {
    @InjectedObject(\.appState) var appState: AppState
    
    var body: some View {
        Group {
            // Empty Group as a placeholder since we're using .sheet modifiers now
        }
        .sheet(isPresented: Binding(get: { appState.showingLogin }, set: { _ in })) {
            LoginView()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
        .sheet(isPresented: Binding(get: { appState.showingEmailLogin }, set: { _ in })) {
            EmailLoginView()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
        .sheet(isPresented: Binding(get: { appState.showingEmailSignup }, set: { _ in })) {
            EmailSignupView()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
        .sheet(isPresented: Binding(get: { appState.showCreatUserName }, set: { _ in })) {
            CreatUeserName()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
        .sheet(isPresented: Binding(get: { appState.showingForgotPassword }, set: { _ in })) {
            ForgotPasswordView()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
        .sheet(isPresented: Binding(get: { appState.VerificationCode }, set: { _ in })) {
            VerificationCodeView()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
        .sheet(isPresented: Binding(get: { appState.resetPassword }, set: { _ in })) {
            ResetPasswordView()
                .presentationDetents([.height(600)])
                .presentationDragIndicator(.hidden)
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .background(Color(red: 0.15, green: 0.15, blue: 0.16))
        }
    }
}
