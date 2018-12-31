//
//  UIView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (LQS)

- (void) lqs_setBackgroundColor:(id)aColor;

- (void) lqs_setBackgroundColor:(id)aColor alpha:(CGFloat)alpha;

- (void) lqs_setLayerShadowColor:(id)aColor opacity:(CGFloat)opacity size:(CGSize)size;

- (void) lqs_setLayerBorderWidth:(CGFloat)width borderColor:(id)aColor;

- (void) lqs_setLayerCornerRadius:(CGFloat)cornerRadius;

- (void) lqs_setLayerMasksToBounds:(BOOL)masksToBounds;

+ (instancetype) lqs_backgroundColor:(id)aColor;


@property(nonatomic,readonly) CGFloat lqs_x;
@property(nonatomic,readonly) CGFloat lqs_y;
@property(nonatomic,readonly) CGFloat lqs_width;
@property(nonatomic,readonly) CGFloat lqs_height;
@property(nonatomic,readonly) CGFloat lqs_left;
@property(nonatomic,readonly) CGFloat lqs_right;
@property(nonatomic,readonly) CGFloat lqs_top;
@property(nonatomic,readonly) CGFloat lqs_bottom;


@property(nonatomic) id lqs_backgroundColor;

@property(nonatomic) CGFloat lqs_layerCornerRadius;
@property(nonatomic) BOOL lqs_layerMasksToBounds;


- (void) lqs_setupWithView:(void(^)(UIView* view))aBlock;


- (id) lqs_viewWithTag:(NSInteger)tag;


- (instancetype) lqs_initWithXIB;
- (instancetype) lqs_initWithXIB:(NSString*)name;
+ (instancetype) lqs_viewWithXIB;
+ (instancetype) lqs_viewWithXIB:(NSString*)name;


@end
