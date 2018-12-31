//
//  LQSBoxController.h
//  LQSKit
//
//  Created by muzico on 2018/12/3.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSBoxView.h"

@interface LQSBoxController : UIViewController

@property (nonatomic, readonly) LQSBoxView *boxView;

@property (nonatomic, assign) UIEdgeInsets boxViewInsets;

@property (nonatomic, readonly) UIView *aboveBoxView;

@property (nonatomic, readonly) UIView *belowBoxView;

/*
 用于创建对象时 createWithBody 等方法，判断到body的参数为UIViewController，就便利的操作。
 **/
@property (nonatomic, strong) UIViewController* bodyController;

+ (instancetype) createWithBody:(id)bodyViewOrController;
+ (instancetype) createWithBody:(id)bodyViewOrController head:(UIView*)head headHeight:(CGFloat)headHeight;

@end
