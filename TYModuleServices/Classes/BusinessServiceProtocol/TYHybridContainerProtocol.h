//
// Created by luobei on 2019-04-29.
//

#import <UIKit/UIKit.h>

@protocol TYHybridContainerProtocol <NSObject>

- (void)updateWhiteList;

/**
 * For those who want manually show hybrid page rather than push it by default.
 * @param url
 * @return hybrid vc
 */
- (__kindof UIViewController *)hybridVCWithUrl:(NSString *)url;

@end
