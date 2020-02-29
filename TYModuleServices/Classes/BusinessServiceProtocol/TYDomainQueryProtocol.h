//
//  TYDomainQueryProtocol.h
//  TYModuleServices
//
//  Created by zhukw on 2019/6/19.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@protocol TYDomainQueryModelProtocol <NSObject>

- (NSString *)urlStringWithParams:(NSDictionary *_Nullable)params;

- (NSString *)urlStringWithExtPath:(NSString *_Nullable)extPath params:(NSDictionary *_Nullable)params;

// http/https + appDomain + appPort
- (NSString *)domainString;
@end



@protocol TYDomainQueryProtocol <NSObject>

#pragma mark - tuya.m.app.build.common.get

/**
 tuya.m.app.build.common.get接口数据
 跳转WebView容器，自动显示loading

 @param title webview中的标题
 */
- (void)gotoWebViewWithKey:(NSString *)key
                     title:(NSString *_Nullable)title
                   success:(void(^)(void))success
                   failure:(void(^)(NSError *error))failure;

/**
 tuya.m.app.build.common.get接口数据
 使用key获取对应的URL, 可能会有网络请求，考虑使用loaing组件
 */
- (void)getURLWithKey:(NSString *)key
              success:(void(^)(NSString *_Nullable))success
              failure:(void(^)(NSError *))failure;

#pragma mark - tuya.m.app.domain.query

/**
 tuya.m.app.domain.query接口数据
 跳转WebView容器，自动显示loading
 
 @param extPath 额外的路径
 @param params  url中的传参
 @param title   webview中的标题
 */
- (void)gotoWebViewWithBizCode:(NSString *)bizCode
                           key:(NSString *)key
                       extPath:(NSString *_Nullable)extPath
                        params:(NSDictionary *_Nullable)params
                         title:(NSString *_Nullable)title
                       success:(void(^)(void))success
                       failure:(void(^)(NSError *error))failure;

/**
 tuya.m.app.domain.query接口数据
 使用bizCode和key获取具体的域名模型, 可能会有网络请求，考虑使用loaing组件
 */
- (void)getDomainWithBizCode:(NSString *)bizCode
                         key:(NSString *)key
                     success:(void (^)(id<TYDomainQueryModelProtocol> _Nullable domainModel))success
                     failure:(void(^)(NSError *error))failure;


/**
 tuya.m.app.domain.query接口数据
 使用bizCode获取对应的域名列表, 可能会有网络请求，考虑使用loaing组件
 */
- (void)getDomainListWithBizCode:(NSString *)bizCode
                         success:(void(^)(NSArray <id<TYDomainQueryModelProtocol>>* _Nullable domainList))success
                         failure:(void(^)(NSError *error))failure;

@end
NS_ASSUME_NONNULL_END
