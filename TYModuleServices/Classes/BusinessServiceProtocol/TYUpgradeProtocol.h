//
//  TYUpgradeProtocol.h
//  TYUpgradeModule
//
//  Created by 黄凯 on 2018/8/17.
//

#ifndef TYUpgradeProtocol_h
#define TYUpgradeProtocol_h

@class TuyaSmartDeviceModel;
@class TuyaSmartCamera;

@protocol TYUpgradeProtocol <NSObject>

/**
 检查设备固件更新，如果有更新会显示展示出固件更新提示
 
 @param device 需要检查固件升级的设备
 @param isManual 是否手动检测升级
                 YES: 手动检测升级，检测时弹出loading框。当有固件新版本时(检测升级、强制升级、提醒升级)，弹出固件更新提示。
                 NO: 自动检测升级, 检测时不弹出loading框。当有强制升级时、提醒升级时，弹出固件升级提示。
 */
- (void)checkFirmwareUpgrade:(TuyaSmartDeviceModel *)device isManual:(BOOL)isManual;

/*
 Panel销毁前应同时调用此方法。
 因为在模块化设计时Impl是个全局保存的对象，
 如果不销毁，当MQTT收到设备升级进度时，会在Panel以外的地方展示升级进度。
 */
- (void)destoryUpgrade;

#pragma mark - 摄像头固件升级

/**
 摄像头自动检测固件升级，用于进入摄像头面板的检测
 
 @param camera TuyaSmartCamera实例
 @param isBlack 是否是黑色面板
 @param success 成功回调
 @param failure 失败回调
 */
- (void)cameraFirmwareCheckAuto:(TuyaSmartCamera *)camera isBlack:(BOOL)isBlack success:(void(^)(void))success failure:(void(^)(NSError *))failure;;

/**
 展示摄像头固件升级VC，用于在设置中展示，进入固件升级VC前会调用固件信息接口
 
 @param camera TuyaSmartCamera实例
 @param success 成功回调
 @param failure 失败回调
 */
- (void)showCameraUpgradeVC:(TuyaSmartCamera *)camera isBlack:(BOOL)isBlack success:(void (^)(void))success failure:(void (^)(NSError *error))failure;

@end


#endif /* TYUpgradeProtocol_h */
