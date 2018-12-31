//
//  LQSMenuDetailView.h
//  LQSKit
//
//  Created by muzico on 2018/7/26.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicViewTemplate.h"


@class LQSMenuDetailView;

@protocol LQSMenuDetailViewDataSource <NSObject>
@required
- (NSUInteger) numberOfViewsInLQSMenuDetailView:(LQSMenuDetailView *)view;

- (NSString* ) lqsMenuDetailView:(LQSMenuDetailView *)menu textAtIndex:(NSUInteger)index;

@end

@protocol LQSMenuDetailViewDelegate <NSObject>
@optional
- (void) lqsMenuDetailView:(LQSMenuDetailView *)menu didSelectAtIndex:(NSUInteger)index;

- (void) cancelInLQSMenuDetailView:(LQSMenuDetailView *)menu;

@end


@interface LQSMenuDetailView : LQSBasicViewTemplate

@property(nonatomic,strong,readonly) UIView* headView;
@property(nonatomic,strong,readonly) UILabel* headViewTitleLabel;
//8
@property(nonatomic,assign) CGFloat headViewTitleLabelX;
//16
@property(nonatomic,assign) CGFloat headViewTitleLabelFontSize;
//#0f0f0f
@property(nonatomic,strong) id headViewTitleLabelTextColor;
@property(nonatomic,strong,readonly) UIView* headViewBottomLine;
@property(nonatomic,strong) NSString* headTitle;

//44
@property(nonatomic,assign) CGFloat headViewY;
//44
@property(nonatomic,assign) CGFloat headViewHeight;

//4
@property(nonatomic,assign) NSUInteger rowNumber;

@property(nonatomic,strong,readonly) UIButton* rightButton;
@property(nonatomic,strong,readonly) UIImageView* rightButtonIcon;
//LQS_Icon_Arrow_Up_B
@property(nonatomic,strong) id rightButtonIconImage;
//20
@property(nonatomic,assign) CGFloat rightButtonIconSize;

@property(nonatomic,assign) CGFloat rightButtonWidth;

@property(nonatomic,assign) NSUInteger currentSelect;

//#BE00FA
@property(nonatomic,strong) id buttonTextSelectColor;

//#6B6B6B
@property(nonatomic,strong) id buttonTextColor;

//14
@property(nonatomic,assign) CGFloat buttonFontSize;

//34
@property(nonatomic,assign) CGFloat buttonHeight;


//8
@property(nonatomic,assign) CGFloat gap;

@property(nonatomic,weak) id<LQSMenuDetailViewDataSource> dataSource;
@property(nonatomic,weak) id<LQSMenuDetailViewDelegate> delegate;

- (void) show;

@end
