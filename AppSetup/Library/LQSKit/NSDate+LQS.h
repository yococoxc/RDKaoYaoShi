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
@property(nonatomic,readonly) BOOL lqs__isToday;

/**
 *  是否是昨天
 */
@property(nonatomic,readonly) BOOL lqs__isYesterday;

/**
 *  是否是前天
 */
@property(nonatomic,readonly) BOOL lqs__isTheDayBeforeYesterday;

/**
 *  是否是明天
 */
@property(nonatomic,readonly) BOOL lqs__isTomorrow;

/**
 *  是否是后天
 */
@property(nonatomic,readonly) BOOL lqs__isTheDayAfterTomorrow;

@end
