//
//  UIViewController+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (LQS)

- (void) lqs__setupWithViewController:(void(^)(UIViewController* viewController))aBlock;

@end
