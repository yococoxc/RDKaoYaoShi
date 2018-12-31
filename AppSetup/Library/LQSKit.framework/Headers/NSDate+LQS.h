//
//  NSDate+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/8/8.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (LQS)

/**
 *  是否是今天
 */
@property(nonatomic,readonly) BOOL lqs_isToday;

/**
 *  是否是昨天
 */
@property(nonatomic,readonly) BOOL lqs_isYesterday;

/**
 *  是否是前天
 */
@property(nonatomic,readonly) BOOL lqs_isTheDayBeforeYesterday;

/**
 *  是否是明天
 */
@property(nonatomic,readonly) BOOL lqs_isTomorrow;

/**
 *  是否是后天
 */
@property(nonatomic,readonly) BOOL lqs_isTheDayAfterTomorrow;

@end
