//
//  TYUserCenterProtocol.h
//  TYUserCenterModule
//
//  Created by huangmengfei on 2018/5/7.
//

#import <Foundation/Foundation.h>

@protocol TYUserCenterProtocol <NSObject>

@optional

- (void)gotoFeedBackViewControllerWithKey:(NSString *)key withoutRefresh:(BOOL)need __deprecated_msg("Use -[TYFeedBackProtocol gotoFeedBackViewControllerWithKey:withoutRefresh:] instead");
    
- (void)gotoUserCenterViewController;

- (void)gesturePasswordWindowStart;

- (void)appUpgradeViewCheckVersion;
    

@end
