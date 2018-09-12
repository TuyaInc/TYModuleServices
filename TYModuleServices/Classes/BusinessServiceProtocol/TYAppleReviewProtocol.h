//
//  TYAppleReviewProtocol.h
//  Pods-TYModuleServices_Example
//
//  Created by 高森 on 2018/7/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TYAppleReviewProtocol <NSObject>

// 是否进入审核模式
- (BOOL)inAppleReviewMode;

// 获取审核模式单设备面板
- (UIViewController *)singlePanelViewController;

@end
