//
//  CommonRootController.h
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommonRootController : UINavigationController

+ (instancetype) shareController;

/**
 继承该类，并且重写这个类方法，为RootController设置一个 rootViewController 。
 */
+ (UIViewController*) mainController;

@end
