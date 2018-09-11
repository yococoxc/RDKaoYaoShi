//
//  LQSAverageView.h
//  LQSKit
//
//  Created by muzico on 2018/7/22.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSBasicViewTemplate.h"


typedef NS_ENUM(NSUInteger, LQSAverageViewDirection) {
    LQSAverageViewDirectionHorizontal,
    LQSAverageViewDirectionVertical,
};

@interface LQSAverageView : LQSBasicViewTemplate

@property(nonatomic,strong) NSArray<UIView *>* views;

@property(nonatomic,assign) LQSAverageViewDirection direction;

@end
