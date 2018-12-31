//
//  LQSBasicViewTemplateControl.h
//  LQSKit
//
//  Created by muzico on 2018/7/30.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicView.h"

@interface LQSBasicViewTemplateControl : LQSBasicView

@property(nonatomic,strong,readonly) UIControl* contentView;

@property(nonatomic,assign) UIEdgeInsets contentInsets;


@end
