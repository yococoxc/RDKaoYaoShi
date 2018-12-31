//
//  RD__SelectedCourseController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/14.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__SelectedCourseController.h"
#import "RD__SelectedCourseView.h"

#import "CourseTypeRequest.h"

@interface RD__SelectedCourseController ()<LQSRequestImplementDelegate>

@property(nonatomic,strong) RD__SelectedCourseView* myView;

@end

@implementation RD__SelectedCourseController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.headView.style = LQSHeadViewStyleLeftBack;
    self.headTitle = @"选择学习项目";
    
    RD__SelectedCourseView* myView = [RD__SelectedCourseView new];
    [self setupBodyView:myView];
    self.myView = myView;
    
    CourseTypeRequest* request = [CourseTypeRequest new];
    request.tag = @"CourseTypeRequest";
    [request request];
}

- (void) pressedButtonToDoSomethingWithLeftButton:(UIButton *)sender {
    [self lqs_currentNavigationControllerPopViewController];
}



#pragma mark - LQSRequestImplementDelegate
- (void) lqsRequestImplement:(LQSRequestImplement *)request error:(NSError *)error {
    
}
- (void) lqsRequestImplement:(LQSRequestImplement *)request success:(id)result {
    
}
- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary *)result {
    if ([result lqs_isNSDictionary] == NO) {
        return;
    }
    if ([request.tag lqs_isEqualToString:@"CourseTypeRequest"]) {
        NSString* code = [result lqs_toStringWithObjectForKey:@"code"];
        if ([code lqs_isEqualToString:@"1"]) {
            NSDictionary* data = [result objectForKey:@"data"];
            if ([data lqs_isNSDictionary]) {
                NSArray* list = [data objectForKey:@"list"];
                
            }
        }
        return;
    }
}


@end
