//
//  TYMallProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2018/6/7.
//

#ifndef TYMallProtocol_h
#define TYMallProtocol_h

#import <Foundation/Foundation.h>

@protocol TYMallProtocol <NSObject>

// 是否显示商城的各种入口
- (BOOL)enabled;

// 获取商城订单链接
- (void)getMallOrderWithCompletion:(void(^)(BOOL hasOrder))completion;

@end

#endif /* TYMallProtocol_h */
