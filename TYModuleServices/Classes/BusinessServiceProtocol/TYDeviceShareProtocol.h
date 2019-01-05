//
//  TYDeviceShareProtocol.h
//  Pods
//
//  Created by huangmengfei on 2018/6/20.
//

#import <Foundation/Foundation.h>

@protocol TYDeviceShareProtocol <NSObject>

@optional

/**
 分享设备给用户时，选择好设备，跳转到分享用户的信息填写页面。
 
 @param devIds 要分享的设备的devId
 @param homeId 所在家庭的homeId
 */
- (void)gotoAddShareUserForHomeIndexShareWithDevIds:(NSArray *)devIds homeId:(long long)homeId;

@end
