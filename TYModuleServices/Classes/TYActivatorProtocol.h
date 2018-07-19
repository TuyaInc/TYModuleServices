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

// 配网-选择设备类型
- (void)gotoCategoryViewController;

// 配网-Zigbee配网-选择设备类型
- (void)gotoZigbeeCategoryViewControllerWithGatewayId:(NSString * _Nullable)devId;

@end
#endif /* TYActivatorProtocol_h */
