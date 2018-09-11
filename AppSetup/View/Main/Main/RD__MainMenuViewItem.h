//
//  RD__MainMenuViewItem.h
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicControl.h"

@interface RD__MainMenuViewItem : LQSBasicControl

@property(nonatomic,strong,readonly) UIImageView* icon;

@property(nonatomic,strong,readonly) UILabel* titleLabel;

@property(nonatomic,strong,readonly) UILabel* numberLabel;


@property(nonatomic,strong) UIImage* deselectImage;
@property(nonatomic,strong) UIImage* selectImage;

- (void) selectIt;

- (void) deselectIt;

@end
