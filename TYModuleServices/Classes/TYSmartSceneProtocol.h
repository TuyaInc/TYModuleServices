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


/**
 DP 选择页面

 @param params 参看 impl 对应的参数赋值
 @return 
 */
- (UIViewController *)selectDPViewController:(NSDictionary *)params;


@end
