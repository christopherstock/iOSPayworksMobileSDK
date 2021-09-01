# Uncomment the next line to define a global platform for your project
platform :ios, '13.0'

# If a workspace file exists ..
# workspace 'iOSPayworksMobileSDK'

target 'iOSPayworksMobileSDK' do

  source 'https://github.com/CocoaPods/Specs.git'
  source 'https://bitbucket.org/payworks/io.payworks.repo.pods.git'

  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for iOSPayworksMobileSDK
  # pod 'ObjectiveSugar'

  # Payworks MPOS SDK
  pod 'payworks',           '2.47.0'
  pod 'payworks.paybutton', '2.47.0'
  pod 'KeychainAccess',     '~> 4.2.2'

  target 'iOSPayworksMobileSDKTests' do
    inherit! :search_paths
    # Pods for testing
  end

  target 'iOSPayworksMobileSDKUITests' do
    # Pods for testing
  end

end
