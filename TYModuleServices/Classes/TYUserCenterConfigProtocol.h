//
//  TYUserCenterConfigProtocol.h
//  Pods
//
//  Created by 吴戈 on 2018/7/20.
//

#import <Foundation/Foundation.h>

@protocol TYUserCenterConfigProtocol <NSObject>

@optional

/**
「 个人中心 」
 是否显示绑定手机号
 **/
- (BOOL)showBindAccount;

/**
「 个人中心 」
 是否显示所在地
 **/
- (BOOL)showAccountLocation;

/**
「 个人中心 」
 是否显示温度单位
 **/
- (BOOL)showTemperature;

/**
「 个人中心 」
 是否显示时区
 **/
- (BOOL)showTimeZone;

/**
「 个人中心 」
 是否显示修改密码
 **/
- (BOOL)showChangePassword;

/**
「 个人中心 」
 是否显示手势
 **/
- (BOOL)showGesutres;

/**
「 个人中心 」
 是否显示停用账号
 **/
- (BOOL)showTerminateAccount;

/**
「 设置 」
 是否显示第三方接入
 **/
- (BOOL)showThirdParty;

/**
「 关于 」
 是否显示鼓励我们
 **/
- (BOOL)showRateUs;

/**
「 关于 」
 是否显示关于厂商
 **/
- (BOOL)showAboutFirm;

/**
「 关于 」
 是否显示隐私政策
 **/
- (BOOL)showPrivacyPolicy;

/**
「 关于 」
 是否显示开源组件许可
 **/
- (BOOL)showLicense;

/**
 「 关于 」
 是否显示版本号
 **/
- (BOOL)showVersion;

@end

