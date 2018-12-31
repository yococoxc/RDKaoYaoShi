//
//  UIAlertView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/8/9.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (LQS)

+ (void) lqs_showWithTitle:(NSString*)title message:(NSString*)message cancelButtonTitle:(NSString*)cancelButtonTitle;

+ (void) lqs_showWithTitle:(NSString*)title message:(NSString*)message cancelButtonTitle:(NSString*)cancelButtonTitle otherButtonTitle:(NSString*)otherButtonTitle;

@end
