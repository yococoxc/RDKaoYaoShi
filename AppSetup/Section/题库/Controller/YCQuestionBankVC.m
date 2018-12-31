//
//  YCQuestionBankVC.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/12/26.
//  Copyright © 2018 muzico. All rights reserved.
//

#import "YCQuestionBankVC.h"
#import "YCQuestionBankView.h"

@interface YCQuestionBankVC ()

@end

@implementation YCQuestionBankVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    LQSSideSlipView *sideSlipView = [LQSSideSlipView new];
    
    [sideSlipView loadLeftView:[YCQuestionBankView new]];
    [sideSlipView loadRightView:[UIView lqs_backgroundColor:@"R"]];
    
    [self lqs_boxControllerWithFillView:sideSlipView];
}

@end
