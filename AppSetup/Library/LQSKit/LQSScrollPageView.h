//
//  LQSScrollPageView.h
//  LQSKit
//
//  Created by muzico on 2018/7/25.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicViewTemplate.h"

@class LQSScrollPageView;

@protocol LQSScrollPageViewDataSource <NSObject>
@required
- (NSUInteger) numberOfViewsInLQSScrollPageView:(LQSScrollPageView *)view;

- (UIView*) lqsScrollPageView:(LQSScrollPageView *)view viewAtIndex:(NSUInteger)index;

@end

@protocol LQSScrollPageViewDelegate <NSObject>

@optional
- (void) lqsScrollPageView:(LQSScrollPageView *)view scrollToIndex:(NSUInteger)index;

@end


@interface LQSScrollPageView : LQSBasicViewTemplate

@property(nonatomic,strong,readonly) UIScrollView* scrollView;

@property(nonatomic,weak) id<LQSScrollPageViewDataSource> dataSource;

@property(nonatomic,weak) id<LQSScrollPageViewDelegate> delegate;


@property(nonatomic,assign) NSUInteger currentPage;


- (id) viewWithIndex:(NSUInteger)index;

@end
