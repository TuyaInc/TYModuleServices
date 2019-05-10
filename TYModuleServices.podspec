
Pod::Spec.new do |s|
  s.name             = 'TYModuleServices'

  s.version          = '0.3.0'

  s.summary          = 'Public Services Powered By TuyaInc'
  s.homepage         = 'https://github.com/TuyaInc/TYModuleServices'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.license          = 'None'
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleServices.git', :tag => s.version.to_s }
  
  s.source_files = 'TYModuleServices/Classes/**/*'

  s.ios.deployment_target = '8.0'

  s.frameworks = 'UIKit', 'Foundation'

  s.private_header_files = 'TYModuleServices/Classes/**/Internal/*'

end

