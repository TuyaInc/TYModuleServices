//
//  TYSettingsProtocol.h
//  TYModuleServices
//
//  Created by 吴戈 on 2019/1/9.
//

#import <Foundation/Foundation.h>

@protocol TYSettingsProtocol <NSObject>

@optional

/**
 弹出检查版本页面
 **/
- (void)appUpgradeViewCheckVersion;


@end

