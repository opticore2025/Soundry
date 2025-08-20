import SwiftUI
import Factory

struct LoginOverlaysView: View {
    @InjectedObject(\.appState) var appState: AppState
    
    var body: some View {
        Group {
            if appState.showingLogin {
                BottomSheetOverlay(
                    isPresented: appState.showingLogin,
                    onDismiss: appState.goBack
                ) {
                    LoginView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
            
            if appState.showingEmailLogin {
                BottomSheetOverlay(
                    isPresented: appState.showingEmailLogin,
                    onDismiss: appState.goBack
                ) {
                    EmailLoginView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
            
            if appState.showingEmailSignup {
                BottomSheetOverlay(
                    isPresented: appState.showingEmailSignup,
                    onDismiss: appState.goBack
                ) {
                    EmailSignupView()
                }
                .ignoresSafeArea()
                .allowsHitTesting(true)
            }
            
            if appState.showingForgotPassword {
                BottomSheetOverlay(
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
