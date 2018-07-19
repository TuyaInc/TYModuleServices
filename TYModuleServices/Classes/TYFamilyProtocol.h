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
- (UIViewController *)getUpdateNameViewControllerWithOriginName:(NSString *)originName
                                            leftPlaceholderText:(NSString *)leftPlaceholderText
                                                doneActionBlock:(DoneActionBlock)doneActionBlock
                                             titleForCenterItem:(NSString *)titleForCenter
                                              titleForRightItem:(NSString *)titleForRight;

@end
