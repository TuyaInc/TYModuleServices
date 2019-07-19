//
//  TYSpeechProtocol.h
//  TYModuleServices
//
//  Created by Lucca on 2019/3/30.
//

#import <Foundation/Foundation.h>

@protocol TYSpeechProtocol <NSObject>

/**
 跳转到语音下发命令控制器
 跳转前会校验是否开启麦克风权限以及登录状态
 使用语音需要配置goolekey、讯飞sdk及sdk，目前详情可咨询@卢卡
 */
- (void)showSpeechController;

@end


