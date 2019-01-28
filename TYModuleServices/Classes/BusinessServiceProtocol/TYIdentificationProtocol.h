//
//  TYIdentificationProtocol.h
//  TYModuleServices
//
//  Created by 吴戈 on 2019/1/7.
//


#import <Foundation/Foundation.h>

typedef void(^UnlockTaskBlock)(void);

@protocol TYIdentificationProtocol <NSObject>

@optional

//手势锁屏解锁后的回调
- (void)unlockTask:(UnlockTaskBlock)block;

//是否需要显示手势解锁
- (BOOL)enableGesture;

//返回手势解锁页
- (UIViewController *)gestureViewController;

//返回手势解锁情况
- (BOOL)isScreenUnlock;

@end
