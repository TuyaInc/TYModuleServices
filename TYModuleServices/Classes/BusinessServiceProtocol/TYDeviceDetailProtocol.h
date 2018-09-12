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

- (void)gotoDeviceInfoViewControllerWithDeviceId:(NSString *)devId isCamera:(BOOL)isCamera;

- (void)gotoDeviceDetailNetworkViewControllerWithDeviceId:(NSString *)devId;

- (void)gotoDeviceDetailDetailViewControllerWithDevice:(TuyaSmartDeviceModel *)device group:(TuyaSmartGroupModel *)group;

@end


#endif /* TYDeviceDetailProtocol_h */
