//
//  CommonFixView.h
//  juhao
//
//  Created by muzico on 2018/12/4.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommonFixViewItem : NSObject

@property (strong, nonatomic) UIView *view;

@property (assign, nonatomic) CGFloat height;

@property (assign, nonatomic) UIEdgeInsets inset;

@end

@interface CommonFixView : UIView

@property(nonatomic,strong) NSArray<CommonFixViewItem *> *items;

/**
 会将填充其余的位置。
 */
@property(nonatomic,strong) UIView *otherView;

@property(nonatomic,strong) NSArray<CommonFixViewItem *> *footItems;

@end
