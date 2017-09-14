//
//  IpsShareConfig.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/9/12.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, IpsShareType) {
    IpsShareTypeUnkown,
    IpsShareTypeWeChat, //微信
    IpsShareTypeQQ,     //QQ
    IpsShareTypeSMS,    //短信
    IpsShareTypeCopy,   //复制
};

@interface IpsShareConfig : NSObject

@property (nonatomic, copy)NSString *scheme;
@property (nonatomic, strong)UIImage *imageIcon;
@property (nonatomic, readonly)NSArray *supportPlatforms;

+ (instancetype)sharedInstance;

+ (void)showSharePlatforms:(NSArray *)showPlatforms;

+ (void)sendShare:(IpsShareType)type title:(NSString *)title desc:(NSString *)desc url:(NSString *)url;

@end
