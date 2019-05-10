//
//  TuyaSmartAPMECrashProtocol.h
//  TYAPMLibrary
//
//  Created by Rui on 2019/2/26.
//

#ifndef TuyaSmartAPMECrashProtocol_h
#define TuyaSmartAPMECrashProtocol_h


@protocol TuyaSmartAPMECrashProtocol <NSObject>

/**
 开启crash监控
 */
+ (void)startCrashMonitor;

/**
 手动添加Crash信息 (3.9.0)
 
 @param exception 内容
 */
+ (void)reportException:(NSException *)exception;


@end

#endif /* TuyaSmartAPMECrashProtocol_h */
