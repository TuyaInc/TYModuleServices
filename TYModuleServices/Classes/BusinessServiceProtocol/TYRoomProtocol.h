//
//  TYRoomProtocol.h
//  TYRoomModule
//
//  Created by 吴戈 on 2019/1/21.
//

#import <Foundation/Foundation.h>

typedef void(^AddNewRoomBlock)(NSString *roomName);
@protocol TYRoomProtocol <NSObject>

@optional

/**
 新增添加房间页面
 
 @param isNewAdd               是否是新添加
 @param addNewRoomBlock        添加完后的回调
 **/
- (UIViewController *)getAddRoomViewController:(BOOL)isNewAdd
                               addNewRoomBlock:(AddNewRoomBlock)addNewRoomBlock;

/**
 跳转添加房间页面
 
 @param homeId                 家庭Id
 **/
- (UIViewController *)getAddRoomViewControllerWithHomeId:(long long)homeId;

@end
