//
//  Header.h
//  Pods
//
//  Created by Goko on 2018/7/6.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^DoneActionBlock)(NSString *changedName);

@protocol TYFamilyProtocol <NSObject>

@optional

/**
 跳转修改名称页面
 
 @param originName             所需修改的名称字段
 @param leftPlaceholderText    名称的描述字段
 @param doneActionBlock        修改完后的回调
 @param titleForCenter         页面标题
 @param titleForRight          完成按钮标题
**/
- (UIViewController *)getUpdateNameViewControllerWithOriginName:(NSString *)originName
                                            leftPlaceholderText:(NSString *)leftPlaceholderText
                                                doneActionBlock:(DoneActionBlock)doneActionBlock
                                             titleForCenterItem:(NSString *)titleForCenter
                                              titleForRightItem:(NSString *)titleForRight;

/**
 跳转地图页面
 
 @param delegate      委托对象
 @param isNeedSave    是否需要保存到云端
 @param homeId        家庭id
 **/
- (UIViewController *)getMapViewControllerWithDelegate:(id)delegate
                                              needSave:(BOOL)isNeedSave
                                                homeId:(long long)homeId;
@end
