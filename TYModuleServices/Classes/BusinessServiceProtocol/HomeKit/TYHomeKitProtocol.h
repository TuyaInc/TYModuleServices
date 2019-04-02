//
//  TYHomeKitProtocol.h
//  TYHomeKitModule
//
//  Created by Rui on 2019/2/14.
//

#import <Foundation/Foundation.h>

@protocol TYHomeKitProtocol <NSObject>

@required
/**
 开始扫描homekit设备
 */
- (void)homekitDeviceSearchStart;

/**
 停止扫描Homekit设备
 */
- (void)stopSearchHomekitDevice;


/**
 添加一个设备到Homekit中
 
 @param completion 回调
 */
- (void)addAccessoryWithCompletionHandler:(void (^)(NSError * __nullable error))completion;

@end

