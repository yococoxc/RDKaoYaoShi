//
//  RD__HomeCollectionReusableActivityCell.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeCollectionReusableActivityCell.h"
#import "YYWebImage.h"

#import "RD__WebDetailController.h"

@interface RD__HomeCollectionReusableActivityCell ()

@property(nonatomic,strong) UIImageView* imageView;


@property(nonatomic,strong) NSString* title;
@property(nonatomic,strong) NSString* theID;

@end

@implementation RD__HomeCollectionReusableActivityCell

- (void) initializeWithView {
    [super initializeWithView];
    
    UIImageView* imageView  = [UIImageView new];
    [self.contentView addSubview:imageView];
    [imageView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
    self.imageView = imageView;
    
    UIControl* control = [UIControl new];
    [control lqs__addTarget:self action:@selector(pressedControlToDo)];
    [self.contentView addSubview:control];
    [control mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
}


- (void) setupWithDictionary:(NSDictionary *)dictionary {
    if ([dictionary lqs__isNSDictionary] == NO) {
        return;
    }
    
    self.title = [dictionary lqs__toStringWithObjectForKey:@"title"];
    self.theID = [dictionary lqs__toStringWithObjectForKey:@"id"];
    
    NSString* imageUrl = [dictionary lqs__toStringWithObjectForKey:@"imageUrl"];
    if ([imageUrl lqs__length] > 0) {
        imageUrl = [NSString stringWithFormat:@"%@%@",ImageDomainName, imageUrl];
        [self.imageView yy_setImageWithURL:[NSURL URLWithString:imageUrl] placeholder:nil];
    }
}

#pragma mark -
- (void) pressedControlToDo {
    if ([self.theID lqs__isNSString] == NO) {
        return;
    }
    
    RD__WebDetailController* controller = [RD__WebDetailController new];
    controller.headTitle = self.title;
    controller.url = [NSString stringWithFormat:@"http://openapi.kaoyaoshi.net/h5/activityDetail?id=%@",self.theID];
    [self lqs__currentNavigationControllerPushViewController:controller];
    
}

@end
