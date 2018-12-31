//
//  CommonFormView2.h
//  juhao
//
//  Created by muzico on 2018/12/5.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommonFormView2;

typedef void(^CommonFormView2DidSelectBlock)(CommonFormView2 *formView, UIView *view, NSInteger index);

@interface CommonFormView2 : UIView

@property (assign, nonatomic) NSUInteger row;

@property (assign, nonatomic) NSUInteger column;

@property (strong, nonatomic) NSArray<UIView *> *items;

@property (assign, nonatomic) CGFloat itemGap;

@property (assign, nonatomic) UIEdgeInsets insets;

@property(nonatomic,copy) CommonFormView2DidSelectBlock didSelectBlock;

//@property (weak, nonatomic) id<CommonFormViewDelegate> delegate;

- (void) reloadData;

@end
