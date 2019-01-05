//
//  TYQRCodeProtocol.h
//  TYQRCodeModule
//
//  Created by 黄凯 on 2018/12/10.
//

#ifndef TYQRCodeProtocol_h
#define TYQRCodeProtocol_h

@protocol TYQRCodeProtocol <NSObject>

/**
 二维码入口
 
 @param complete 二维码扫描结果
 */
- (void)gotoQRCodeViewController:(void (^)(NSString *urlStr))complete;

@end

#endif
