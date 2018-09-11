//
//  LQSHeadViewController.h
//  LQSKit
//
//  Created by muzico on 2018/7/23.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSViewController.h"
#import "LQSHeadView.h"

@interface LQSHeadViewController : LQSViewController

/******
 headView
 默认高度为44。
 ===    建议在 initializeWithView 配置内容。
 ***/
@property(nonatomic,strong,readonly) LQSHeadView* headView;


@property(nonatomic,strong) NSString* headTitle;


#pragma mark - 预设按钮事件，根据 headView 的 style 相应绑定。
- (void) pressedButtonToDoSomethingWithLeftButton:(UIButton*)sender;
- (void) pressedButtonToDoSomethingWithLeftButton2:(UIButton*)sender;
- (void) pressedButtonToDoSomethingWithRightButton:(UIButton*)sender;
- (void) pressedButtonToDoSomethingWithRightButton2:(UIButton*)sender;

@end
