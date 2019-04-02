//
//  TuyaSmartErrorAPMProtocol.h
//  Pods
//
//  Created by Rui on 2019/2/16.
//

#import <Foundation/Foundation.h>

@protocol TuyaSmartAPMErrorProtocol <NSObject>
/**
 Error打点方法 (3.9.0)
 
 @param type 事件id
 @param attributes 事件内容
 */
+ (void)errorLogWithType:(NSString *)type attributes:(NSDictionary *)attributes;

@end
