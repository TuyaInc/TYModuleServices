//
//  TYMapKitProtocol.h
//  TYSmartFamilyDefaultUISkin
//
//  Created by Hemin Won on 2019/12/26.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TYMapKitProtocol <NSObject>

/// 跳转至地图设置页面
/// @param doneActionBlock 保存位置信息回调 coordinate2D:经纬度信息 placeName:地理位置名称
- (void)gotoMapViewControllerWithDoneActionBlock:(void(^)(CLLocationCoordinate2D coordinate2D, NSString *placeName))doneActionBlock;

@end

NS_ASSUME_NONNULL_END
