//
//  TYCameraProtocol.h
//  Pods
//
//  Created by TuyaInc on 2018/5/12.
//

#ifndef TYCameraProtocol_h
#define TYCameraProtocol_h

#import <UIKit/UIKit.h>

@class TuyaSmartDeviceModel;

@protocol TYCameraProtocol <NSObject>

/**
 获取摄像头Native面板
 @param devId 摄像头设备的devId
 @param uiName 摄像头设备的uiName，不同的uiName对应不同版本的面板
 */
- (UIViewController *)viewControllerWithDeviceId:(NSString *)devId uiName:(NSString *)uiName;

/**
 收到门铃呼叫通知的时候，弹出呼叫页面
 @param devId 门铃设备的devId
 @param type 通知透传的消息中携带的 type 数据
 */
- (void)showCameraCallViewWithDevId:(NSString *)devId type:(NSString *)type;

@optional

- (void)deviceGotoMultiPlayPanel:(TuyaSmartDeviceModel *)deviceModel;

- (void)deviceGotoCameraNewPlayBackPanel:(TuyaSmartDeviceModel *)deviceModel;

- (void)deviceGotoCameraCloudStoragePanel:(TuyaSmartDeviceModel *)deviceModel;

- (void)deviceGotoCameraMessageCenterPanel:(TuyaSmartDeviceModel *)deviceModel;

- (void)deviceGotoPhotoLibrary:(TuyaSmartDeviceModel *)deviceModel;

- (void)deviceGotoAlarmSettingPanel:(TuyaSmartDeviceModel *)deviceModel;

@end

#endif /* TYCameraProtocol_h */
