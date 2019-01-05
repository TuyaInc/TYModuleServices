//
//  TYUserCenterProtocol.h
//  TYUserCenterModule
//
//  Created by huangmengfei on 2018/5/7.
//

#import <Foundation/Foundation.h>

@protocol TYUserCenterProtocol <NSObject>

@optional

/**
 跳转反馈页面 - 已弃用
 
 @param key     反馈字段
 @param need    是否刷新反馈列表页
 **/
- (void)gotoFeedBackViewControllerWithKey:(NSString *)key withoutRefresh:(BOOL)need __deprecated_msg("Use -[TYFeedBackProtocol gotoFeedBackViewControllerWithKey:withoutRefresh:] instead");

/**
 跳转个人中心页面
 **/
- (void)gotoUserCenterViewController;

/**
 弹出手势密码页面
 **/
- (void)gesturePasswordWindowStart;

/**
 弹出检查版本页面
 **/
- (void)appUpgradeViewCheckVersion;
    

@end
