//
//  TYModuleLoginNotifyProtocol.h
//  TYModuleServices
//
//  Created by 朱盼 on 2018/9/7.
//

#import <Foundation/Foundation.h>

@protocol TYModuleLoginNotifyProtocol <NSObject>

@optional

/**
 用户注册成功, 为兼容老逻辑，注册成功后userDidLoginSuccess回调也会走。
 简单说用户注册成功会按顺序回调:
 1. userDidRegisterSuccess
 2. userDidLoginSuccess
 */
- (void)userDidRegisterSuccess;

/**
 用户手动登录成功
 */
- (void)userDidLoginSuccess;

/**
 用户自动登录成功(在已登录的状态下启动App)
 */
- (void)userDidAutoLoginSuccess;

/**
 用户退出成功
 */
- (void)userDidLogOut;

/**
 用户强制退出成功(被踢下线或者session过期了)
 */
- (void)userDidForcedLogOut;

@end
