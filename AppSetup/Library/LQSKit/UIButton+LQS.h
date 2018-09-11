//
//  UIButton+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (LQS)



@property(nonatomic) NSString* lqs__title;
@property(nonatomic) id lqs__titleColor;
@property(nonatomic) CGFloat lqs__fontSize;


@property(nonatomic) id lqs__image;
@property(nonatomic) id lqs__selectedImage;
@property(nonatomic) id lqs__SelectedTitleColor;



@property(nonatomic) NSString* lqs__text;
@property(nonatomic) NSString* lqs__selectedText;
@property(nonatomic) id lqs__textColor;
@property(nonatomic) id lqs__selectedTextColor;



- (void) lqs__setTitle:(NSString*)title;
- (void) lqs__setTitleColor:(id)aColor;
- (void) lqs__setFontSize:(CGFloat)fontSize;



- (void) lqs__setImage:(id)aImage;
- (void) lqs__setSelectedImage:(id)aImage;

- (void) lqs__setSelectedTitleColor:(id)aColor;


- (void) lqs__setTitle:(NSString *)title titleColor:(id)aColor fontSize:(CGFloat)fontSize;



- (void) lqs__setText:(NSString*)text;
- (void) lqs__setTextColor:(id)aColor;
- (void) lqs__setSelectedTextColor:(id)aColor;
- (void) lqs__setText:(NSString *)text textColor:(id)aColor fontSize:(CGFloat)fontSize;

- (void) lqs__setupWithButton:(void(^)(UIButton* button))aBlock;

@end
