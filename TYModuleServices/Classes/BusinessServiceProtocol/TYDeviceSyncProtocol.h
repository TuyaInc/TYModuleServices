//
//  TYDeviceSyncProtocol.h
//  TYDeviceSyncModule
//
//  Created by Misaka on 2018/11/9.
//  Copyright © 2018 misakatao. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TYDeviceSyncProtocol <NSObject>

/**
 跳转到关联设备中心

 @param devId 主设备的 devId
 */
- (void)gotoDeviceSyncListViewControllerWithDevId:(NSString *)devId;

/**
 跳转到多控关联设备中心

 @param devId 设备的 devId
 */
- (void)gotoDeviceBindViewControllerWithDevId:(NSString *)devId;

@end

NS_ASSUME_NONNULL_END
