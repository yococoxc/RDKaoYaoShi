//
//  LQSNavigationController.h
//  LQSKit
//
//  Created by muzico on 2018/12/18.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LQSNavigationController : UINavigationController

+ (instancetype) createWithRootController:(UIViewController *)viewController;

+ (instancetype) createWithRootController:(UIViewController *)viewController title:(NSString *)title titleColor:(id)titleColor selectedTitleColor:(id)selectedTitleColor image:(id)image selectedImage:(id)selectedImage;

@end
