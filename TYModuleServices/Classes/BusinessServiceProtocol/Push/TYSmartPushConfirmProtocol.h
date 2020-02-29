//
//  TYSmartPushConfirmProtocol.h
//  TYModuleServices
//
//  Created by Pany on 2019/11/7.
//

#import <Foundation/Foundation.h>

#if __has_include(<UserNotifications/UserNotifications.h>)
#import <UserNotifications/UserNotifications.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@protocol TYSmartPushConfirmProtocol <NSObject>

- (void)comfirmRemoteNotificationReceived:(NSDictionary *)userInfo success:(void(^)(BOOL uncomfiredMsgOnRemote))succ failure:(void(^)(NSError *error))fail;

#if __has_include(<UserNotifications/UserNotifications.h>)
- (void)fetchUnconfirmedRemoteNotificationWithReceived:(NSDictionary * _Nullable)userInfo process:(void(^)(UNMutableNotificationContent *content))process success:(void(^)(NSArray<UNNotificationRequest *> *list))success failure:(void(^)(NSError *err))failure API_AVAILABLE(ios(10.0));
#else
- (void)fetchUnconfirmedRemoteNotificationWithReceived:(NSDictionary * _Nullable)userInfo process:(void(^)(id content))process success:(void(^)(NSArray *list))success failure:(void(^)(NSError *err))failure;
#endif

@end

NS_ASSUME_NONNULL_END
