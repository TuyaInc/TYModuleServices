//
//  TYPushNotificationProtocol.h
//  TYModuleServices
//
//  Created by Pany on 2019/11/7.
//

#import <Foundation/Foundation.h>

#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

// #import "TYModule.h"
// [UNUserNotificationCenter currentNotificationCenter].delegate = TY_ServiceImpl(TYPushNotificationProtocol)

@protocol TYPushNotificationProtocol <NSObject>

- (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)token;
- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)err;

- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(nullable void (^)(UIBackgroundFetchResult))completionHandler API_AVAILABLE(ios(7.0));

- (void)userNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler:(void (^)(UNNotificationPresentationOptions options))completionHandler  API_AVAILABLE(ios(10.0));

@end

NS_ASSUME_NONNULL_END
