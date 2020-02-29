//
//  TYSocialShareModel.m
//  TYSocial
//
//  Created by TuyaInc on 2018/5/31.
//

#import "TYSocialShareModel.h"

@implementation TYSocialShareModel

+ (instancetype)modelWithShareType:(TYSocialType)shareType {
    return [[[self class] alloc] initWithShareType:shareType];
}

- (instancetype)initWithShareType:(TYSocialType)shareType
{
    self = [super init];
    if (self) {
        _shareType = shareType;
    }
    return self;
}

@end
