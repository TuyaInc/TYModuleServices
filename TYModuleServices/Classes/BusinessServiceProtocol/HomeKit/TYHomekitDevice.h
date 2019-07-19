//
//  TYHomekitDevice.h
//  TYHomeKitModule
//
//  Created by Rui on 2019/2/14.
//

#import <Foundation/Foundation.h>
#import <HomeKit/HomeKit.h>


#define TUYA_HOMEKIT_SERVICE_TYPE @"2E36328D-9B54-4884-B873-6AC8CD8D9241"
#define TUYA_HOMEKIT_CHARACTERISTIC_TYPE_ACTIVE @"87F14350-E02D-4D77-9A96-0B4658C805F5"
#define TUYA_HOMEKIT_CHARACTERISTIC_TYPE_ACTIVE_TOKEN @"8AAD42A0-CEC9-4542-B49F-1DBF4BD6AA04"
#define TUYA_HOMEKIT_CHARACTERISTIC_TYPE_PID @"7645A55F-9CD9-492F-BFFE-C28D9963BDDE"
NS_ASSUME_NONNULL_BEGIN

@interface TYHomekitDevice : NSObject

@property (assign, nonatomic) long long homeId;
@property (copy, nonatomic)  NSString *icon;
@property (copy, nonatomic)  NSString *name;
@property (assign, nonatomic,readonly) BOOL reachable;
@property (assign, nonatomic,readonly) BOOL tuyaService;
@property (strong, nonatomic,readonly) HMAccessory *accessory;
@property (strong, nonatomic,readonly) HMCharacteristic *token;
@property (strong, nonatomic,readonly) HMCharacteristic *active;
@property (strong, nonatomic,readonly) HMCharacteristic *pid;

+ (instancetype)homeKitDeviceWithAccessory:(HMAccessory *)accessory;
@end

NS_ASSUME_NONNULL_END
