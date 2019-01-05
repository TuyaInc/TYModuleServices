//
//  TPSocialLoginModel.m
//  TuyaSmartPublic
//
//  Created by 冯晓 on 16/3/10.
//  Copyright © 2016年 Tuya. All rights reserved.
//

#import "TPSocialLoginModel.h"

@implementation TPSocialLoginModel



+ (instancetype)modelWithJSON:(NSDictionary *)json {
    TPSocialLoginModel *model = [[TPSocialLoginModel alloc] init];
    
    
    if ([json objectForKey:@"userId"]) {
        model.userId = [json objectForKey:@"userId"];
    }

    if ([json objectForKey:@"accessToken"]) {
        model.accessToken = [json objectForKey:@"accessToken"];
    }
    
    if ([json objectForKey:@"accessTokenSecret"]) {
        model.accessTokenSecret = [json objectForKey:@"accessTokenSecret"];
    }
    
    if ([json objectForKey:@"code"]) {
        model.code = [json objectForKey:@"code"];
    }
    
    if ([json objectForKey:@"nickName"]) {
        model.nickName = [json objectForKey:@"nickName"];
    }
    
    if ([json objectForKey:@"headPic"]) {
        model.headPic = [json objectForKey:@"headPic"];
    }
    
    if ([json objectForKey:@"expirationDate"]) {
        model.expirationDate = [json objectForKey:@"expirationDate"];
    }
    
    if ([json objectForKey:@"type"]) {
        model.type = (TYSocialType)[[json objectForKey:@"type"] integerValue];
    }
    
    return model;
}


@end

