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
 Crash初始化 (3.9.0)
 */
+ (void)install;

/**
 Crash上报 (3.9.0)
 */
+ (void)upload;

/**
 手动添加Crash信息 (3.9.0)
 
 @param exception 内容
 */
+ (void)reportException:(NSException *)exception;

/**
 上一次启动是否发生crash (3.9.0)
 */
+ (BOOL)crashedLastLaunch;

@end

#endif /* TuyaSmartAPMECrashProtocol_h */
