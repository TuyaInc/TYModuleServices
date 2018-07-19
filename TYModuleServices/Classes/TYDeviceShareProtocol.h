//
//  TYDeviceShareProtocol.h
//  Pods
//
//  Created by huangmengfei on 2018/6/20.
//

#import <Foundation/Foundation.h>

@protocol TYDeviceShareProtocol <NSObject>

@optional

- (void)gotoAddShareUserForHomeIndexShareWithDevIds:(NSArray *)devIds homeId:(long long)homeId;

@end
