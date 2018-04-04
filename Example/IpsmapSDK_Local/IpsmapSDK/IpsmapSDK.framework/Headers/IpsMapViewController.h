//
//  IpsMapViewController.h
//  IpsmapSDK
//
//  Created by zhangty on 17/4/7.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IpsLocationShareProtocol.h"

@class IpsHospital;
@interface IpsMapViewController : UIViewController

- (nonnull instancetype)initWithMapId:(nonnull NSString *)mapId;

- (nonnull instancetype)initWithHospitalInfo:(nonnull IpsHospital *)hospital;

- (nonnull instancetype)initWithMapId:(nonnull NSString *)mapId targetName:(nonnull NSString *)targetName targetId:(nonnull NSString *)targetId;

@property (nonatomic, weak, nullable)id<IpsLocationShareProtocol> locationShareDelegate;

- (void)setShareMapId:(NSString *_Nullable)mapId groupId:(NSString *_Nullable)groupId;
- (void)setShareGroupNumber:(NSString *_Nullable)number params:(NSMutableDictionary *_Nullable)params;
- (void)setLocationShareInfo:(nonnull NSDictionary *)params;
@end
