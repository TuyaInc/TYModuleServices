//
//  TYModuleLoginNotifyProtocol.h
//  TYModuleServices
//
//  Created by 朱盼 on 2018/9/7.
//

#import <Foundation/Foundation.h>

static NSNotificationName const TYUserDidRegisterSuccessNotification = @"TYUserDidRegisterSuccessNotification";
static NSNotificationName const TYUserDidLoginSuccessNotification = @"TYUserDidLoginSuccessNotification";
static NSNotificationName const TYUserDidAutoLoginSuccessNotification = @"TYUserDidAutoLoginSuccessNotification";
static NSNotificationName const TYUserDidForcedLogOutNotification = @"TYUserDidForcedLogOutNotification";
static NSNotificationName const TYUserDidLogOutNotification = @"TYUserDidLogOutNotification";


@protocol TYModuleLoginNotifyProtocol <NSObject>

@optional

/**
 用户注册成功, 为兼容老逻辑，注册成功后userDidLoginSuccess回调也会走。
 简单说用户注册成功会按顺序回调:
 1. userDidRegisterSuccess
 2. userDidLoginSuccess
 */
- (void)userDidRegisterSuccess __deprecated_msg("Use [[NSNotificationCenter defaultCenter] addObserver:selector:name:TYUserDidRegisterSuccessNotification object:nil] instead");

/**
 用户手动登录成功
 */
- (void)userDidLoginSuccess __deprecated_msg("Use [[NSNotificationCenter defaultCenter] addObserver:selector:name:TYUserDidLoginSuccessNotification object:nil] instead");

/**
 用户自动登录成功(在已登录的状态下启动App)
 */
- (void)userDidAutoLoginSuccess __deprecated_msg("Use [[NSNotificationCenter defaultCenter] addObserver:selector:name:TYUserDidAutoLoginSuccessNotification object:nil] instead");

/**
 用户退出成功
 */
- (void)userDidLogOut __deprecated_msg("Use [[NSNotificationCenter defaultCenter] addObserver:selector:name:TYUserDidLogOutNotification object:nil] instead");

/**
 用户强制退出成功(被踢下线或者session过期了)
 */
- (void)userDidForcedLogOut __deprecated_msg("Use [[NSNotificationCenter defaultCenter] addObserver:selector:name:TYUserDidForcedLogOutNotification object:nil] instead");

@end
