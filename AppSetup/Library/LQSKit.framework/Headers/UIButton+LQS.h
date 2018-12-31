//
//  UIButton+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (LQS)



@property(nonatomic) NSString* lqs_title;
@property(nonatomic) id lqs_titleColor;
@property(nonatomic) CGFloat lqs_fontSize;


@property(nonatomic) id lqs_image;
@property(nonatomic) id lqs_selectedImage;
@property(nonatomic) id lqs_selectedTitleColor;



@property(nonatomic) NSString* lqs_text;
@property(nonatomic) NSString* lqs_selectedText;
@property(nonatomic) id lqs_textColor;
@property(nonatomic) id lqs_selectedTextColor;



- (void) lqs_setTitle:(NSString*)title;
- (void) lqs_setTitleColor:(id)aColor;
- (void) lqs_setFontSize:(CGFloat)fontSize;



- (void) lqs_setImage:(id)aImage;
- (void) lqs_setSelectedImage:(id)aImage;

- (void) lqs_setSelectedTitleColor:(id)aColor;


- (void) lqs_setTitle:(NSString *)title titleColor:(id)aColor fontSize:(CGFloat)fontSize;



- (void) lqs_setText:(NSString*)text;
- (void) lqs_setTextColor:(id)aColor;
- (void) lqs_setSelectedTextColor:(id)aColor;
- (void) lqs_setText:(NSString *)text textColor:(id)aColor fontSize:(CGFloat)fontSize;

- (void) lqs_setupWithButton:(void(^)(UIButton* button))aBlock;

@end
