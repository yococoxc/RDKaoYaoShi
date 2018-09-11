//
//  EasyGroupView.h
//  LQSKit
//
//  Created by muzico on 2018/8/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicViewTemplate.h"

@class EasyGroupView;

@protocol EasyGroupViewDelegate <NSObject>

@optional
- (void) easyGroupView:(EasyGroupView*)view autoLayoutWithHeight:(CGFloat)height;

- (void) easyGroupView:(EasyGroupView*)view didSelectAtIndex:(NSInteger)index;

@end

@interface EasyGroupView : LQSBasicViewTemplate

@property(nonatomic,readonly) UIView* headArea;
@property(nonatomic,readonly) UILabel* headLeftLabel;
@property(nonatomic,readonly) UIView* bodyArea;
@property(nonatomic,readonly) UIView* footArea;

@property(nonatomic,assign) CGFloat headHeight;

@property(nonatomic,assign) CGFloat footHeight;


@property(nonatomic,readonly) CGFloat height;

//8
@property(nonatomic,assign) CGFloat gap;
//6
@property(nonatomic,assign) CGFloat buttonWidthOffset;
//3
@property(nonatomic,assign) CGFloat buttonHeightOffset;
//nil
@property(nonatomic,strong) UIFont* buttonFont;
//14，当buttonFont为nil的时候，该值有效。
@property(nonatomic,assign) CGFloat buttonFontSize;
//darkGrayColor
@property(nonatomic,strong) UIColor* buttonBorderColor;
//redColor
@property(nonatomic,strong) UIColor* buttonBorderSelectedColor;
//1
@property(nonatomic,assign) CGFloat buttonBorderWidth;
//4
@property(nonatomic,assign) CGFloat buttonCornerRadius;
//nil
@property(nonatomic,strong) UIColor* buttonBackgroundColor;
//blackColor
@property(nonatomic,strong) UIColor* buttonTextColor;
//redColor
@property(nonatomic,strong) UIColor* buttonTextSelectedColor;


@property(nonatomic,assign,readonly) CGFloat contentHeight;

@property(nonatomic,assign) NSInteger currentSelect;


@property(nonatomic,strong) NSArray* texts;

@property(nonatomic,weak) id<EasyGroupViewDelegate> delegate;



@end
