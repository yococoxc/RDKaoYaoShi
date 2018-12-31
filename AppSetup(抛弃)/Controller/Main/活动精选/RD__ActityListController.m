//
//  RD__ActityListController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__ActityListController.h"
#import "RD__ActityListView.h"

@interface RD__ActityListController ()

@property(nonatomic,strong) RD__ActityListView* myView;

@end

@implementation RD__ActityListController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.headView.style = LQSHeadViewStyleLeftBack;
    self.headTitle = @"活动精选";
    
    RD__ActityListView* myView = [RD__ActityListView new];
    [self  setupBodyView:myView];
    self.myView = myView;
    
    
}


- (void) pressedButtonToDoSomethingWithLeftButton:(UIButton *)sender {
    
    [self lqs_currentNavigationControllerPopViewController];
}

@end
