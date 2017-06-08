//
//  IpsFileManager.h
//  IpsmapSDK
//
//  Created by zhangty on 17/4/21.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kAppCacheIFLyFile;

@interface IpsFileManager : NSObject

//初始化文件系统
+ (void)InitDirectory;

//创建文件夹
+ (BOOL)CreateDirectory:(NSString*)path;

+ (BOOL)CreateFile:(NSString*)path;

+ (NSString*)GetDocumentDirectory;

+ (NSString*)GetLibraryDirectory;
//缓存文件的路径 /Library/Caches
+ (NSString*)GetCachesDirectory;

//App的有用信息 /Library/System
+ (NSString*)GetAppSystemDirectory;

//App的缓存信息 //Library/Caches/System/
+ (NSString*)GetAppCachesDirectory;

//Library/Users/Uid
+ (NSString*)GetUserDirectory:(NSString*)uid;

//新手引导查看过（记录版本号）
+ (BOOL)setUserGuideClicked;
//新手引导是否查看过
+ (BOOL)isUserGuideClicked;

@end
