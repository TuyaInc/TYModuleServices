//
//  TuyaSmartEventAPMProtocol.h
//  TYAPMLibrary
//
//  Created by TuyaInc on 2019/2/16.
//

#import <Foundation/Foundation.h>

@protocol TuyaSmartAPMEventProtocol <NSObject>
/**
 Event事件打点方法 (3.9.0)
 
 @param event 事件id
 @param attributes 事件内容
 */
- (void)event:(NSString *)event attributes:(NSDictionary *)attributes;
@end


