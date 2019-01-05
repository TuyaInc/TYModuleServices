//
//  TYGroupHandleProtocol.h
//  TYGroupHandleModule
//
//  Created by 黄凯 on 2018/8/22.
//

#ifndef TYGroupHandleProtocol_h
#define TYGroupHandleProtocol_h

@protocol TYGroupHandleProtocol

/**
 跳转到 mesh 群组入口
 
 @param query 初始数据
 @param isNav 是否以 navigator 的方式， 如果 `YES` 将会把 vc 装到 naviagtorVC 再进行 present
 */
- (void)presentMeshGroupWithQueryData:(NSDictionary *)query
                                isNav:(BOOL)isNav;

/**
 跳转到一般群组入口

 @param query 初始数据
 @param isNav 是否以 navigator 的方式， 如果 `YES` 将会把 vc 装到 naviagtorVC 再进行 present
 */
- (void)presentGroupWithQueryData:(NSDictionary *)query
                            isNav:(BOOL)isNav;
/**
 跳转到zigbee群组入口
 
 @param query 初始数据
 @param isNav 是否以 navigator 的方式， 如果 `YES` 将会把 vc 装到 naviagtorVC 再进行 present
 */
- (void)presentZigbeeGroupWithQueryData:(NSDictionary *)query
                                  isNav:(BOOL)isNav;
/**
 跳转到蓝牙本地群组入口
 
 @param query 初始数据
 @param isNav 是否以 navigator 的方式， 如果 `YES` 将会把 vc 装到 naviagtorVC 再进行 present
 */
- (void)presentMeshLocalGroupWithQueryData:(NSDictionary *)query
                                     isNav:(BOOL)isNav ;

@end

#endif /* TYGroupHandleProtocol_h */
