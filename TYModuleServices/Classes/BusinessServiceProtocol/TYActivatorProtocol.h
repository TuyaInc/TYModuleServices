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
 IPC 基站添加子设备
 跳转到 - 添加子设备详情页
 
 @param gatewayId IPC基站Id
 */
- (void)subDevicePrepareViewWithGatewayId:(NSString *)gatewayId subProductId:(NSString *)subProductId;

/**
 设备配网列表页
 
 */
- (UIViewController *)manualActivatorViewController:(NSString *)parentId;

/**
 开启配网弹窗
 
 */
- (void)startScanVCName:(NSString *)vcName completion: (void(^)(void))completion;

/**
配网添加设备引导
 
 */
- (void)showUserGuideInVC:(NSString *)VC completion:(void (^)(void))completion;

/**
 跳转到 - 设备配网页面（包含手动和搜索）
 
 */
- (void)goActivatorRootView;
/**
 跳转到 - 设备配网页面（包含手动和搜索）
 
 @param productId 设备ID
 @param section 手动搜索的索引项
 */
- (void)goActivatorRootView:(NSString *)productId selectSection:(NSInteger)section;

/**
 跳转到 - 子设备搜索配网页面
 
 @param gwId 网关ID
 */
- (void)gotoSearchSubDeviceVC:(NSString *)gwId;

@end
#endif /* TYActivatorProtocol_h */
