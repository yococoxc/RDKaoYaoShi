//
//  LQSController.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSPredefined.h"

@interface LQSController : UIViewController

@property(nonatomic,strong,readonly) UIView* contentView;

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

- (void) setupBodyView:(UIView*)view;

@end
