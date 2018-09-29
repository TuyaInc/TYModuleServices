
Pod::Spec.new do |s|
  s.name             = 'TYModuleServices'
  s.version          = '0.1.6'
  s.summary          = '涂鸦模板组件'
  s.homepage         = 'https://docs.tuya.com/cn/'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '陈立' => 'chenli857823220@163.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYModuleServices.git', :tag => s.version.to_s }
  
  s.source_files = 'TYModuleServices/Classes/**/*'

  s.ios.deployment_target = '8.0'

  s.frameworks = 'UIKit', 'Foundation'

end

