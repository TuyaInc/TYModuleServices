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

- (void)executeScenen:(TuyaSmartSceneModel *)model;

- (void)resetScenes:(NSArray<TuyaSmartSceneModel *> *)sceneModels;

@end
