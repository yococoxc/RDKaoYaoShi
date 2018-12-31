//
//  CommonMainController.m
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "CommonMainController.h"

@interface CommonMainController ()
{
    BOOL isSetupMenuViewHeight;
}
@property(nonatomic,strong,readwrite) CommonMainMenuView* menuView;

@end

@implementation CommonMainController

@synthesize menuViewHeight = _menuViewHeight;

+ (instancetype) shareController {
    static id instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once (&onceToken, ^{
        instance = [[[self class] alloc] init];
    });
    return instance;
}



- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.tabBar.hidden = YES;
    
    
    UIEdgeInsets safeAreaInsets = LQS_SafeAreaInsets();
    
    CommonMainMenuView* menuView = [CommonMainMenuView new];
    menuView.dataSource = [self setupMenuWithDataSource];
    menuView.delegate = self;
    [self.view addSubview:menuView];
    [menuView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.mas_equalTo(0);
        make.height.mas_equalTo(self.menuViewHeight);
        make.bottom.mas_equalTo(-safeAreaInsets.bottom);
    }];
    self.menuView = menuView;
    
}


- (void) setViewControllers:(NSArray<__kindof UIViewController *> *)viewControllers {
    [super setViewControllers:viewControllers];
    
    for (LQSViewController* controller in viewControllers) {
        if ([controller isKindOfClass:[LQSViewController class]]) {
            UIEdgeInsets insets = controller.contentViewInsets;
            insets.bottom = 49;
            controller.contentViewInsets = insets;
        }
    }
    
}


- (NSArray*) setupMenuWithDataSource {
    return nil;
    
}

#pragma mark - CommonMainMenuViewDelegate
- (BOOL) commonMainMenuView:(CommonMainMenuView *)view didSelectWithIndex:(NSUInteger)index {
    self.selectedIndex = index;
    
    return YES;
}

#pragma mark -
- (void) setMenuViewHeight:(CGFloat)menuViewHeight {
    _menuViewHeight = menuViewHeight;
    
    isSetupMenuViewHeight = YES;
}
- (CGFloat) menuViewHeight {
    if (isSetupMenuViewHeight == YES) {
        return _menuViewHeight;
    } else {
        return 49;
    }
}

@end
