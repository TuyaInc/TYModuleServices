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
- (void)executeScenen:(TuyaSmartSceneModel *)model __deprecated_msg("Use [TYSmartSceneBizProtocol executeScene:] insted");

//重置场景数据源中的场景
- (void)resetScenes:(NSArray<TuyaSmartSceneModel *> *)sceneModels;

//新增场景
- (void)addScene:(void(^)(TuyaSmartSceneModel *secneModel, BOOL addSuccess))callback;

//新增自动化场景
- (void)addAutoScene:(void(^)(TuyaSmartSceneModel *secneModel, BOOL addSuccess))callback;

//编辑场景
- (void)editScene:(TuyaSmartSceneModel *)model;

//编辑场景时增加或者编辑一个动作，编辑的话需要传入taskPosition标记所编辑的行在动作列表中的位置,@(-1)表示新增
- (void)addSceneDeviceActionWithDevId:(NSString *)devId taskPosition:(NSNumber *)position actionExcutor:(NSString *)actionExcutor executorProperty:(NSDictionary *)executorProperty extraProperty:(NSDictionary *)extraProperty actionDisplayNew:(NSDictionary *)actionDisplayNew;
@end
