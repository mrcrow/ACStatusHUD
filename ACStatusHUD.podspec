#
# Be sure to run `pod lib lint ACStatusHUD.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ACStatusHUD'
  s.version          = '0.1.0'
  s.summary          = 'ACStatusHUD is an objc version of SPAlert'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
ACStatusHUD is an objc version of SPAlert, used to display status update in the logic flow
                       DESC

  s.homepage         = 'https://github.com/mrcrow/ACStatusHUD'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'mrcrow' => 'wwz.michael@gmail.com' }
  s.source           = { :git => 'https://github.com/mrcrow/ACStatusHUD.git', :tag => s.version.to_s }

  s.ios.deployment_target = '12.0'

  s.source_files = 'ACStatusHUD/Classes/**/*'
  s.frameworks = 'UIKit', 'QuartzCore'
end
