//
//  MainTabBarController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/12/26.
//  Copyright © 2018 muzico. All rights reserved.
//

#import "MainTabBarController.h"

#import "YCHomeVC.h"
#import "YCQuestionBankVC.h"
#import "YCLiveVC.h"
#import "YCCourseVC.h"
#import "YCMineVC.h"

@interface MainTabBarController ()

@property(nonatomic,strong) MainNavigationController *homeNC;
@property(nonatomic,strong) MainNavigationController *questionBankNC;
@property(nonatomic,strong) MainNavigationController *liveNC;
@property(nonatomic,strong) MainNavigationController *courseNC;
@property(nonatomic,strong) MainNavigationController *mineNC;

@end

@implementation MainTabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
    [self setupWithChlidViewControllers];
}

#pragma mark -
- (void) setupWithChlidViewControllers {
    NSMutableArray *childVCs = [NSMutableArray array];
    [childVCs addObject:self.homeNC];
    [childVCs addObject:self.questionBankNC];
    [childVCs addObject:self.liveNC];
    [childVCs addObject:self.courseNC];
    [childVCs addObject:self.mineNC];
    self.viewControllers = childVCs;
}


#pragma mark - 懒加载
- (MainNavigationController *) homeNC {
    if (_homeNC == nil) {
        YCHomeVC *vc = [YCHomeVC new];
        LQSBoxController *boxVC = [MainBoxController createWithBody:vc];
        MainNavigationController *navC = [MainNavigationController createWithRootController:boxVC title:@"首页" titleColor:nil selectedTitleColor:CommonTabBarTitleSelectedColor image:@"Tab_homePage" selectedImage:@"Tab_selHomPage"];
        _homeNC = navC;
    }
    return _homeNC;
}
- (MainNavigationController *) questionBankNC {
    if (_questionBankNC == nil) {
        YCQuestionBankVC *vc = [YCQuestionBankVC new];
        LQSBoxController *boxVC = [MainBoxController createWithBody:vc];
        MainNavigationController *navC = [MainNavigationController createWithRootController:boxVC title:@"题库" titleColor:nil selectedTitleColor:CommonTabBarTitleSelectedColor image:@"Tab_question" selectedImage:@"Tab_selQuestion"];
        _questionBankNC = navC;
    }
    return _questionBankNC;
}
- (MainNavigationController *) liveNC {
    if (_liveNC == nil) {
        YCLiveVC *vc = [YCLiveVC new];
        LQSBoxController *boxVC = [MainBoxController createWithBody:vc];
        MainNavigationController *navC = [MainNavigationController createWithRootController:boxVC title:@"直播" titleColor:nil selectedTitleColor:CommonTabBarTitleSelectedColor image:@"Tab_liveStreaming" selectedImage:@"Tab_selLiveStreaming"];
        _liveNC = navC;
    }
    return _liveNC;
}
- (MainNavigationController *) courseNC {
    if (_courseNC == nil) {
        YCCourseVC *vc = [YCCourseVC new];
        LQSBoxController *boxVC = [MainBoxController createWithBody:vc];
        MainNavigationController *navC = [MainNavigationController createWithRootController:boxVC title:@"课程" titleColor:nil selectedTitleColor:CommonTabBarTitleSelectedColor image:@"Tab_course" selectedImage:@"Tab_selCourse"];
        _courseNC = navC;
    }
    return _courseNC;
}
- (MainNavigationController *) mineNC {
    if (_mineNC == nil) {
        YCMineVC *vc = [YCMineVC new];
        LQSBoxController *boxVC = [MainBoxController createWithBody:vc];
        MainNavigationController *navC = [MainNavigationController createWithRootController:boxVC title:@"我的" titleColor:nil selectedTitleColor:CommonTabBarTitleSelectedColor image:@"Tab_mine" selectedImage:@"Tab_selMine"];
        _mineNC = navC;
    }
    return _mineNC;
}


@end
