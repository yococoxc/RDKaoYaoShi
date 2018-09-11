//
//  RD__HomeController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeController.h"

#import "RD__HomeView.h"


@interface RD__HomeController ()

@property(nonatomic,strong) RD__HomeView* myView;

@end

@implementation RD__HomeController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    RD__HomeView* myView = [RD__HomeView new];
    [self setupBodyView:myView];
    self.myView = myView;
}

@end
