//
//  TYSplashProtocol.h
//  TYModuleServices
//
//  Created by 朱盼 on 2018/12/20.
//

#import <Foundation/Foundation.h>

@protocol TYSplashProtocol <NSObject>

@required
- (BOOL)enableSplash;
- (UIViewController *)splashViewController;

@end
