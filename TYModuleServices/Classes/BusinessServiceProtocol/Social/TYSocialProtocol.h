//
//  TYSocialProtocol.h
//  TYSocialOverseas
//
//  Created by TuyaInc on 2018/11/29.
//

#ifndef TYSocialProtocol_h
#define TYSocialProtocol_h

#import <Foundation/Foundation.h>

@class TYSocialConstants;
@class TPSocialConfig;
@class TYSocialShareModel;
@class TPSocialLoginModel;

typedef NS_ENUM(NSUInteger, TYSocialType) {
    TYSocialWechat,
    TYSocialWechatMoment,   //微信朋友圈
    TYSocialQQ,
    TYSocialQQSpace,        //qq空间
    TYSocialWeibo,
    TYSocialFacebook,
    TYSocialTwitter,
    TYSocialEmail,
    TYSocialSMS,
    TYSocialAppleId,
    TYSocialMore,
};

typedef NS_ENUM(NSUInteger, TYSocialShareContentType) {
    TYSocialShareContentText,       //未使用
    TYSocialShareContenttImage,     //单图分享
    TYSocialShareContentH5,         //web分享
    TYSocialShareContentImageUrl,   //单图URL分享
};

typedef void (^TYSocialSuccess)(TPSocialLoginModel *model);
typedef void (^TYFailureError)(NSError *error);
typedef void (^TYSuccessHandler)(void);
typedef void (^TYFailureHandler)(void);


@protocol TYSocialProtocol <NSObject>

@optional


// 注册
- (void)registerWithType:(TYSocialType)type appKey:(NSString *)appKey appSecret:(NSString *)appSecret;

// 登录
- (void)loginAction:(TYSocialType)type success:(TYSocialSuccess)success failure:(TYFailureError)failure;

// 分享
- (void)shareTo:(TYSocialType)type shareModel:(TYSocialShareModel *)shareModel success:(TYSuccessHandler)success failure:(TYFailureHandler)failure;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (UIViewController *)shareViewControllerWith:(TYSocialShareModel *)shareModel;

// 是否初始化&&已安装
- (BOOL)avaliableForType:(TYSocialType)type;

//twitter登录 重定向
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url options:(NSDictionary<NSString *,id> *)options;
// Universal Links
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler;

@end

#endif /* TYSocialProtocol_h */

