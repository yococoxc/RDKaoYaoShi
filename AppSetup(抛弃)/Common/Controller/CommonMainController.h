//
//  CommonMainController.h
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CommonMainMenuView.h"

@interface CommonMainController : UITabBarController<CommonMainMenuViewDelegate>

@property(nonatomic,strong,readonly) CommonMainMenuView* menuView;

//49
@property(nonatomic,assign) CGFloat menuViewHeight;

+ (instancetype) shareController;

/**
 继承该类，重写该方法。
 配置menu的数据。
 */
- (NSArray*) setupMenuWithDataSource;

@end
