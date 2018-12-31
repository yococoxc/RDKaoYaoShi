//
//  CommonScrollView2.h
//  juhao
//
//  Created by muzico on 2018/12/4.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, CommonScrollViewDirection) {
    CommonScrollViewDirectionDirectionHorizontal,
    CommonScrollViewDirectionDirectionVertical,
};


@interface CommonScrollViewItem : NSObject

@property(nonatomic, strong) UIView *view;
@property(nonatomic, assign) CGFloat height;
@property(nonatomic, assign) UIEdgeInsets insets;

@end


@interface CommonScrollView2 : UIScrollView

@property (strong, nonatomic) NSArray<CommonScrollViewItem *> *items;

@property(nonatomic,assign) CommonScrollViewDirection direction;


- (void) reloadData;

- (void) reloadLayout;

@end
