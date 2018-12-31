//
//  CommonMainMenuViewItem.h
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommonMainMenuViewItem : LQSBasicControl

@property(nonatomic,strong,readonly) UIImageView* icon;

@property(nonatomic,strong,readonly) UILabel* titleLabel;

@property(nonatomic,strong,readonly) UILabel* numberLabel;



//#fff
@property(nonatomic,strong) id numberLabelTextColor;
//#E64340
@property(nonatomic,strong) id numberLabelBackgroundColor;

//#fc983a
@property(nonatomic,strong) id titleLabelTextSelectedColor;
//#8b858d
@property(nonatomic,strong) id titleLabelTextDeselectedColor;


@property(nonatomic,strong) UIImage* deselectImage;
@property(nonatomic,strong) UIImage* selectImage;

- (void) selectIt;

- (void) deselectIt;

@end
