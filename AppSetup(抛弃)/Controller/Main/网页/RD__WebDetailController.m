//
//  RD__WebDetailController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__WebDetailController.h"

@interface RD__WebDetailController ()

@end

@implementation RD__WebDetailController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.headView.style = LQSHeadViewStyleLeftBack;
    
    [self loadRequestURLString:self.url];
}


- (void) pressedButtonToDoSomethingWithLeftButton:(UIButton *)sender {
    [self lqs_currentNavigationControllerPopViewController];
}

@end
