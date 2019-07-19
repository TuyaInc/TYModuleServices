//
//  TYHomekitDevice.m
//  TYHomeKitModule
//
//  Created by Rui on 2019/2/14.
//

#import "TYHomekitDevice.h"


@interface TYHomekitDevice ()
@property (assign, nonatomic) BOOL reachable;
@property (assign, nonatomic) BOOL tuyaService;
@property (strong, nonatomic) HMAccessory *accessory;
@property (strong, nonatomic) HMCharacteristic *token;
@property (strong, nonatomic) HMCharacteristic *active;
@property (strong, nonatomic) HMCharacteristic *pid;
@end

@implementation TYHomekitDevice
- (void)setAccessory:(HMAccessory *)accessory {
    _accessory = accessory;
    self.reachable = accessory.reachable;
    [accessory.services enumerateObjectsUsingBlock:^(HMService * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        if ([obj.serviceType isEqualToString:TUYA_HOMEKIT_SERVICE_TYPE]) {
            self.tuyaService = YES;
            [obj.characteristics enumerateObjectsUsingBlock:^(HMCharacteristic * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
                if ([obj.characteristicType isEqualToString:TUYA_HOMEKIT_CHARACTERISTIC_TYPE_ACTIVE]) {
                    self.active = obj;
                }
                if ([obj.characteristicType isEqualToString:TUYA_HOMEKIT_CHARACTERISTIC_TYPE_ACTIVE_TOKEN]) {
                    self.token = obj;
                }
                if ([obj.characteristicType isEqualToString:TUYA_HOMEKIT_CHARACTERISTIC_TYPE_PID]) {
                    self.pid = obj;
                }
            }];
        }
    }];
}
- (instancetype)initWithAccessory:(HMAccessory *)accessory {
    if (self = [super init]) {
        self.accessory = accessory;
    }
    return self;
}
+ (instancetype)homeKitDeviceWithAccessory:(HMAccessory *)accessory {
    return [[self alloc] initWithAccessory:accessory];
}
@end
