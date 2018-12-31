//
//  LQSSideSlipView.h
//  LQSKit
//
//  Created by muzico on 2018/12/26.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LQSSideSlipView : UIView

@property(nonatomic,readonly) UIView *leftView;

@property(nonatomic,readonly) UIView *rightView;

@property(nonatomic,assign) CGFloat rightViewWidth;

- (void) loadLeftView:(UIView *)view;

- (void) loadRightView:(UIView *)view;

- (void) loadRightView:(UIView *)view width:(CGFloat)width;

//关闭侧滑
- (void)close;

//打开侧滑
- (void)open;

@end
