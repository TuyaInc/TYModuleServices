//
//  TYSocialShareModel.h
//  TYSocial
//
//  Created by TuyaInc on 2018/5/31.
//

#import <Foundation/Foundation.h>
#import "TYSocialProtocol.h"

@interface TYSocialShareModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (strong, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *desc;

@property (assign, nonatomic) TYSocialShareContentType  mediaType;
@property (assign, nonatomic) TYSocialType shareType;

+ (instancetype)modelWithShareType:(TYSocialType)shareType;
- (instancetype)initWithShareType:(TYSocialType)shareType;

@end
