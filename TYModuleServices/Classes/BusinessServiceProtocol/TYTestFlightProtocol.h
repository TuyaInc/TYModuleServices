//
//  TYTestFlightProtocol.h
//  Pods
//
//  Created by 温明妍 on 2019/8/1.
//


#ifndef TYTestFlightProtocol_h
#define TYTestFlightProtocol_h

#import <Foundation/Foundation.h>

typedef void(^TestFlightSuccessCallback)(BOOL needShow,NSString *address);
typedef void(^TestFlightFailureCallback)(NSError *error);

@protocol TYTestFlightProtocol <NSObject>

@property (nonatomic, assign) BOOL cacheCanShowTestFlight;

- (void)checkIfShowTestFlightDialog;

- (BOOL)canShowTestFlightDialog;

- (void)showTestFlightDialog;

- (void)requestNeedShowTestFlightWithCallback:(TestFlightSuccessCallback)successCallback
                                      failure:(TestFlightFailureCallback)failureCallback;


#if DEBUG

- (void)configParams;

#endif

@end

#endif /* TYTestFlightProtocol_h */
