//
//  CommonControlBarView.h
//  juhao
//
//  Created by muzico on 2018/12/5.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommonControlBarView;

typedef void(^CommonControlBarViewDidSelectBlock)(CommonControlBarView *controlBar, NSString* title, NSInteger index);

@interface CommonControlBarView : UIView

@property (strong, nonatomic) NSArray<NSString *> *titles;

@property(nonatomic,assign) UIEdgeInsets contentInsets;

@property(nonatomic,assign) CGFloat gap;

@property(nonatomic,assign) NSInteger currentIndex;

@property(nonatomic,copy) CommonControlBarViewDidSelectBlock didSeletBlock;

@property(nonatomic,strong) UIFont *buttonFont;

@end
