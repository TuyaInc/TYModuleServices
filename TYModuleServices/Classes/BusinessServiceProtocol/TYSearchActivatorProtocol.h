//
//  TYSearchActivatorProtocol.h
//  TYModuleServices
//
//  Created by huangjj on 2019/4/11.
//

#import <Foundation/Foundation.h>


@protocol TYSearchActivatorProtocol <NSObject>

/**
 跳转到 - 设备配网页面（包含手动和搜索）
 
 */
- (void)goActivatorRootView;

/**
 跳转到 - 设备配网页面（包含手动和搜索）
 
 @param productId 设备ID
 @param section 手动搜索的索引项
 */
- (void)goActivatorRootView:(NSString *)productId selectSection:(NSInteger)section;

@end
