//
//  NSString+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (LQS)


- (BOOL) lqs__containsString:(NSString*)string;

/*
 不推荐使用，建议使用 lqs__isNotEmpty 来代替。
- (BOOL) lqs__isEmpty;
*/

@property(nonatomic,readonly) BOOL lqs__isNotEmpty;

/**
 判断是否纯数字，不含任何符号。
 */
@property(nonatomic,readonly) BOOL lqs__isPureNumberString;
/**
 判断是否纯数字，不含任何符号。，而且只有11个字符构成。
 */
@property(nonatomic,readonly) BOOL lqs__isPureNumberString11;


@property(nonatomic,readonly) NSString* lqs__MD5;

@end
