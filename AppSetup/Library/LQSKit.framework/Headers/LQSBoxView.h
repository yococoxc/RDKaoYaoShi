//
//  LQSBoxView.h
//  LQSKit
//
//  Created by muzico on 2018/12/3.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LQSBoxView : UIView

@property (strong, nonatomic, readonly) UIView *headView;
@property (strong, nonatomic, readonly) UIView *bodyView;
@property (strong, nonatomic, readonly) UIView *footView;


@property (nonatomic, assign) UIEdgeInsets headViewInsets;
@property (nonatomic, assign) UIEdgeInsets bodyViewInsets;
@property (nonatomic, assign) UIEdgeInsets footViewInsets;


@property (assign, nonatomic) CGFloat headViewHeight;
@property (assign, nonatomic) CGFloat footViewHeight;

@property (nonatomic) BOOL headViewHidden;
@property (nonatomic) BOOL footViewHidden;


- (void) loadHeadView:(UIView *)view;
- (void) loadBodyView:(UIView *)view;
- (void) loadFootView:(UIView *)view;

@end
