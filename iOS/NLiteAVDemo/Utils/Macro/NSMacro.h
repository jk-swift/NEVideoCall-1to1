//
//  NSMacro.h
//  NLiteAVDemo
//
//  Created by Think on 2020/8/26.
//  Copyright © 2020 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

// base host
#define BASE_HOST @""

// UIColor宏定义

#define HEXCOLORA(rgbValue, alphaValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0x0000FF))/255.0 \
alpha:alphaValue]

#define HEXCOLOR(rgbValue) HEXCOLORA(rgbValue, 1.0)

// 线程
void ntes_main_sync_safe(dispatch_block_t block);
void ntes_main_async_safe(dispatch_block_t block);
