//
//  TYPanelProtocol.h
//  TYModuleServices
//
//  Created by 高森 on 2018/4/13.
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
- (void)preloadAdd:(NSArray<TuyaSmartDeviceModel *> * _Nullable)devList;

// 面板根文件夹路径
- (NSString *)panelRootDir;

/**
 跳转面板，psuh 的方式

 @param device 设备
 @param group 群组，若有就填
 @param userInfo 用户信息，若有就填
 */
- (void)gotoPanelViewConrollerWithDevice:(TuyaSmartDeviceModel *)device
                                   group:(TuyaSmartGroupModel * _Nullable)group
                                userInfo:(NSDictionary * _Nullable)userInfo;

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
- (NSString * _Nonnull)rnVersionForApp;

NS_ASSUME_NONNULL_END
@end

#endif /* TYPanelProtocol_h */
