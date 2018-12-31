//
//  UIViewController+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (LQS)

@property(nonatomic,assign) BOOL lqs_hasBoxController;


- (void) lqs_setupWithViewController:(void(^)(UIViewController* viewController))aBlock;


- (instancetype) lqs_initWithNib;
- (instancetype) lqs_initWithNibName:(NSString *)nibNameOrNil;

+ (instancetype) lqs_controllerWithNib;
+ (instancetype) lqs_controllerWithNibName:(NSString*)nibNameOrNil;

/**
 仅仅适用于 LQSBoxController 所持有的对象。
 */
- (void) lqs_boxControllerWithBoxViewReloadLayout;

- (void) lqs_boxControllerWithFillView:(UIView *)view;

@end
