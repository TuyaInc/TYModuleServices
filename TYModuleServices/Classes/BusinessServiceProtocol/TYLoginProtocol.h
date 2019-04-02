//
//  TYLoginProtocol.h
//  TYLoginModule
//
//  Created by huangmengfei on 2018/4/27.
//

#import <Foundation/Foundation.h>

@protocol TYLoginProtocol <NSObject>

/**
 登出用户账户。如果账号已登录，调用退出登录接口，并返回登录页；
 如果账号未登录，直接返回登录页。
 */
- (void)signOut;

/**
 账号未登录情况下，返回登录页。
 */
- (void)resetLoginViewController;

/**
 跳转绑定/修改手机号页面
 */
- (void)gotoMobileBindingViewController:(void(^)(void))bindingSuccess title:(NSString *)title;

/**
 跳转切区页面
 */
- (void)gotoSwitchRegionViewController;

/**
 获取当前用户的地区国际化字符串
 */
- (void)localizedRegionOfCurrentUser:(void(^)(NSString *region))success failure:(void(^)(NSError *))failure;
@end
