//
//  TYSmartHouseIndexProtocol.h
//  Pods
//
//  Created by 房栋 on 2018/4/20.
//

#import <Foundation/Foundation.h>


typedef enum : NSUInteger {
    HomeSceneTypeNone = 0,
    HomeSceneTypeScene,
    HomeSceneTypeAuto
} HomeSceneType;

typedef enum : NSUInteger {
    HomeSceneDeviceTypeAction = 0,                //默认设备
    HomeSceneDeviceTypeActionZigbee,              //ZIGBEE场景
    HomeSceneDeviceTypeCondition                  //自动化条件设备
} HomeSceneDeviceType;

typedef void(^AddShareDeviceBlock)(NSArray *devIds);


@class TuyaSmartHome;
@class TuyaSmartDeviceModel, TuyaSmartGroupModel;

@protocol TYSmartHouseIndexProtocol <NSObject>

- (TuyaSmartHome *)currentHome;

- (BOOL)homeAdminValidation;

- (void)showErrorDialog;

- (void)homeIndexScene:(NSArray *)scenes autos:(NSArray *)autos devices:(NSArray *)devices type:(HomeSceneType)type isCondition:(BOOL)isCondition __attribute__((deprecated("deprecated method, pls use homeIndexScene with enum")));

- (void)homeIndexScene:(NSArray *)scenes autos:(NSArray *)autos devices:(NSArray *)devices type:(HomeSceneType)type deviceType:(HomeSceneDeviceType)deviceType;

- (void)homeIndexScene:(NSArray *)scenes autos:(NSArray *)autos devices:(NSArray *)devices type:(HomeSceneType)type deviceType:(HomeSceneDeviceType)deviceType extraInfo:(NSDictionary * _Nullable)extraInfo;

- (void)homeIndexShareWithHomeId:(long long)homeId devIds:(NSArray *)devIds isFullNew:(BOOL)isFullNew addShareDeviceBlock:(AddShareDeviceBlock)addShareDeviceBlock;

- (void)didSelectRowWithModel:(TuyaSmartDeviceModel *)deviceModel groupModel:(TuyaSmartGroupModel *)groupModel;
@end
