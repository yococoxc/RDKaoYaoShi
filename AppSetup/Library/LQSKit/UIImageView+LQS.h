//
//  UIImageView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (LQS)

- (void) lqs__setImage:(id)aImage;


@property(nonatomic) id lqs__image;


+ (instancetype) lqs__image:(id)aImage;


- (void) lqs__setupWithImageView:(void(^)(UIImageView* imageView))aBlock;

@end
