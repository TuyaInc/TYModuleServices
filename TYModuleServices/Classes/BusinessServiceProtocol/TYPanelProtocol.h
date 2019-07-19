//
//  TYPanelProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2018/4/13.
//

#ifndef TYPanelProtocol_h
#define TYPanelProtocol_h

@class TuyaSmartDeviceModel;
@class TuyaSmartGroupModel;

#define kDefaultRNIP                @"kDefaultRNIP"
#define kDefaultRNSwitch            @"kDefaultRNSwitch"

@protocol TYPanelProtocol <NSObject>
NS_ASSUME_NONNULL_BEGIN

/**
 面板预加载

 @param devList 设备列表
 */
- (void)preloadAdd:(NSArray<TuyaSmartDeviceModel *> *_Nullable)devList;

// 面板根文件夹路径
- (NSString *)panelRootDir;

// 清除面板缓存
- (void)cleanPanelCache;

/**
 跳转面板，psuh 的方式（废弃）

 @param device 设备
 @param group 群组，若有就填
 @param userInfo 用户信息，若有就填
 */
- (void)gotoPanelViewConrollerWithDevice:(TuyaSmartDeviceModel *)device
                                   group:(TuyaSmartGroupModel *_Nullable)group
                                userInfo:(NSDictionary *_Nullable)userInfo DEPRECATED_MSG_ATTRIBUTE("use gotoPanelViewControllerWithDevice:group:initialProps:contextProps: instead. contextProps is equal to userInfo.");

/**
 * 跳转面板，push 的方式
 *
 * @param device        设备模型
 * @param group         群组模型
 * @param initialProps  自定义初始化参数，会以 'extraInfo' 为 key 设置进 RN 应用的 initialProps 中
 * @param contextProps  自定义面板上下文，会以 'extraInfo' 为 key 设置进 Panel Context 中
 */
- (void)gotoPanelViewControllerWithDevice:(TuyaSmartDeviceModel *)device
                                    group:(TuyaSmartGroupModel *_Nullable)group
                             initialProps:(NSDictionary *_Nullable)initialProps
                             contextProps:(NSDictionary *_Nullable)contextProps;

/**
 * 跳转面板，push 的方式
 *
 * @param device            设备模型
 * @param group             群组模型
 * @param initialProps      自定义初始化参数，会以 'extraInfo' 为 key 设置进 RN 应用的 initialProps 中
 * @param contextProps      自定义面板上下文，会以 'extraInfo' 为 key 设置进 Panel Context 中
 * @param pushUntilLoaded   是否 RN 加载完成后再 push 页面（启用该功能时必须设置 maxLoadingTime）
 * @param waitAtLeastTime   至少等待时间，即便 RN 加载完成也至少等待这段时间后再进入面板
 * @param maxLoadingTime    最大 RN 加载等待时间，超过改时间无论 RN 是否加载完成，都会进入面板
 */
- (void)gotoPanelViewControllerWithDevice:(TuyaSmartDeviceModel *)device
                                    group:(TuyaSmartGroupModel *_Nullable)group
                             initialProps:(NSDictionary *_Nullable)initialProps
                             contextProps:(NSDictionary *_Nullable)contextProps
                          pushUntilLoaded:(BOOL)pushUntilLoaded
                          waitAtLeastTime:(NSTimeInterval)waitAtLeastTime
                           maxLoadingTime:(NSTimeInterval)maxLoadingTime;

/**
 跳转到设备信息页，目前归属于 detail module，push 方式

 @param devId 设备
 @param isCamera 是否为摄像头
 */
- (void)gotoDeviceInfoViewControllerWithDeviceId:(NSString *)devId isCamera:(BOOL)isCamera;

/**
 群组管理

 @param group 群组 model
 */
- (void)gotoAddGroupViewController:(TuyaSmartGroupModel *)group;

/**
 二维码入口

 @param complete 二维码扫描结果
 */
- (void)gotoQRCodeViewController:(void (^)(NSString *urlStr))complete;

/**
 面板事件下发

 @param name 事件名
 @param data 数据
 */
- (void)dispatchEventName:(NSString *)name data:(id _Nonnull)data;

// RN版本号
- (NSString *_Nonnull)rnVersionForApp;

NS_ASSUME_NONNULL_END
@end

#endif /* TYPanelProtocol_h */
