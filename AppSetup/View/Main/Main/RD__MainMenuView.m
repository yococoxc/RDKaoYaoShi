//
//  RD__MainMenuView.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__MainMenuView.h"

@implementation RD__MainMenuView

- (void) initializeWithView {
    [super initializeWithView];
    
    self.backgroundColor = [UIColor whiteColor];
    
    UIView* line = [UIView new];
    line.backgroundColor = [LQS color:@"#cac8cb"];
    [self addSubview:line];
    [line mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.top.mas_equalTo(0);
        make.height.mas_equalTo(1);
    }];
    
    
    NSArray* array = @[@"首页",@"题库",@"直播",@"课程",@"我的"];
    NSArray* iconArray = @[@"Tab_homePage",@"Tab_question",@"Tab_liveStreaming",@"Tab_course",@"Tab_mine"];
    NSArray* iconSelectArray = @[@"Tab_selHomPage",@"Tab_selQuestion",@"Tab_selLiveStreaming",@"Tab_selCourse",@"Tab_selMine"];
    
    NSUInteger count = [array count];
    
    UIView* preView = nil;
    for (NSUInteger index = 0; index < count; index++) {
        NSString* text = [array objectAtIndex:index];
        RD__MainMenuViewItem* button = [RD__MainMenuViewItem new];
        button.tag = index;
        button.titleLabel.text = text;
        button.selectImage = [UIImage imageNamed:[iconSelectArray objectAtIndex:index]];
        button.deselectImage = [UIImage imageNamed:[iconArray objectAtIndex:index]];
        [button addTarget:self action:@selector(pressedButtonToDoSomething:) forControlEvents:UIControlEventTouchUpInside];
        [self.contentView addSubview:button];
        if (index == 0) {
            [button selectIt];
            [button mas_makeConstraints:^(MASConstraintMaker *make) {
                make.left.top.bottom.mas_equalTo(0);
            }];
        } else if (index == count - 1) {
            [button deselectIt];
            [button mas_makeConstraints:^(MASConstraintMaker *make) {
                make.right.top.bottom.mas_equalTo(0);
                make.width.mas_equalTo(preView.mas_width);
                make.left.mas_equalTo(preView.mas_right);
            }];
        } else {
            [button deselectIt];
            [button mas_makeConstraints:^(MASConstraintMaker *make) {
                make.top.bottom.mas_equalTo(0);
                make.width.mas_equalTo(preView.mas_width);
                make.left.mas_equalTo(preView.mas_right);
            }];
        }
        preView = button;
    }
}


- (RD__MainMenuViewItem*) itemWithTag:(NSUInteger)tag {
    RD__MainMenuViewItem* temp = nil;
    
    for (RD__MainMenuViewItem* item in self.contentView.subviews) {
        if ([item isKindOfClass:[RD__MainMenuViewItem class]]) {
            if (item.tag == tag) {
                temp = item;
            }
        }
    }
    
    return temp;
}

- (void) selectedWithTag:(NSUInteger)tag {
    RD__MainMenuViewItem* item = [self itemWithTag:tag];
    if (item) {
        [self pressedButtonToDoSomething:item];
    }
}

- (void) pressedButtonToDoSomething:(RD__MainMenuViewItem*)sender {
    
    
    BOOL isOK = NO;
    if (self.delegate && [self.delegate respondsToSelector:@selector(rd__MainMenuView:didSelectWithIndex:)]) {
        isOK = [self.delegate rd__MainMenuView:self didSelectWithIndex:sender.tag];
    }
    
    if (isOK == NO) {
        return;
    }
    
    for (RD__MainMenuViewItem* item in self.contentView.subviews) {
        if ([item isKindOfClass:[RD__MainMenuViewItem class]]) {
            if (item == sender) {
                [item selectIt];
            } else {
                [item deselectIt];
            }
        }
    }
}

@end
