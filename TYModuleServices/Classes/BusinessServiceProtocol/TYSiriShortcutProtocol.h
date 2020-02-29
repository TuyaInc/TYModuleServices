//
//  TYSiriShortcutProtocol.h
//  TYModuleServices
//
//  Created by TuyaInc on 2019/5/8.
//

#import <Foundation/Foundation.h>

#define TYSceneShortcutDidUpdateData @"TYSceneShortcutDidUpdateData" //场景捷径更新通知

@class TuyaSmartSceneModel;

@protocol TYSiriShortcutProtocol <NSObject>

/**
 zh^
 Siri捷径是否可用，判断iOS版本和涂鸦公版Siri extension是否存在，
 zh$
 en^
 Retuen YES if Siri shortcut is available, according to iOS version  and tuya Siri extension is or not exist.
 en$
 
 @return zh^ YES表示捷径可用 zh$ en^ YES represent available en$
 */
- (BOOL)shortcutAvailable;

/**
 zh^
 添加到Siri 默认按钮
 zh$
 en^
 Add to Siri button.
 en$

 @return default add to siri button.
 */
- (UIButton *)getDefaultAddToSiriButton;

/**
 zh^
 处理指定场景的Siri捷径。
 zh$
 en^
 handle the specified scene's Siri shortcut.
 en$
 
 @param scene zh^ 场景对象 zh$ en^ scene object en$
 @param controller zh^ 添加/编辑捷径UI的容器 zh$ en^ add/edit a shortcut need a contaioner controller en$
 */
- (void)handleSiriShortcutWithScene:(TuyaSmartSceneModel *)scene cantainerController:(UIViewController *)controller;

/**
 zh^
 获取场景的Siri短语，没有添加的返回nil。
 zh$
 en^
 get the phrase of Siri shortcut with sprcified scene, scene that not added Siri shortcut will return nil by default.
 en$
 
 @return zh^ Siri短语 zh$ en^ Siri shortcut phrase en$
 */
- (NSString *)getSiriPhraseWithSceneId:(NSString *)sceneId;

@end

