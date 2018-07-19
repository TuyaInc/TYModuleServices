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

@protocol TYPanelProtocol <NSObject>
NS_ASSUME_NONNULL_BEGIN

// 面板预加载
- (void)preloadAdd:(NSArray<TuyaSmartDeviceModel *> * _Nullable)devList;

// 面板根文件夹路径
- (NSString *)panelRootDir;

// 面板跳转
- (void)gotoPanelViewConrollerWithDevice:(TuyaSmartDeviceModel *)device
                                   group:(TuyaSmartGroupModel * _Nullable)group
                                userInfo:(NSDictionary * _Nullable)userInfo;

- (void)gotoDeviceInfoViewControllerWithDeviceId:(NSString *)devId isCamera:(BOOL)isCamera;

// 群组管理
- (void)gotoAddGroupViewController:(TuyaSmartGroupModel *)group;

// 二维码
- (void)gotoQRCodeViewController:(void (^)(NSString *urlStr))complete;

// 面板事件下发
- (void)dispatchEventName:(NSString *)name data:(id _Nonnull)data;

// RN版本号
- (NSString * _Nonnull)rnVersionForApp;

NS_ASSUME_NONNULL_END
@end

#endif /* TYPanelProtocol_h */
