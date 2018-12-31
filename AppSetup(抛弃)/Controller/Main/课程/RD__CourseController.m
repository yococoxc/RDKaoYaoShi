//
//  RD__CourseController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__CourseController.h"
#import "RD__CourseView.h"
#import "RD__SelectedCourseController.h"

@interface RD__CourseController ()

@property(nonatomic,strong) RD__CourseView* myView;

@end

@implementation RD__CourseController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.headTitle = @"课程";
    
    self.headView.style = LQSHeadViewStyleLeft;
    self.headView.leftButton.lqs_textColor = @"#000";
    self.headView.leftButton.lqs_text = @"AAAA";
    
    
    RD__CourseView* myView = [RD__CourseView new];
    [self setupBodyView:myView];
    self.myView = myView;
    
}


- (void) pressedButtonToDoSomethingWithLeftButton:(UIButton *)sender {
    RD__SelectedCourseController* controller = [RD__SelectedCourseController new];
    [self lqs_currentNavigationControllerPushViewController:controller];
}

@end
