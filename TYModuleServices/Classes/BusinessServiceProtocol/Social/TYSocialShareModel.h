//
//  TYSocialShareModel.h
//  TYSocial
//
//  Created by 高森 on 2018/5/31.
//

#import <Foundation/Foundation.h>
#import "TYSocialProtocol.h"

@interface TYSocialShareModel : NSObject

@property (nonatomic, strong) NSString                  *title;
@property (nonatomic, strong) NSString                  *content;
@property (nonatomic, strong) UIImage                   *image;
@property (nonatomic, strong) NSString                  *imageUrl;
@property (nonatomic, strong) NSString                  *url;
@property (nonatomic, strong) NSString                  *desc;
@property (nonatomic, assign) TYSocialShareContentType  mediaType;

@end
