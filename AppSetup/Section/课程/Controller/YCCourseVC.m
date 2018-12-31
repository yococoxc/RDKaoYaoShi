//
//  YCCourseVC.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/12/26.
//  Copyright © 2018 muzico. All rights reserved.
//

#import "YCCourseVC.h"

@interface YCCourseVC ()

@end

@implementation YCCourseVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    LQSBoxView *box = [LQSBoxView new];
    [box loadHeadView:[UIView lqs_backgroundColor:@"R"]];
    box.headViewHeight = 44;
    
    
    
    [self lqs_boxControllerWithFillView:box];
}

@end
