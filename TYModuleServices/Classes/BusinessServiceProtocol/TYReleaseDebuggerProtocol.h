//
//  TYReleaseDebuggerProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2018/10/16.
//

@protocol TYReleaseDebuggerProtocol <NSObject>

- (void)gotoCheckNetwork;

- (void)gotoNetworkDiagnose:(BOOL)debug;

- (BOOL)needShowLaunchDebugAlert;

- (UIViewController *)debugAlertVC;

- (void)agreeTask:(void(^)(void))task;

- (BOOL)isShowingDebugAlertVC;

@end
