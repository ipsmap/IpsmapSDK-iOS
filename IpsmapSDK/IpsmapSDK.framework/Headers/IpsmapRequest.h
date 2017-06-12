//
//  IpsmapRequest.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/6/1.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    IpsmapNoUpdate = 0,
    IpsmapTipUpdate,
    IpsmapForceUpdate,
} IpsmapUpdate;

typedef void(^IpsmapUpdateBlock)(IpsmapUpdate flag, NSString *_Nullable url, NSError *_Nullable error);

@interface IpsmapRequest : NSObject

+ (void)checkAppUpdate:(IpsmapUpdateBlock _Nullable)block;

@end
