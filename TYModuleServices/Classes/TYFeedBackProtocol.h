//
//  TYFeedBackProtocol.h
//  TYModuleServices
//
//  Created by 吴戈 on 2018/7/11.
//

#import <Foundation/Foundation.h>

@protocol TYFeedBackProtocol <NSObject>

@optional

- (void)gotoFeedBackViewControllerWithKey:(NSString *)key withoutRefresh:(BOOL)need;

@end
