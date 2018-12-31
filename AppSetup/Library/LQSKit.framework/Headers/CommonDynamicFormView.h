//
//  CommonDynamicFormView.h
//  juhao
//
//  Created by muzico on 2018/12/4.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommonDynamicFormView;

typedef void(^CommonDynamicFormViewDidSelectBlock)(CommonDynamicFormView *formView, id view, NSInteger index);

@interface CommonDynamicFormView : UIView

//0
@property (assign, nonatomic) NSUInteger column;

@property (strong, nonatomic) NSArray<UIView *> *items;

//8
@property (assign, nonatomic) CGFloat itemGap;

//{8,8,8,8}
@property (assign, nonatomic) UIEdgeInsets inset;

//44
@property(nonatomic,assign) CGFloat itemHeight;

//0。0的时候不触发效果。
@property(nonatomic,assign) CGFloat itemSizeScale;


@property(nonatomic,readonly) CGFloat viewHeight;

@property(nonatomic,copy) CommonDynamicFormViewDidSelectBlock didSelectBlock;


- (CGFloat) viewHeightWithViewWidth:(CGFloat) width;


- (void) reloadData;

- (void) reloadLayout;

@end
