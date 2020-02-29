//
//  TYValueAddedServiceProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2019/5/28.
//

#ifndef TYValueAddedServiceProtocol_h
#define TYValueAddedServiceProtocol_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TYValueAddedServiceProtocol <NSObject>

@optional

typedef void (^successBlock)(NSArray *array);

typedef void (^failureBlock)(NSError *error);

// 调用第三方服务接口
- (void)getThirdPartyInfoService:(successBlock)success failure:(failureBlock)failure;

- (void)showAlexaBindingGuidance;
- (void)checkIfNeedShowAlexaGuide;

// 处理拼接 跳转链接的url
- (NSString *)handleThirdPartyUrl:(NSDictionary *)dic;
@end


#endif /* TYValueAddedServiceProtocol_h */
