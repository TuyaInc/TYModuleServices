//
//  TYUpgradeProtocol.h
//  TYUpgradeModule
//
//  Created by 黄凯 on 2018/8/17.
//

#ifndef TYUpgradeProtocol_h
#define TYUpgradeProtocol_h

@class TuyaSmartDeviceModel;
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
@end


#endif /* TYUpgradeProtocol_h */
