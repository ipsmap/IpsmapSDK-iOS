//
//  IpsAlertView.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/7/14.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^IpsAlertViewCompletion)(NSUInteger selectedOtherButtonIndex);

@interface IpsAlertView : NSObject

+ (void)showAlertWithTitle:(NSString *)title
                   message:(NSString *)message
         cancelButtonTitle:(NSString *)cancelButtonTitle
         otherButtonTitles:(NSArray *)otherButtonTitles
                completion:(IpsAlertViewCompletion)completion NS_EXTENSION_UNAVAILABLE_IOS("");

@end
