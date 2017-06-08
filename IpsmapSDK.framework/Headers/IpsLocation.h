//
//  IpsLocation.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/5/18.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IpsLocation : NSObject

@property (nonatomic, assign)BOOL inThisMap;
@property (nonatomic, strong)NSString *floor;
@property (nonatomic, strong)NSString *floorDescription;;

@end
