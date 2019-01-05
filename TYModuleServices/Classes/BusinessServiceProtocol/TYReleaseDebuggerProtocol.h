//
//  TYReleaseDebuggerProtocol.h
//  TYModuleServices
//
//  Created by lan on 2018/10/16.
//

@protocol TYReleaseDebuggerProtocol <NSObject>

- (void)gotoCheckNetwork;

- (void)gotoNetworkDiagnose:(BOOL)debug;

@end
