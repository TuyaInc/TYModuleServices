//
//  TYModuleLoginNotifyProtocol.h
//  TYModuleServices
//
//  Created by 朱盼 on 2018/9/7.
//

#import <Foundation/Foundation.h>

@protocol TYModuleLoginNotifyProtocol <NSObject>

@optional
- (void)userDidLoginSuccess;
- (void)userDidAutoLoginSuccess;
- (void)userDidLogOut;
- (void)userDidForcedLogOut;

@end
