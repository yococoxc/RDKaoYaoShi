//
//  UITextField+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/8/9.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (LQS)

+ (instancetype) lqs__view;

- (void) lqs__setupWithTextField:(void(^)(UITextField* textField))aBlock;



@property(nonatomic) CGFloat lqs__fontSize;
@property(nonatomic) id lqs__textColor;

@end
