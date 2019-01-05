//
//  TYDeviceDetailProtocol.h
//  TYDeviceDetailModule
//
//  Created by 黄凯 on 2018/9/5.
//

#ifndef TYDeviceDetailProtocol_h
#define TYDeviceDetailProtocol_h

@class TuyaSmartDeviceModel;
@class TuyaSmartGroupModel;
@protocol TYDeviceDetailProtocol <NSObject>

- (void)handleDeviceDetail:(NSDictionary *)query;

/**
 跳转到设备信息页, push 方式
 
 @param devId 设备
 @param isCamera 是否为摄像头
 */
- (void)gotoDeviceInfoViewControllerWithDeviceId:(NSString *)devId isCamera:(BOOL)isCamera;

/**
 跳转到网络检测页
 
 @param devId 设备 id
 */
- (void)gotoDeviceDetailNetworkViewControllerWithDeviceId:(NSString *)devId;

/**
 跳转到设备详情页，以 push 方式

 @param device 设备
 @param group 群组，若有就传
 */
- (void)gotoDeviceDetailDetailViewControllerWithDevice:(TuyaSmartDeviceModel *)device group:(TuyaSmartGroupModel *)group;

@end


#endif /* TYDeviceDetailProtocol_h */
