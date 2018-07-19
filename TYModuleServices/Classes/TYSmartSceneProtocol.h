//
//  TYSmartSceneProtocol.h
//  TYSmartSceneModule
//
//  Created by huangmengfei on 2018/5/7.
//

#import <Foundation/Foundation.h>

@class TuyaSmartSceneModel;

@protocol TYSmartSceneProtocol <NSObject>

- (void)executeScenen:(TuyaSmartSceneModel *)model;

- (void)gotoSelectFeatureForHomeIndexSceneWithEntityId:(NSString *)entityId isCondition:(BOOL)isCondition expr:(id)expr executorProperty:(NSDictionary *)executorProperty;

- (void)gotoSelectSceneForHomeIndexSceneWithSceneIds:(NSArray *)ids;

- (void)gotoSelectAutoForHomeIndexSceneWithSceneIds:(NSArray *)ids;

- (void)resetScenes:(NSArray<TuyaSmartSceneModel *> *)sceneModels;
@end
