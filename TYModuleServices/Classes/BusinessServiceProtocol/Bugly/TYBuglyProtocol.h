//
//  TYBuglyProtocol.h
//  TYBuglyModule
//
//  Created by 陈立 on 2018/11/15.
//

#ifndef TYBuglyProtocol_h
#define TYBuglyProtocol_h

#import <Foundation/Foundation.h>

@protocol TYBuglyProtocol <NSObject>

@optional


/**
 开启Bugly检测
 **/
- (void)startBuglyMonitor;


/**
 上报Bug
 @param exception Bug信息
 **/
- (void)reportException:(NSException *)exception;

@end



#endif /* TYBuglyProtocol_h */
