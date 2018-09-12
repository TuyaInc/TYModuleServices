//
//  TYMallProtocol.h
//  TYModuleServices
//
//  Created by 高森 on 2018/6/7.
//

#ifndef TYMallProtocol_h
#define TYMallProtocol_h

#import <Foundation/Foundation.h>

@protocol TYMallProtocol <NSObject>

// 是否显示商城的各种入口
- (BOOL)enabled;

@end

#endif /* TYMallProtocol_h */
