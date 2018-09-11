//
//  UIView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (LQS)

- (void) lqs__setBackgroundColor:(id)aColor;

- (void) lqs__setBackgroundColor:(id)aColor alpha:(CGFloat)alpha;

- (void) lqs__setLayerShadowColor:(id)aColor opacity:(CGFloat)opacity size:(CGSize)size;

- (void) lqs__setLayerBorderWidth:(CGFloat)width borderColor:(id)aColor;

- (void) lqs__setLayerCornerRadius:(CGFloat)cornerRadius;

- (void) lqs__setLayerMasksToBounds:(BOOL)masksToBounds;

+ (instancetype) lqs__backgroundColor:(id)aColor;


@property(nonatomic,readonly) CGFloat lqs__x;
@property(nonatomic,readonly) CGFloat lqs__y;
@property(nonatomic,readonly) CGFloat lqs__width;
@property(nonatomic,readonly) CGFloat lqs__height;
@property(nonatomic,readonly) CGFloat lqs__left;
@property(nonatomic,readonly) CGFloat lqs__right;
@property(nonatomic,readonly) CGFloat lqs__top;
@property(nonatomic,readonly) CGFloat lqs__bottom;


@property(nonatomic) id lqs__backgroundColor;

@property(nonatomic) CGFloat lqs__layerCornerRadius;
@property(nonatomic) BOOL lqs__layerMasksToBounds;


- (void) lqs__setupWithView:(void(^)(UIView* view))aBlock;

@end
