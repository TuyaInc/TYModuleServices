//
//  TuyaSmartAPMTrackProtocol.h
//  TYAPMLibrary
//
//  Created by TuyaInc on 2019/3/27.
//

#ifndef TuyaSmartAPMTrackProtocol_h
#define TuyaSmartAPMTrackProtocol_h
#import <Foundation/Foundation.h>

@protocol TuyaSmartAPMTrackProtocol <NSObject>

/* 开始一个（时长类）事件
 
 @params name 事件名称
 @params attributes 事件参数
 @params infos 事件信息
 @params identifier 事件ID（调用 [xxx ty_apm_identifier] 生成）
 
 */
- (void)beginEvent:(NSString *)name attributes:(NSDictionary *)attributes infos:(NSDictionary *)infos forIdentifier:(NSString *)identifier;

/* 发送一个（时长类）事件
 */
- (void)trackEvent:(NSString *)name attributes:(NSDictionary *)attributes infos:(NSDictionary *)infos forIdentifier:(NSString *)identifier;

/* 结束一个（时长类）事件
 */
- (void)endEvent:(NSString *)name attributes:(NSDictionary *)attributes infos:(NSDictionary *)infos forIdentifier:(NSString *)identifier;


@end


#endif /* TuyaSmartAPMTrackProtocol_h */
