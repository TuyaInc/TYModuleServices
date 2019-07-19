//
//  TYVoiceProtocol.h
//  TYVoiceProtocol
//
//  Created by TuyaInc on 2018/11/22.
//

#ifndef TYVoiceProtocol_h
#define TYVoiceProtocol_h

#import <Foundation/Foundation.h>


@protocol TYVoiceServiceDelegate <NSObject>

- (void)onHandleResults:(NSString *)text;
- (void)onExecuteSuccessResults:(NSString *)text;
- (void)onExecuteFailureResults:(NSString *)text;

@end


@protocol TYVoiceProtocol <NSObject>

@property (nonatomic, weak) id<TYVoiceServiceDelegate> voiceServiceDelegate;
@property (nonatomic, assign) NSInteger volume;

/**
 *  初始化
 *  @param iflyAppKey : 讯飞AppKey
 *  @param ggAppKey   : 谷歌AppKey
 *  @param isChinese  : 是否中文语言
 */
- (void)initial:(NSString *)iflyAppKey ggAppKey:(NSString *)ggAppKey isChinese:(BOOL)isChinese;

/**
 *  判断是否可用语言功能
 *  @param iflyAppKey : 讯飞AppKey
 *  @param ggAppKey   : 谷歌AppKey
 */
- (BOOL)enabled:(NSString *)iflyAppKey ggAppKey:(NSString *)ggAppKey;

/**
 *  开始监听
 */
- (void)startListening;

/**
 *  结束录音，不做识别
 */
- (void)stopListening;

/**
 *  结束录音并开始识别
 */
- (void)finishSpeaking;

@optional

@end



#endif /* TYVoiceProtocol_h */
