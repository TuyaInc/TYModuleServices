//
//  TYCameraProtocol.h
//  Pods
//
//  Created by 高森 on 2018/5/12.
//

#ifndef TYCameraProtocol_h
#define TYCameraProtocol_h

#import <UIKit/UIKit.h>

@protocol TYCameraProtocol <NSObject>

// 面板
- (UIViewController *)viewControllerWithUIName:(NSString *)uiName;

// 门铃
- (void)showCameraCallViewWithDevId:(NSString *)devId type:(NSString *)type;

@end

#endif /* TYCameraProtocol_h */
