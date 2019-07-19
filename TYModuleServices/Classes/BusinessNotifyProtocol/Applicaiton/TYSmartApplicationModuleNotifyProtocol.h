//
//  TYSmartApplicationModuleNotifyProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2019/5/30.
//

#import <UIKit/UIKit.h>

@protocol TYSmartApplicationModuleNotifyProtocol <NSObject>

- (void)ty_rootViewControllerDidReloaded:(UIViewController *)vc;

@end

