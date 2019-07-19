//
//  TYHomeKitProtocol.h
//  TYHomeKitModule
//
//  Created by TuyaInc on 2019/2/14.
//

#import <Foundation/Foundation.h>
#import "TYHomekitDevice.h"

@class TuyaSmartDeviceModel;
@protocol TYHomeKitProtocol <NSObject>

@required

/**
 开始扫描homekit设备
 */
- (void)startSearchHomekitDevice:(void (^)(TYHomekitDevice * device))device;

/**
 停止扫描Homekit设备
 */
- (void)stopSearchHomekitDevice;

/**
 开始配网
 
 @param device 设备
 @param homeId 家庭id
 @param success 成功回调
 @param failure 失败回调
 */
- (void)configTuyaSmartHomeKitDevice:(TYHomekitDevice *)device timeout:(NSTimeInterval)timeout homeId:(long long)homeId success:(void (^)(TuyaSmartDeviceModel *))success failure:(void (^)(NSError *error))failure;

/**
 添加一个设备到Homekit中
 
 @param completion 回调
 */
- (void)addAccessoryWithCompletionHandler:(void (^)(NSError * __nullable error))completion;

/**
 移除显示的homekit设备
 */
- (void)clearDisplayHomekitDevices;
@end

