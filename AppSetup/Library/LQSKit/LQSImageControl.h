//
//  LQSImageControl.h
//  LQSKit
//
//  Created by muzico on 2018/7/24.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicControlTemplate.h"

@interface LQSImageControl : LQSBasicControlTemplate

@property(nonatomic,strong,readonly) UIImageView* imageView;

@property(nonatomic,assign) CGSize imageViewSize;

@property(nonatomic) id image;

@property(nonatomic,strong) id extraData;

@end
