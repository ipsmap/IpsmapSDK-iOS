//
//  IpsmapLocationManger.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/5/18.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>
@class IpsmapLocationManger;
@class IpsLocation;
@protocol IpsmapLocationDelegate <NSObject>

- (void)ipsmapLocationManager:(IpsmapLocationManger *_Nullable)manager didUpdateLocation:(IpsLocation *_Nullable)location;

@end

@interface IpsmapLocationManger : NSObject

@property (nonatomic, weak, nullable)id<IpsmapLocationDelegate> delegate;

@property (nonatomic, assign)NSUInteger locationTimeOut;


- (void)startLocationEngine:(nonnull NSString *)mapId;

- (void)stopLocatingEngine;

@end
