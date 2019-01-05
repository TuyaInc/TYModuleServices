//
//  TYModuleMainLoginProtocol.h
//  TYModuleManager
//
//  Created by 房栋 on 2018/5/7.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol TYModuleMainLoginProtocol <NSObject>

/**
 获取注册登录的首页类，启动时若未登录，
 模块化会获取注册登录的首页类，并展示出来。
 */
@optional
- (Class)mainLoginViewController;

@end
