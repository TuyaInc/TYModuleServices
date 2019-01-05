//
//  TYSmartSceneProtocol.h
//  TYSmartSceneModule
//
//  Created by huangmengfei on 2018/5/7.
//

#import <Foundation/Foundation.h>

#define kNotificationSmartSceneListUpdate   @"kNotificationSmartSceneListUpdate"

@class TuyaSmartSceneModel;

@protocol TYSmartSceneProtocol <NSObject>

//执行场景
- (void)executeScenen:(TuyaSmartSceneModel *)model;

//重置场景数据源中的场景
- (void)resetScenes:(NSArray<TuyaSmartSceneModel *> *)sceneModels;

//新增场景
- (void)addScene:(void(^)(TuyaSmartSceneModel *secneModel, BOOL addSuccess))callback;

//新增自动化场景
- (void)addAutoScene:(void(^)(TuyaSmartSceneModel *secneModel, BOOL addSuccess))callback;

//编辑场景
- (void)editScene:(TuyaSmartSceneModel *)model;
@end
