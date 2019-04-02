//
//  TYSmartHomeDataProtocol.h
//  TYModuleServices
//
//  Created by Lucca on 2019/2/26.
//

#import <Foundation/Foundation.h>
#import "TYSmartHouseNotification.h"

@class TuyaSmartHome;

@protocol TYSmartHomeDataProtocol <NSObject>

/**
 清除当前家庭并清除缓存
 */
- (void)clearCurrentHome;

/**
 要使用该API获取当前家庭，请务必在更新当前家庭id的时候使用该协议的’updateCurrentHomeId:‘Api。
 获取当前的家庭，当前没有家庭的时候，返回nil。
 
 @return TuyaSmartHome
 */
- (TuyaSmartHome *)getCurrentHome;


/**
 更新当前的家庭id并写到GroupUserDefault缓存中

 @param homeId 家庭id
 */
- (void)updateCurrentHomeId:(long long)homeId;




@end

