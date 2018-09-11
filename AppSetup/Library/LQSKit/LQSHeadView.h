//
//  LQSHeadView.h
//  LQSKit
//
//  Created by muzico on 2018/7/23.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicViewTemplate.h"

typedef NS_ENUM(NSUInteger, LQSHeadViewStyle) {
    LQSHeadViewStyleNone,
    LQSHeadViewStyleLeft,
    LQSHeadViewStyleRight,
    LQSHeadViewStyleLeft2,
    LQSHeadViewStyleRight2,
    LQSHeadViewStyleLeftRight,
    LQSHeadViewStyleLeft2Right,
    LQSHeadViewStyleLeftRight2,
    LQSHeadViewStyleLeft2Right2,
    LQSHeadViewStyleLeftBack,
    LQSHeadViewStyleLeftBackRightMore,
    LQSHeadViewStyleLeftBackRight,
    LQSHeadViewStyleLeftBackRight2,
    LQSHeadViewStyleLeftBack2Right2,
};

@interface LQSHeadView : LQSBasicViewTemplate


@property(nonatomic,strong,readonly) UIView* leftArea;
@property(nonatomic,strong,readonly) UIView* middleArea;
@property(nonatomic,strong,readonly) UIView* rightArea;


@property(nonatomic,strong,readonly) UIButton* leftButton;
@property(nonatomic,strong,readonly) UIButton* leftButton2;
@property(nonatomic,strong,readonly) UIButton* rightButton;
@property(nonatomic,strong,readonly) UIButton* rightButton2;
@property(nonatomic,strong,readonly) UILabel* titleLabel;


@property(nonatomic,strong,readonly) UIImageView* leftButtonIcon;
@property(nonatomic,assign) CGFloat leftButtonIconSize;

@property(nonatomic,strong,readonly) UIImageView* leftButton2Icon;
@property(nonatomic,assign) CGFloat leftButton2IconSize;

@property(nonatomic,strong,readonly) UIImageView* rightButtonIcon;
@property(nonatomic,assign) CGFloat rightButtonIconSize;

@property(nonatomic,strong,readonly) UIImageView* rightButton2Icon;
@property(nonatomic,assign) CGFloat rightButton2IconSize;


@property(nonatomic,strong,readonly) UIView* bottomLine;

@property(nonatomic,assign) LQSHeadViewStyle style;



@end
