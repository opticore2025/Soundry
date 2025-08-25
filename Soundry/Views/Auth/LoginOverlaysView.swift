import SwiftUI
import Factory

struct LoginOverlaysView: View {
    @InjectedObject(\.appState) var appState: AppState
    
    var body: some View {
        Group {
            if appState.showingLogin {
                BottomSheet(
                    isPresented: appState.showingLogin,
                    onDismiss: appState.goBack
                ) {
                    LoginView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
            
            if appState.showingEmailLogin {
                BottomSheet(
                    isPresented: appState.showingEmailLogin,
                    onDismiss: appState.goBack
                ) {
                    EmailLoginView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
            
            if appState.showingEmailSignup {
                BottomSheet(
                    isPresented: appState.showingEmailSignup,
                    onDismiss: appState.goBack
                ) {
                    EmailSignupView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
            
            if appState.showingForgotPassword {
                BottomSheet(
                    isPresented: appState.showingForgotPassword,
                    onDismiss: appState.goBack
                ) {
                    ForgotPasswordView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
        }
    }
}
