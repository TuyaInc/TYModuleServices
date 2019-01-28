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
    HomeSceneDeviceTypeCondition,                 //自动化条件设备
    HomeSceneDeviceTypeConditionFace              //人脸识别设备
} HomeSceneDeviceType;

#define kNotificationSmartHouseReloadDashbord   @"kNotificationReloadDashboardTemperature"

typedef void(^AddShareDeviceBlock)(NSArray *devIds);


@class TuyaSmartHome;
@class TuyaSmartDeviceModel, TuyaSmartGroupModel;

@protocol TYSmartHouseIndexProtocol <NSObject>

/**
 获取到当前APP选中的家庭
 */
- (TuyaSmartHome *)currentHome;

/**
 展示语音功能弹窗
 使用语音需要配置goolekey、讯飞sdk及sdk，目前详情可咨询@卢卡
 */
- (void)showSpeech;
- (void)showSpechWithView:(UIView *)view __deprecated_msg("Use -showSpeech insted if base on Tuya 3.6.0+");

/**
 判断当前家庭是否是管理员身份
 
 @return YES or NO
 */
- (BOOL)homeAdminValidation;

/**
 展示升级的弹窗提醒，提醒用户升级设备避免夏/冬令时的切换影响定时功能
 */
- (void)showErrorDialog;

/**
 跳转到当前家庭设备选择页面
 
 @param homeId 家庭homeid
 @param devIds 已经分享给当前用户的设备id
 @param isFullNew YES - 选择设备后点击分享会让你填写账号分享给指定用户
                  NO  - 选择设备点击分享会把你选择的设备devid数组通过addShareDeviceBlock传给你处理
 @param addShareDeviceBlock 处理控制器返回的devId数组的block，当isFullNew为NO时才有效
 */
- (void)homeIndexShareWithHomeId:(long long)homeId
                          devIds:(NSArray *)devIds
                       isFullNew:(BOOL)isFullNew
             addShareDeviceBlock:(AddShareDeviceBlock)addShareDeviceBlock;


/**
 跳转到面板
 
 @param deviceModel 跳转到设备面板时传入的设备实体，如群组面板跳转可不传。
 @param groupModel 跳转到群组面板时传入的群组实体，如点设备面板跳转可不传。
 */
- (void)didSelectRowWithModel:(TuyaSmartDeviceModel *)deviceModel
                   groupModel:(TuyaSmartGroupModel *)groupModel;



@end
