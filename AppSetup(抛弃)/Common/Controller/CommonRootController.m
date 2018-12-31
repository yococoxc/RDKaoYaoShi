//
//  CommonRootController.m
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "CommonRootController.h"

@interface CommonRootController ()

@end

@implementation CommonRootController


+ (instancetype) shareController {
    static id instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once (&onceToken, ^{
        instance = [[[self class] alloc] initWithRootViewController:[self mainController]];
    });
    return instance;
}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.navigationBarHidden = YES;
}


#pragma mark -
- (BOOL) shouldAutorotate {
    return YES;
}
- (UIInterfaceOrientationMask) supportedInterfaceOrientations {
    return UIInterfaceOrientationMaskPortrait;
}


#pragma mark -
+ (UIViewController*) mainController {
    return nil;
}



@end
