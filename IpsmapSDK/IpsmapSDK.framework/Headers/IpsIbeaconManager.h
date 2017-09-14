//
//  IpsIbeaconManager.h
//  CLDemo
//
//  Created by zhangty on 2017/8/9.
//  Copyright © 2017年 zhangty. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface IpsIbeaconManager : NSObject

@property (nonatomic, strong)CLLocationManager  *locManager;

+ (instancetype)sharedInstance;

- (void)startUpdatingLocation;

- (void)stopUpdatingLocation;

- (void)startMonitoringForRegion;

- (void)stopMonitoringForRegion;

- (void)startRangingBeacons;

- (void)stopRangingBeacons;

@end
