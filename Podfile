# Podfile for Sonar Music iOS App
source 'https://github.com/beautyim/SNNetWorkingPod'
source 'https://cdn.cocoapods.org/'

platform :ios, '15.0'

target 'Soundry' do
  use_frameworks!

  # UI and Layout
  pod 'SnapKit', '~> 5.7.1'
  pod 'lottie-ios', '~> 4.5.2'
  pod 'SVProgressHUD', '~> 2.3.1'
  
  # Networking
  pod 'Alamofire', '~> 5.8.0'
  pod 'SDWebImage', '~> 5.21.1'
  pod 'SDWebImageSwiftUI', '~> 3.1.3'
  
  # Audio frameworks are system provided, no pods needed
  
  # Utilities
  pod 'SwiftyJSON', '~> 5.0.2'
  pod 'KeychainAccess', '~> 4.2.2'
  
  # DI
  pod 'Factory', '~> 2.5.2'
  # ORM
  pod 'SQLite.swift', '~> 0.15.4'


  pod 'APIClient', '~> 0.3.1'

end

post_install do |installer|
  installer.pods_project.targets.each do |target|
    target.build_configurations.each do |config|
      config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '15.0'
    end
  end
end
