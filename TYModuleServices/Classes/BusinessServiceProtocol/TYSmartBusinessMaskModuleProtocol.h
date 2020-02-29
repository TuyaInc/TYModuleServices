//
//  TYSmartBusinessMaskModuleProtocol.h
//  TYSmartBusinessMaskModule
//
//  Created by 盲僧 on 2019/12/20.
//

#import <Foundation/Foundation.h>
@protocol TYSmartBusinessMaskModuleProtocol <NSObject>
/**
    ipc设备蒙层展示，如果用户有 2 个或 2 个以上的 IPC（sp） 设备，升级到新版本后，第一次到首页时，出现引导页面
 */
- (void)showIPCMaskViewWithDevice:(NSArray *)deviceList onView:(UIView *)view;
/**
   ipc设备蒙层隐藏
*/
- (void)hideIPCMaskView;

@end

