//
//  UILabel+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (LQS)


@property(nonatomic) CGFloat lqs_fontSize;
@property(nonatomic) id lqs_textColor;


- (void) lqs_setFontSize:(CGFloat)fontSize;

- (void) lqs_setTextColor:(id)aColor;

- (void) lqs_setText:(NSString*)text textColor:(id)textColor fontSize:(CGFloat)fontSize;

+ (instancetype) lqs_text:(NSString*)text textColor:(id)textColor fontSize:(CGFloat)fontSize;

- (void) lqs_setupWithLabel:(void(^)(UILabel* label))aBlock;

@end
