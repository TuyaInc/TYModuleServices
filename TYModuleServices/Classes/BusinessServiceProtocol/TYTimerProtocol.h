//
//  TYTimerProtocol.h
//  TYTimerModule
//
//  Created by 黄凯 on 2018/7/23.
//

#ifndef TYTimerProtocol_h
#define TYTimerProtocol_h

@protocol TYTimerProtocol <NSObject>

/**
 老版定时入口，Wi-Fi 定时
 需要参数为:
 {
    "gwid" : "xxx",
    "devId" : "xxx",
    "groupId" : "xxx", // 如果是群组就传
    "config" : params
 }
 
 @param parameters 数据参数接口
 */
- (void)goToAlarmListActivity:(NSDictionary *)parameters;


/**
 新版定时入口，dp 定时
 {
    "gwid" : "xxx",
    "devId" : "xxx",
    "isGroup" : yes / no,
    "groupId" : "xxx", // 如果是群组就传
    "config" : params
 }
 
 @param parameters 数据参数接口
 */
- (void)gotoDpAlarm:(NSDictionary *)parameters;

@end

#endif /* TYTimerProtocol_h */
