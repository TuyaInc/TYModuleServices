//
//  TYUpgradeProtocol.h
//  TYUpgradeModule
//
//  Created by 黄凯 on 2018/8/17.
//

#ifndef TYUpgradeProtocol_h
#define TYUpgradeProtocol_h

@class TuyaSmartDeviceModel;
@protocol TYUpgradeProtocol <NSObject>

- (void)checkFirmwareUpgrade:(TuyaSmartDeviceModel *)device isManual:(BOOL)isManual;

@end


#endif /* TYUpgradeProtocol_h */
