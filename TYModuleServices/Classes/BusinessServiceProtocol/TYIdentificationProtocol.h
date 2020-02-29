//
//  TYIdentificationProtocol.h
//  TYModuleServices
//
//  Created by 吴戈 on 2019/1/7.
//


#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    TYGesturePassNew,//新建手势密码
    TYGesturePassVerify,//验证手势密码
    TYGesturePassReset,//重置手势密码
    TYGesturePassClear,//关闭手势密码
    
} TYGesturePassType;

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

//跳转到手势解锁页面
- (void)gotoGesturePasswordVCWithType:(TYGesturePassType)type;

//弹出手势密码页面
- (void)gesturePasswordWindowStart;

- (NSString *)getGesturePasswd;

- (BOOL)enableGesturePasswd;

- (void)gesturePasswdIsEnable:(BOOL)enable;

@end
