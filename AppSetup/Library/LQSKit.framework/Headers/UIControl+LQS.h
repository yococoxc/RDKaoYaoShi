//
//  UIControl+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (LQS)

- (void) lqs_addTarget:(id)target action:(SEL)action;



- (void) lqs_setupWithControl:(void(^)(UIControl* control))aBlock;

@end
