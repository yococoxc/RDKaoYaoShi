//
//  UILabel+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (LQS)


@property(nonatomic) CGFloat lqs__fontSize;
@property(nonatomic) id lqs__textColor;


- (void) lqs__setFontSize:(CGFloat)fontSize;

- (void) lqs__setTextColor:(id)aColor;

- (void) lqs__setText:(NSString*)text textColor:(id)textColor fontSize:(CGFloat)fontSize;

+ (instancetype) lqs__text:(NSString*)text textColor:(id)textColor fontSize:(CGFloat)fontSize;

- (void) lqs__setupWithLabel:(void(^)(UILabel* label))aBlock;

@end
