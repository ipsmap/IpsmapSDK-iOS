//
//  IpsLocationShareProtocol.h
//  IpsmapSDK
//
//  Created by zhangty on 2017/9/13.
//  Copyright © 2017年 Ipsmap. All rights reserved.
//

#ifndef IpsLocationShareProtocol_h
#define IpsLocationShareProtocol_h

#import <Foundation/Foundation.h>
#import "IpsShareConfig.h"

@protocol IpsLocationShareProtocol <NSObject>
@required

- (void)IpsLocationShare:(IpsShareType)type title:(NSString *)title desc:(NSString *)desc url:(NSString *)url thumbImage:(UIImage *)image;

@end


#endif /* IpsLocationShareProtocol_h */
