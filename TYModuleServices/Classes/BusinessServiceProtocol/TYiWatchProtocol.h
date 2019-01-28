//
//  TYiWatchProtocol.h
//  TYModuleServices
//
//  Created by Misaka on 2018/12/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, TYiWatchShowType) {
    TYiWatchShowTypeDevice = 1,
    TYiWatchShowTypeScene,
};

static NSString * const kNotificationRefreshSmartHouseListForWatch = @"RefreshSmartHouseListForWatch";/* 首页列表刷新通知 */
static NSString * const kNotificationRefreshSmartSceneListForWatch = @"RefreshSmartSceneListForWatch";/* 场景列表刷新通知 */
static NSString * const kNotificationAddSmartSceneForWatch = @"AddSmartSceneForWatch";/* 新增场景通知 */

NS_ASSUME_NONNULL_BEGIN

@protocol TYiWatchProtocol <NSObject>

/**
 当前 iPhone 是否已配对 watch
 */
- (BOOL)isSupportedWatch;

/**
 进入 watch 管理界面
 */
- (void)gotoWatchManagerViewController;

/**
 更新 watch 显示列表

 @param type device: 1  scene: 2
 @param bizId device: 设备 id 或群组 id  scene: 场景 id
 */
- (void)updateShowWatchListWithType:(TYiWatchShowType)type bizId:(NSString *)bizId;

@end

NS_ASSUME_NONNULL_END
