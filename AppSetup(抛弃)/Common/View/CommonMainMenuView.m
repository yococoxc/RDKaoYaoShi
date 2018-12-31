//
//  CommonMainMenuView.m
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "CommonMainMenuView.h"

@implementation CommonMainMenuView


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
    
}


- (void) setDataSource:(NSArray *)dataSource {
    _dataSource = dataSource;
    
    for (UIView* subview in self.contentView.subviews) {
        [subview removeFromSuperview];
    }
    
    
    if ([dataSource isKindOfClass:[NSArray class]] == NO) {
        return;
    }
    
    NSUInteger count = [dataSource count];
    
    UIView* preView = nil;
    for (NSUInteger index = 0; index < count; index++) {
        NSDictionary* dictionary = [dataSource objectAtIndex:index];
        NSString* text = nil;
        NSString* image = nil;
        NSString* selectedImage = nil;
        
        if ([dictionary isKindOfClass:[NSDictionary class]]) {
            text = [dictionary objectForKey:@"text"];
            image = [dictionary objectForKey:@"image"];
            selectedImage = [dictionary objectForKey:@"selectedImage"];
        }
        
        CommonMainMenuViewItem* button = [CommonMainMenuViewItem new];
        button.tag = index;
        button.titleLabel.text = text;
        button.selectImage = [LQS image:selectedImage];
        button.deselectImage = [LQS image:image];
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


- (CommonMainMenuViewItem*) itemWithTag:(NSUInteger)tag {
    CommonMainMenuViewItem* temp = nil;
    
    for (CommonMainMenuViewItem* item in self.contentView.subviews) {
        if ([item isKindOfClass:[CommonMainMenuViewItem class]]) {
            if (item.tag == tag) {
                temp = item;
            }
        }
    }
    
    return temp;
}

- (void) selectedWithTag:(NSUInteger)tag {
    CommonMainMenuViewItem* item = [self itemWithTag:tag];
    if (item) {
        [self pressedButtonToDoSomething:item];
    }
}

- (void) pressedButtonToDoSomething:(CommonMainMenuViewItem*)sender {
    
    
    BOOL isOK = NO;
    if (self.delegate && [self.delegate respondsToSelector:@selector(commonMainMenuView:didSelectWithIndex:)]) {
        isOK = [self.delegate commonMainMenuView:self didSelectWithIndex:sender.tag];
    }
    
    if (isOK == NO) {
        return;
    }
    
    for (CommonMainMenuViewItem* item in self.contentView.subviews) {
        if ([item isKindOfClass:[CommonMainMenuViewItem class]]) {
            if (item == sender) {
                [item selectIt];
            } else {
                [item deselectIt];
            }
        }
    }
}

@end
