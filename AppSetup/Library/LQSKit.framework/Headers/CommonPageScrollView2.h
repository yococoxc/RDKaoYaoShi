//
//  CommonPageScrollView2.h
//  juhao
//
//  Created by muzico on 2018/12/4.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, CommonPageScrollViewDirection) {
    CommonPageScrollViewDirectionHorizontal,
    CommonPageScrollViewDirectionVertical,
};

@class CommonPageScrollView2;

typedef void(^CommonPageScrollView2ScrollPageBlock)(CommonPageScrollView2 *scrollView, NSInteger page);

@interface CommonPageScrollView2 : UIScrollView


@property(strong, nonatomic) NSArray* items;

@property(assign ,nonatomic) CommonPageScrollViewDirection direction;

@property(copy ,nonatomic) CommonPageScrollView2ScrollPageBlock scrollPageBlock;


- (void) reloadData;
- (void) reloadLayout;

@end
