//
//  IpsUserGuideViewController.h
//  IpsmapSDK
//
//  Created by zhangty on 17/4/21.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ userGuideButtonClickedBlock)();

@interface IpsUserGuideViewController : UIViewController

@property (nonatomic, copy) userGuideButtonClickedBlock setOnButtonClickedBlock;

@end
