//
//  LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


BOOL LQS__isBegin_iOS_7(void);
BOOL LQS__isBegin_iOS_8(void);
BOOL LQS__isBegin_iOS_9(void);
BOOL LQS__isBegin_iOS_10(void);
BOOL LQS__isBegin_iOS_11(void);
BOOL LQS__isBegin_iOS_12(void);
BOOL LQS__isBegin_iOS_13(void);
BOOL LQS__isBegin_iOS_14(void);

@interface LQS : NSObject

/**
 16 进制值:
 支持 3 位 16 进制值。（RGB）#abc <==> #aabbcc
 支持 4 位 16 进制值。（RGBA）#abcd <==> #aabbccdd
 支持 6 位 16 进制值。（RGB）
 支持 8 位 16 进制值。（RGBA）
 
 特殊值:
 R、Random、random，代表随机颜色。
 
 颜色的英文名（小写）:
 
 10进制值:
 RGB: 255,255,255
 RGBA: 255,255,255,255
 **/
+ (UIColor*) color:(id)aColor;

+ (UIImage*) image:(id)aImage;

+ (CGFloat) heightWithWidth:(CGFloat)width equalRatioWithOtherWidth:(CGFloat)otherWidth otherHeight:(CGFloat)otherHeight;


+ (CGFloat) valueFor5:(CGFloat)value5 for6:(CGFloat)value6 for6Plus:(CGFloat)value6Plus forX:(CGFloat)valueX;


//[from, to]
+ (int) randomIntValue:(int)from to:(int)to;
+ (NSInteger) randomIntegerValue:(NSInteger)from to:(NSInteger)to;
+ (NSUInteger) randomUnsignedIntegerValue:(NSUInteger)from to:(NSUInteger)to;

+ (void) callWithTel:(NSString*)tel toView:(id)view;




#pragma mark - 相机授权
+ (BOOL) canUsageCamera;

#pragma mark - 相册授权
+ (BOOL) canUsageAlbum;



+ (BOOL) array:(NSArray<NSString*>*)array isEqualToArray:(NSArray<NSString*>*)otherArray;




+ (CGSize) sizeWithString:(NSString*)string font:(UIFont*)font;
+ (CGSize) sizeWithString:(NSString*)string width:(CGFloat)width font:(UIFont*)font;
+ (CGSize) sizeWithString:(NSString*)string height:(CGFloat)height font:(UIFont*)font;
+ (CGFloat) heightWithString:(NSString*)string width:(CGFloat)width font:(UIFont*)font;
+ (CGFloat) widthWithString:(NSString*)string height:(CGFloat)height font:(UIFont*)font;

@end
