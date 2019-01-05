//
//  TYFeedBackProtocol.h
//  TYModuleServices
//
//  Created by 吴戈 on 2018/7/11.
//

#import <Foundation/Foundation.h>

@protocol TYFeedBackProtocol <NSObject>

@optional

/**
 跳转反馈页面
 
 @param key     反馈字段
 @param need    是否刷新反馈列表页
 **/
- (void)gotoFeedBackViewControllerWithKey:(NSString *)key withoutRefresh:(BOOL)need;

@end
