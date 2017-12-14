//
//  UIColor+Category.h
//  haofang
//
//  Created by PengFeiMeng on 3/26/14.
//  Copyright (c) 2014 平安好房. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Category)

+ (UIColor *)PADefaultBackgroundColor;
+ (UIColor *)PAGrayColor;
+ (UIColor *)PAOrangeColor;
+ (UIColor *)PAOrangeHighlightColor;
+ (UIColor *)PAGreenColor;
+ (UIColor *)PAGreenHighlightColor;
+ (UIColor *)PABlackTextColor;
+ (UIColor *)PADimColor;
+ (UIColor *)PABlueColor;
+ (UIColor *)PARateGreenColor;
//导航条背景色
+ (UIColor *)PANavigationBarBgColor;

// 计算器饼图颜色
+ (UIColor *)PACalRedColor;
+ (UIColor *)PACalYellowColor;
+ (UIColor *)PACalGreenColor;

//根据颜色字符串获取Color
+ (UIColor *)colorFromHexRGB:(NSString *)inColorString;
+ (UIColor *)colorFromHex:(UInt32)color;

+ (UIColor*) colorRGBonvertToHSB:(UIColor*)color withBrighnessDelta:(CGFloat)delta;

@end
