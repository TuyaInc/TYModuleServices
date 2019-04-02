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

@end

NS_ASSUME_NONNULL_END
