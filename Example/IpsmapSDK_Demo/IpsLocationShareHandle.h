//
//  IpsLocationShareHandle.h
//  XunDao-iOS
//
//  Created by zhangty on 2017/9/13.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IpsmapSDK/IpsmapSDK.h>

@interface IpsLocationShareHandle : NSObject<IpsLocationShareProtocol>

+ (instancetype)sharedInstance;

- (void)IpsLocationShare:(IpsShareType)type title:(NSString *)title desc:(NSString *)desc url:(NSString *)url thumbImage:(UIImage *)image;

@end
