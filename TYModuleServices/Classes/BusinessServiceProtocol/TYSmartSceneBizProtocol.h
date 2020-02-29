//
//  TYSmartSceneBizProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2019/3/7.
//

#import <Foundation/Foundation.h>

@class TuyaSmartSceneModel;

NS_ASSUME_NONNULL_BEGIN

@protocol TYSmartSceneBizProtocol <NSObject>

/**
 zh^
 执行场景
 zh$
 en^
 Execute a scene.
 en$

 @param model zh^ 场景对象 zh$ en^ scene model en$
 */
- (void)executeScenen:(TuyaSmartSceneModel *)model;

/**
 zh^
 通过sceneId拿到场景完成数据
 zh$
 en^
 Get scene detail model with sceneId
 en$

 @param sceneId sceneId
 @return scene model
 */
- (TuyaSmartSceneModel *)getSceneModelWithSceneId:(NSString *)sceneId;

/**
 zh^
 根据sceneId获取SceneModel
 异步方法 数据源未更新时，会自动更新数据源中的数据
 zh$
 en^
 Get SceneModel with sceneId
 Asynchronous method When the data source is not updated, the data in the data source is automatically updated
 en$
 
 @param sceneId 场景Id
 */
- (void)modelWithSceneId:(NSString *)sceneId complete:(void(^)(TuyaSmartSceneModel *model))complete;

/**
 zh^
 从内存DataSource中获取所有智能，顺序不确定。
 zh$
 en^
 Get all the scenes from the memory DataSource, the order is uncertain.
 en$
 */
- (NSArray <TuyaSmartSceneModel *>*)getSceneListFromDataSource;

/**
 zh^
 判断智能是否是“一键执行”场景，否则是自动化场景。
 zh$
 en^
 Determine whether smart is a "one-click execution" scenario, otherwise it is an automation scenario.
 en$
 */
- (BOOL)isManualScene:(TuyaSmartSceneModel *)sceneModel;

/**
zh^
获取场景列表，包括自动化和场景
zh$
en^
Get scene list
en$
@param homeId zh^ 家庭id zh$ en^ home id en$
 */
- (void)getSceneListWithHomeId:(long long)homeId withSuccess:(void(^)(NSArray <TuyaSmartSceneModel *> *scenes))success failure:(TYFailureError)failure;

@end

NS_ASSUME_NONNULL_END
