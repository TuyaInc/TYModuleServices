//
//  TYSmartSceneBizProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2019/3/7.
//

#import <Foundation/Foundation.h>

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

@end

NS_ASSUME_NONNULL_END
