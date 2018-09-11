//
//  LQSTabBarController.h
//  LQSKit
//
//  Created by muzico on 2018/7/22.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, LQSTabBarContentStyle) {
    LQSTabBarContentStyleNone,
    LQSTabBarContentStyleButtonTitle,
};

@interface LQSTabBarController : UITabBarController

@property(nonatomic,assign) LQSTabBarContentStyle contentStyle;

@property(nonatomic,assign,readonly) BOOL loadViewDidAction;

@property(nonatomic,strong,readonly) UIView* tabBarArea;

//默认高度为49。
@property(nonatomic,assign) CGFloat tabBarAreaHeight;

- (void) setupTabBarView:(UIView*)view withHeight:(CGFloat)height;
- (void) setupTabBarView:(UIView*)view;


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

@end
