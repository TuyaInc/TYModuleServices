//
//  TYSplashProtocol.h
//  TYModuleServices
//
//  Created by 朱盼 on 2018/12/20.
//

#import <Foundation/Foundation.h>

@protocol TYSplashProtocol <NSObject>

@property (nonatomic, strong) void(^finishTask)(void);

- (BOOL)isShowing;

- (BOOL)enableSplash;
- (UIViewController *)splashViewController;

- (void)refreshMarketingSplashSwitch;

@end
