//
//  CommonFormView.h
//  juhao
//
//  Created by muzico on 2018/11/30.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommonFormView;

@protocol CommonFormViewDelegate<NSObject>

@optional
- (void) commonFormView:(CommonFormView *)formView didSelectItem:(UIView*)view atIndex:(NSInteger)index;

@end

@interface CommonFormView : UIView

/*

@property (assign, nonatomic) NSUInteger row;

@property (assign, nonatomic) NSUInteger column;

@property (strong, nonatomic) NSArray *items;

@property (assign, nonatomic) CGFloat itemGap;

@property (assign, nonatomic) UIEdgeInsets inset;

@property (weak, nonatomic) id<CommonFormViewDelegate> delegate;
 */

@end
