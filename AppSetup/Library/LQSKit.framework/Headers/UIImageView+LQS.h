//
//  UIImageView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (LQS)

- (void) lqs_setImage:(id)aImage;


@property(nonatomic) id lqs_image;


+ (instancetype) lqs_image:(id)aImage;


- (void) lqs_setupWithImageView:(void(^)(UIImageView* imageView))aBlock;

@end
