//
//  TYLogLibraryProtocol.h
//  TYModuleServices
//
//  Created by zhukw on 2019/8/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TYLogLibraryProtocol <NSObject>

/**
 上传日志
 */
- (void)uploadLogFileWithSuccess:(void(^)(NSArray *logsPath))success
                         failure:(void(^)(NSError *error))failure;

/**
 修改控制台输出级别
 Debug = 0
 Info  = 1
 Warn  = 2
 Error = 3
 */
- (void)changeAndSaveConsoleLogLevel:(NSInteger)level;


#pragma mark - Debug

/**
 获取所有日志文件内容
 */
- (NSString *)getAllLogString;

/**
 获取Debug下未加密的log文件路径
 */
- (NSString *)getDebugLogPath;

@end

NS_ASSUME_NONNULL_END
