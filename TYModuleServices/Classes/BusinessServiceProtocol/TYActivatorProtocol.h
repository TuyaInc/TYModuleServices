//
//  TYActivatorProtocol.h
//  TYModuleServices
//
//  Created by 高森 on 2018/4/13.
//

#ifndef TYActivatorProtocol_h
#define TYActivatorProtocol_h

@class TuyaSmartHome;

@protocol TYActivatorProtocol <NSObject>

/**
 跳转到 - 配网选择设备类型页面
 */
- (void)gotoCategoryViewController;

/**
 ZigBee网关详情页添加子设备
 跳转到 - 添加子设备详情页
 
 @param devId Zigbee网关 设备Id
 */
- (void)gotoZigbeeCategoryViewControllerWithGatewayId:(NSString * _Nullable)devId;

@end
#endif /* TYActivatorProtocol_h */
