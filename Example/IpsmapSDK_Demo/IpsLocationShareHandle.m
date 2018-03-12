//
//  IpsLocationShareHandle.m
//  XunDao-iOS
//
//  Created by zhangty on 2017/9/13.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import "IpsLocationShareHandle.h"
#import "WXApi.h"
#import <MessageUI/MessageUI.h>

@interface IpsLocationShareHandle ()<MFMessageComposeViewControllerDelegate>

@end

@implementation IpsLocationShareHandle

+ (instancetype)sharedInstance {
    static IpsLocationShareHandle *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[IpsLocationShareHandle alloc] init];
    });
    return sharedInstance;
}

- (void)IpsLocationShare:(IpsShareType)type title:(NSString *)title desc:(NSString *)desc url:(NSString *)url thumbImage:(UIImage *)image {
    switch (type) {
        case IpsShareTypeWeChat:
        {
            [self sendShareToWeChatWithtitle:title desc:desc url:url thumbImage:image];
        }
            break;
        case IpsShareTypeQQ:
        {
            [self sendShareToQQWithtitle:title desc:desc url:url thumbImage:image];
        }
            break;
        case IpsShareTypeSMS:
        {
            [self sendShareToSMSWithtitle:title desc:desc url:url];
        }
            break;
        default:
            break;
    }
}

- (void)sendShareToWeChatWithtitle:(NSString *)title desc:(NSString *)desc url:(NSString *)url thumbImage:(UIImage *)image {
    WXMediaMessage *message = [WXMediaMessage message];
    message.title = title;
    message.description = desc;
    //分享的URL
    WXWebpageObject *ext = [WXWebpageObject object];
    NSCharacterSet *encodeUrlSet = [NSCharacterSet URLQueryAllowedCharacterSet];
    NSString *encodeUrl = [url stringByAddingPercentEncodingWithAllowedCharacters:encodeUrlSet];
    ext.webpageUrl = encodeUrl;
    message.mediaObject = ext;
    
    [message setThumbImage:image];
    SendMessageToWXReq* req = [[SendMessageToWXReq alloc] init];
    req.bText = NO;
    req.message = message;
    req.scene = 0;
    [WXApi sendReq:req];
}

- (void)sendShareToQQWithtitle:(NSString *)title desc:(NSString *)desc url:(NSString *)url thumbImage:(UIImage *)image {
    
}

#pragma mark- 短信
- (void)sendShareToSMSWithtitle:(NSString *)title desc:(NSString *)desc url:(NSString *)url {
    if ([MFMessageComposeViewController canSendText]) {
        MFMessageComposeViewController *vc = [[MFMessageComposeViewController alloc] init];
        vc.body = url;
        vc.messageComposeDelegate = self;
        
        UIViewController *rootVC = [[[[UIApplication sharedApplication] windows] firstObject] rootViewController];
        [rootVC presentViewController:vc animated:YES completion:nil];
    }
}

- (void)messageComposeViewController:(MFMessageComposeViewController *)controller didFinishWithResult:(MessageComposeResult)result {
        UIViewController *rootVC = [[[[UIApplication sharedApplication] windows] firstObject] rootViewController];
        [rootVC dismissViewControllerAnimated:YES completion:nil];
}

@end
