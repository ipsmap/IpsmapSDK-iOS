//
//  ExampleLocationViewController.m
//  IpsmapSDK_Demo
//
//  Created by zhangty on 2017/6/14.
//  Copyright © 2017年 zhangty. All rights reserved.
//

#import "ExampleLocationViewController.h"
#import <IpsmapSDK/IpsmapSDK.h>
#import "APIKey.h"

@interface ExampleLocationViewController ()<IpsmapLocationDelegate>

@property (nonatomic, strong)IpsmapLocationManger *manger;

@end

@implementation ExampleLocationViewController

- (void)dealloc {
    [self.manger stopLocatingEngine];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.manger = [IpsmapLocationManger new];
    self.manger.locationTimeOut = 20;
    self.manger.delegate = self;
    
    [self.manger startLocationEngine:(NSString *)MapId];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    
    [self.manger stopLocatingEngine];
}

- (void)ipsmapLocationManager:(IpsmapLocationManger *_Nullable)manager didUpdateLocation:(IpsLocationInfo *_Nullable)location {
    if (location.inThisMap) {
        NSLog(@"在医院里面");
        [IpsAlertView showAlertWithTitle:nil message:@"在院内" cancelButtonTitle:@"OK" otherButtonTitles:nil completion:nil];
    }else {
        [IpsAlertView showAlertWithTitle:nil message:@"在院外" cancelButtonTitle:@"OK" otherButtonTitles:nil completion:nil];
    }
}

@end
