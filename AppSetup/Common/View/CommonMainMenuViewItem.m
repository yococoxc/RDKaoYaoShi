//
//  CommonMainMenuViewItem.m
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "CommonMainMenuViewItem.h"

@interface CommonMainMenuViewItem ()

@property(nonatomic,strong,readwrite) UIImageView* icon;

@property(nonatomic,strong,readwrite) UILabel* titleLabel;

@property(nonatomic,strong,readwrite) UILabel* numberLabel;

@end

@implementation CommonMainMenuViewItem

- (void) initializeWithView {
    [super initializeWithView];
    
    
    _numberLabelTextColor = @"#fff";
    _numberLabelBackgroundColor = @"#E64340";
    
    _titleLabelTextSelectedColor = @"#fc983a";
    _titleLabelTextDeselectedColor = @"#8b858d";
    
    
    UIImageView* icon = [UIImageView new];
    [self addSubview:icon];
    [icon mas_makeConstraints:^(MASConstraintMaker *make) {
        make.width.height.mas_equalTo(22);
        make.centerX.mas_equalTo(self);
        make.top.mas_equalTo(5);
    }];
    self.icon = icon;
    
    UILabel* titleLabel = [UILabel new];
    titleLabel.textColor = [LQS color:_titleLabelTextDeselectedColor];
    titleLabel.font = [UIFont systemFontOfSize:10];
    [self addSubview:titleLabel];
    [titleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self);
        make.top.mas_equalTo(icon.mas_bottom).offset(3);
    }];
    self.titleLabel = titleLabel;
    
    
    
    UILabel* numberLabel = [UILabel lqs__text:@"" textColor:_numberLabelTextColor fontSize:10];
    numberLabel.textAlignment = NSTextAlignmentCenter;
    numberLabel.lqs__backgroundColor = _numberLabelBackgroundColor;
    numberLabel.lqs__layerCornerRadius = 6;
    numberLabel.lqs__layerMasksToBounds = YES;
    [self addSubview:numberLabel];
    [numberLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(icon.mas_right);
        make.top.mas_equalTo(icon.mas_top).offset(2);
        make.width.mas_equalTo(20);
    }];
    self.numberLabel = numberLabel;
}

- (void) setDeselectImage:(UIImage *)deselectImage {
    _deselectImage = deselectImage;
    
    if ([self.icon isKindOfClass:[UIImage class]]) {
        self.icon.image = deselectImage;
    }
}

- (void) selectIt {
    self.titleLabel.textColor = [LQS color:_titleLabelTextSelectedColor];
    self.icon.image = self.selectImage;
}
- (void) deselectIt {
    self.titleLabel.textColor = [LQS color:_titleLabelTextDeselectedColor];
    self.icon.image = self.deselectImage;
}



- (void) setNumberLabelTextColor:(id)numberLabelTextColor {
    _numberLabelTextColor = numberLabelTextColor;
    
    self.numberLabel.lqs__textColor = numberLabelTextColor;
}

- (void) setNumberLabelBackgroundColor:(id)numberLabelBackgroundColor {
    _numberLabelBackgroundColor = numberLabelBackgroundColor;
    
    self.numberLabel.lqs__backgroundColor = numberLabelBackgroundColor;
}

@end