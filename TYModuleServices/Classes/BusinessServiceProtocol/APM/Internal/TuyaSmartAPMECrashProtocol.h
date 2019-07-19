//
//  TuyaSmartAPMECrashProtocol.h
//  TYAPMLibrary
//
//  Created by TuyaInc on 2019/2/26.
//

#ifndef TuyaSmartAPMECrashProtocol_h
#define TuyaSmartAPMECrashProtocol_h


@protocol TuyaSmartAPMECrashProtocol <NSObject>

/**
 手动添加Crash信息 (3.9.0)
 
 @param exception 内容
 */
- (void)reportException:(NSException *)exception;


/**
 手动上报ReactNative信息 (3.11.0)
 
 @param exception 内容
 */
- (void)reportReactNativeException:(NSException *)exception;

/**
 手动上报Error信息 (3.11.0)
 
 @param exception 内容
 */
- (void)reportErrorException:(NSException *)exception;


/**
 获取所有的Crash信息 (3.11.0) Debug工具用
 
 @param exception 内容
 */
- (void)getAllCrashData:(void(^)(NSArray *))callback;

@end

#endif /* TuyaSmartAPMECrashProtocol_h */
