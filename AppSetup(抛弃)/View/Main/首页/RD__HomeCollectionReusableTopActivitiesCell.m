//
//  RD__HomeCollectionReusableTopActivitiesCell.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeCollectionReusableTopActivitiesCell.h"
#import "YYWebImage.h"

#import "RD__WebDetailController.h"

@interface RD__HomeCollectionReusableTopActivitiesCell ()

@property(nonatomic,strong) UIImageView* imageView;

@property(nonatomic,strong) UILabel* titleLabel;

@property(nonatomic,strong) NSString* title;
@property(nonatomic,strong) NSString* theID;


@end


@implementation RD__HomeCollectionReusableTopActivitiesCell

- (void) initializeWithView {
    [super initializeWithView];
    
    CGFloat width = [[UIScreen mainScreen] bounds].size.width-20-20;
    CGFloat height = [LQS heightWithWidth:width equalRatioWithOtherWidth:690 otherHeight:218];
    
    UIImageView* imageView = [UIImageView new];
    [self.contentView addSubview:imageView];
    [imageView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(20);
        make.right.mas_equalTo(-20);
        make.top.mas_equalTo(0);
        make.height.mas_equalTo(height);
    }];
    self.imageView = imageView;
    
    
    UILabel* titleLabel = [UILabel lqs_text:@"" textColor:@"#333" fontSize:14];
    [self.contentView addSubview:titleLabel];
    [titleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(imageView.mas_left);
        make.top.mas_equalTo(imageView.mas_bottom).offset(4);
    }];
    self.titleLabel = titleLabel;
    
    
    UIControl* control = [UIControl new];
    [control lqs_addTarget:self action:@selector(pressedControlToDo)];
    [self.contentView addSubview:control];
    [control mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
}

- (void) setupWithDictionary:(NSDictionary *)dictionary {
    if ([dictionary lqs_isNSDictionary] == NO) {
        return;
    }
    
    self.title = [dictionary lqs_toStringWithObjectForKey:@"title"];
    self.titleLabel.text = self.title;
    
    self.theID = [dictionary lqs_toStringWithObjectForKey:@"id"];
    
    NSString* imageUrl = [dictionary lqs_toStringWithObjectForKey:@"imageUrl"];
    if ([imageUrl lqs_length] > 0) {
        imageUrl = [NSString stringWithFormat:@"%@%@",ImageDomainName, imageUrl];
        [self.imageView yy_setImageWithURL:[NSURL URLWithString:imageUrl] placeholder:nil];
    }
}

#pragma mark -
- (void) pressedControlToDo {
    if ([self.theID lqs_isNSString] == NO) {
        return;
    }
    
    RD__WebDetailController* controller = [RD__WebDetailController new];
    controller.headTitle = self.title;
    controller.url = [NSString stringWithFormat:@"http://openapi.kaoyaoshi.net/h5/activityDetail?id=%@",self.theID];
    [self lqs_currentNavigationControllerPushViewController:controller];
    
}
@end

