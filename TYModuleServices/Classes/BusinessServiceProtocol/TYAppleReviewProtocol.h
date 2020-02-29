//
//  TYAppleReviewProtocol.h
//  Pods-TYModuleServices_Example
//
//  Created by TuyaInc on 2018/7/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TYAppleReviewProtocol <NSObject>

// 是否进入审核模式
- (BOOL)inAppleReviewMode;

// 获取审核模式首页
- (UIViewController *)singlePanelViewController;

@end
