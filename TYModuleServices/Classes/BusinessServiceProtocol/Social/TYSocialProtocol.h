//
//  TYSocialProtocol.h
//  TYSocialOverseas
//
//  Created by 陈立 on 2018/11/29.
//

#ifndef TYSocialProtocol_h
#define TYSocialProtocol_h

#import <Foundation/Foundation.h>

@class TYSocialConstants;
@class TPSocialConfig;
@class TYSocialShareModel;
@class TPSocialLoginModel;

typedef enum {
    TYSocialWechat,
    TYSocialWechatMoment,   //微信朋友圈
    TYSocialQQ,
    TYSocialQQSpace,        //qq空间
    TYSocialWeibo,
    TYSocialFacebook,
    TYSocialTwitter,
    TYSocialEmail,
    TYSocialSMS,
    TYSocialMore,
} TYSocialType;

typedef enum {
    TYSocialShareContentText,       //未使用
    TYSocialShareContenttImage,     //单图分享
    TYSocialShareContentH5,         //web分享
    TYSocialShareContentImageUrl,   //单图URL分享
} TYSocialShareContentType;

typedef void (^TPSocialSuccess)(TPSocialLoginModel *model);
typedef void (^TPFailureError)(NSError *error);
typedef void (^TPSuccessHandler)(void);
typedef void (^TPFailureHandler)(void);

@protocol TYSocialProtocol <NSObject>

@optional


// 注册
- (void)registerWithType:(TYSocialType)type appKey:(NSString *)appKey appSecret:(NSString *)appSecret;

// 登录
- (void)loginAction:(TYSocialType)type success:(TPSocialSuccess)success failure:(TPFailureError)failure;

// 分享
- (void)shareTo:(TYSocialType)type shareModel:(TYSocialShareModel *)shareModel success:(TPSuccessHandler)success failure:(TPFailureHandler)failure;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (void)handleOpenURL:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

- (UIViewController *)shareViewControllerWith:(TYSocialShareModel *)shareModel;

// 是否初始化&&已安装
- (BOOL)avaliableForType:(TYSocialType)type;

@end

#endif /* TYSocialProtocol_h */

