//
//  RD__MainController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__MainController.h"

#import "RD__HomeController.h"
#import "RD__QuestionBankController.h"
#import "RD__LiveBroadcastController.h"
#import "RD__CourseController.h"
#import "RD__MineController.h"



@interface RD__MainController ()

@end

@implementation RD__MainController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    NSArray* viewControllers = @[[RD__HomeController new],
                                 [RD__QuestionBankController new],
                                 [RD__LiveBroadcastController new],
                                 [RD__CourseController new],
                                 [RD__MineController new]];
    self.viewControllers = viewControllers;
}


- (NSArray*) setupMenuWithDataSource {
    return @[@{@"text": @"首页",@"image": @"Tab_homePage",@"selectedImage":@"Tab_selHomPage"},
             @{@"text": @"题库",@"image": @"Tab_question",@"selectedImage":@"Tab_selQuestion"},
             @{@"text": @"直播",@"image": @"Tab_liveStreaming",@"selectedImage":@"Tab_selLiveStreaming"},
             @{@"text": @"课程",@"image": @"Tab_course",@"selectedImage":@"Tab_selCourse"},
             @{@"text": @"我的",@"image": @"Tab_mine",@"selectedImage":@"Tab_selMine"},
             ];
}



@end
