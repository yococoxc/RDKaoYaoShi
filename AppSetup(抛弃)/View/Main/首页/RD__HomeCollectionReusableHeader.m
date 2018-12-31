//
//  RD__HomeCollectionReusableHeader.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeCollectionReusableHeader.h"

@implementation RD__HomeCollectionReusableHeader

- (void) initializeWithView {
    [super initializeWithView];
    
    self.lqs_backgroundColor = @"R";
    
    
    UIImageView* imageView = [UIImageView lqs_image:@"home_bg_banner"];
    [self addSubview:imageView];
    [imageView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
    self.imageView = imageView;
    
    UILabel* titleLabel = [UILabel lqs_text:@"" textColor:@"#fff" fontSize:20];
    [self addSubview:titleLabel];
    [titleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.mas_equalTo(20);
        make.centerX.mas_equalTo(self);
    }];
    self.titleLabel = titleLabel;
    
    
    UILabel* orderLabel = [UILabel lqs_text:@"" textColor:@"#fff" fontSize:30];
    [self addSubview:orderLabel];
    [orderLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self);
        make.centerY.mas_equalTo(self);
    }];
    self.orderLabel = orderLabel;
    
    UILabel* promptOrderLabel = [UILabel lqs_text:@"我的排名" textColor:@"#fff" fontSize:14];
    [self addSubview:promptOrderLabel];
    [promptOrderLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self);
        make.top.mas_equalTo(orderLabel.mas_bottom).offset(4);
    }];
    
}


- (void) setupWithItem:(LQSCollectionSectionItem *)item dataSourceDictionary:(NSDictionary *)dataSourceDictionary {
    
    
    
    if ([dataSourceDictionary lqs_isNSDictionary] == NO) {
        return;
    }
    
    self.titleLabel.text = [NSString stringWithFormat:@"距考试%@天", [dataSourceDictionary lqs_toStringWithObjectForKey:@"examination"]];
    
    NSString* tempText = @"999";
    NSString* tempText2 = [dataSourceDictionary lqs_toStringWithObjectForKey:@"orderValue"];
    if ([tempText intValue] > [tempText2 intValue]) {
        tempText = tempText2;
    }
    self.orderLabel.text = tempText;
}


@end
