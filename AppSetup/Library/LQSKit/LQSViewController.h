//
//  LQSViewController.h
//  LQSKit
//
//  Created by muzico on 2018/7/22.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSView.h"

@interface LQSViewController : UIViewController

@property(nonatomic,strong,readonly) LQSView* contentView;

@property(nonatomic,assign) UIEdgeInsets contentViewInsets;

@property(nonatomic,assign,readonly) BOOL loadViewDidAction;


#pragma mark - loadView 之前
- (void) initializeWithController;
#pragma mark - loadView
- (void) initializeWithView;
#pragma mark - viewDidLoad
- (void) initializeWithData;
#pragma mark - viewWillAppear 只执行一次
- (void) initializeWithViewWillAppearOnce;
#pragma mark - viewDidAppear 只执行一次
- (void) initializeWithViewDidAppearOnce;

//当视图需要重新布局时会额外调用该方法。
- (void) reloadLayoutWithView;


#pragma mark - 调用 LQSView 的方法
- (void) setupHeadView:(UIView*)view withHeight:(CGFloat)height;
- (void) setupBodyView:(UIView*)view;
- (void) setupFootView:(UIView*)view withHeight:(CGFloat)height;

@end
