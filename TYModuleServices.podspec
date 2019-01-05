
Pod::Spec.new do |s|
  s.name             = 'TYModuleServices'
  s.version          = '0.1.7'
  s.summary          = '涂鸦模块服务'
  s.homepage         = 'https://docs.tuya.com/cn/'
  s.author           = { 'TuyaInc' => 'https://www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleServices.git', :tag => s.version.to_s }
  
  s.source_files = 'TYModuleServices/Classes/**/*'

  s.ios.deployment_target = '8.0'

  s.frameworks = 'UIKit', 'Foundation'

end

