//
//  LQSProjectAdapter.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LQSProjectAdapter : NSObject



@property(nonatomic,assign) CGFloat footerHeight;
@property(nonatomic,assign) CGFloat headerHeight;

@property(nonatomic,assign) CGFloat tabBarHeight;
@property(nonatomic,assign) CGFloat tabBarGapHeight;

@property(nonatomic,assign) CGFloat statusBarHeight;
@property(nonatomic,assign) CGFloat nagtivationBarHeight;


+ (instancetype) shareAdapter;

@end
