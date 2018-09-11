//
//  LQSMenuScrollPageView.h
//  LQSKit
//
//  Created by muzico on 2018/7/25.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicViewTemplate.h"
#import "LQSMenu.h"
#import "LQSScrollPageView.h"

@class LQSMenuScrollPageView;

@protocol LQSMenuScrollPageViewSource <NSObject>
@required
- (NSUInteger) numberOfViewsInLQSMenuScrollPageView:(LQSMenuScrollPageView *)view;

- (UIView*) lqsMenuScrollPageView:(LQSMenuScrollPageView *)view viewOfScrollPageAtIndex:(NSUInteger)index;

@optional
//LQSMenuStyleAverageCustom、LQSMenuStyleDynamicCustom
- (UIView*) lqsMenuScrollPageView:(LQSMenuScrollPageView *)view viewOfMenuAtIndex:(NSUInteger)index;
//适用于LQSMenuStyleAverageDefault、LQSMenuStyleDynamicDefault
- (NSString* ) lqsMenuScrollPageView:(LQSMenuScrollPageView *)view textOfMenuAtIndex:(NSUInteger)index;

//指定大小。仅适用于LQSMenuStyleDynamicCustom。
- (CGFloat) lqsMenuScrollPageView:(LQSMenuScrollPageView *)view dynamicWidthOfViewInLQSMenuAtIndex:(NSUInteger)index;


//可以修改默认的 LQSMenuDetailView 实例。
- (void) lqsMenuScrollPageView:(LQSMenuScrollPageView *)view setupWithLQSMenuDetailView:(LQSMenuDetailView*)detailView;

@end


@protocol LQSMenuScrollPageViewDelegate <NSObject>

@optional
- (void) lqsMenuScrollPageView:(LQSMenuScrollPageView *)view didSelectOrScrollToIndex:(NSInteger)index;


//默认执行 menu 的 currentSelect 为 0 值。返回 NO，将不会执行默认设置。
- (BOOL) actionOfLeftButtonInLQSMenuScrollPageView:(LQSMenuScrollPageView *)view;

//默认调用 LQSMenuDetailView 实例。使用于 style 为 Default。返回 NO，将不会执行默认设置。
- (BOOL) actionOfRightButtonInLQSMenuScrollPageView:(LQSMenuScrollPageView *)view;


@end



@interface LQSMenuScrollPageView : LQSBasicViewTemplate

@property(nonatomic,strong,readonly) LQSMenu* menu;

@property(nonatomic,strong,readonly) LQSScrollPageView* scrollPageView;

//35
@property(nonatomic,assign) CGFloat menuHeight;


@property(nonatomic,weak) id<LQSMenuScrollPageViewSource> dataSource;

@property(nonatomic,weak) id<LQSMenuScrollPageViewDelegate> delegate;

@end
