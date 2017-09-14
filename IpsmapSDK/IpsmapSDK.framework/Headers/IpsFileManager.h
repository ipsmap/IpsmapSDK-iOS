//
//  IpsFileManager.h
//  IpsmapSDK
//
//  Created by zhangty on 17/4/21.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kAppCacheIFLyFile;
extern NSString * const kAppCacheBeaconMapFile;

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

//新手引导查看过（记录版本号）
+ (BOOL)setUserGuideClicked;
//新手引导是否查看过
+ (BOOL)isUserGuideClicked;
//手机号登录
+ (BOOL)setIsLoginPhoneNumber:(NSString *)phoneNumber;
//是否登录
+ (NSString *)getIsLoginPhoneNumber;
//位置分享群的昵称
+ (BOOL)setShareUserName:(NSString *)name;
+ (NSString *)getShareUserName;

//加入的位置分享群列表
+ (BOOL)setJoinedGroupList:(NSDictionary *)dic;
+ (NSDictionary *)getJoinedGroupList;

+ (NSDictionary *)getBeaconMap:(NSString *)mapName;
+ (BOOL)setBeaconMap:(NSString *)mapName with:(NSDictionary *)dic;


@end
