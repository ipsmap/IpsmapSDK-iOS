//
//  IpsUserInfo.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/11/9.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IpsUserInfo : NSObject

@property (nonatomic, copy)NSString   *userId;
@property (nonatomic, copy)NSString   *phoneNumber;       //手机号码
@property (nonatomic, copy)NSString   *name;              //昵称
@property (nonatomic, copy)NSString   *avatarUrl;         //头像

@end
