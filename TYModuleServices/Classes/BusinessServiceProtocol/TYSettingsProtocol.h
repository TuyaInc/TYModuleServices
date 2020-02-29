//
//  TYSettingsProtocol.h
//  TYModuleServices
//
//  Created by 吴戈 on 2019/1/9.
//

#import <Foundation/Foundation.h>


#if __has_include(<TuyaSmartUtil/TuyaSmartUtil.h>)
#import <TuyaSmartUtil/TuyaSmartUtil.h>
#elif __has_include("TuyaSmartUtil.h")
#import "TuyaSmartUtil.h"
#else
typedef void (^TYSuccessHandler)(void);
typedef void (^TYFailureHandler)(void);
#endif


@protocol TYSettingsProtocol <NSObject>

@optional

/**
 弹出检查版本页面
 **/
- (void)appUpgradeViewCheckVersion;

/**
 * 检查是否用户是否开启声音
 */
- (BOOL)soundEnabled;

- (void)gotoAppStore:(TYSuccessHandler)success failure:(TYFailureHandler)failure;

- (void)gotoAppStore:(NSInteger)appId;

- (void)showCommentDialogIfNeed;

@end

