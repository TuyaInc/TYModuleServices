//
//  TYActivatorProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2018/4/13.
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

/**
 跳转到 - 自定义配网设备选择页面
 
 @param NSString customCategoryName 自定义类名
 */
- (void)gotoCustomCategoryViewController:(NSString * _Nullable)customCategoryName;


/**
 设备配网列表页
 
 */
- (UIViewController *)manualActivatorViewController:(NSString *)parentId;

@end
#endif /* TYActivatorProtocol_h */
