//
//  TYPrivacyAndServiceModuleProtocol.h
//  Pods
//
//  Created by lan on 2018/11/15.
//

#import <Foundation/Foundation.h>

@protocol TYPrivacyAndServiceModuleProtocol <NSObject>

- (void)pushPrivacyVC;

- (void)pushServiceVC;

- (void)presentPrivacyAgreementVC:(void(^)(void))agreeCompletion;
@end
