//
//  NSString+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (LQS)


- (BOOL) lqs_containsString:(NSString*)string;

/*
 不推荐使用，建议使用 lqs_isNotEmpty 来代替。
- (BOOL) lqs_isEmpty;
*/

@property(nonatomic,readonly) BOOL lqs_isNotEmpty;

/**
 判断是否纯数字，不含任何符号。
 */
@property(nonatomic,readonly) BOOL lqs_isPureNumberString;
/**
 判断是否纯数字，不含任何符号。，而且只有11个字符构成。
 */
@property(nonatomic,readonly) BOOL lqs_isPureNumberString11;


@property(nonatomic,readonly) NSString* lqs_MD5;

@property(nonatomic,readonly) NSURL* lqs_NSURL;
@property(nonatomic,readonly) NSURLRequest* lqs_NSURLRequest;


/**
 字符串转二维码。
 */
- (UIImage *) lqs_QRCodeWithSize:(CGFloat)size;

@end
