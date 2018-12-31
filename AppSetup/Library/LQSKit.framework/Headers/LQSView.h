//
//  LQSView.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSBasicViewTemplate.h"

@interface LQSView : LQSBasicViewTemplate

#pragma mark -
@property(nonatomic,strong,readonly) UIView* headArea;
@property(nonatomic,strong,readonly) UIView* headArea2;
@property(nonatomic,strong,readonly) UIView* headArea3;

@property(nonatomic,strong,readonly) UIView* bodyArea;
@property(nonatomic,strong,readonly) UIView* footArea;
@property(nonatomic,strong,readonly) UIView* footArea2;
@property(nonatomic,strong,readonly) UIView* footArea3;

@property(nonatomic,assign) CGFloat headHeight;
@property(nonatomic,assign) CGFloat headHeight2;
@property(nonatomic,assign) CGFloat headHeight3;
@property(nonatomic,assign) CGFloat footHeight;
@property(nonatomic,assign) CGFloat footHeight2;
@property(nonatomic,assign) CGFloat footHeight3;

#pragma mark -
- (void) setupHeadView:(UIView*)view;
- (void) setupHeadView2:(UIView*)view;
- (void) setupHeadView3:(UIView*)view;

- (void) setupHeadView:(UIView*)view withHeight:(CGFloat)height;
- (void) setupHeadView2:(UIView*)view withHeight:(CGFloat)height;
- (void) setupHeadView3:(UIView*)view withHeight:(CGFloat)height;

- (void) setupBodyView:(UIView*)bodyArea;

- (void) setupFootView:(UIView*)view;
- (void) setupFootView2:(UIView*)view;
- (void) setupFootView3:(UIView*)view;

- (void) setupFootView:(UIView*)view withHeight:(CGFloat)height;
- (void) setupFootView2:(UIView*)view withHeight:(CGFloat)height;
- (void) setupFootView3:(UIView*)view withHeight:(CGFloat)height;


@end
