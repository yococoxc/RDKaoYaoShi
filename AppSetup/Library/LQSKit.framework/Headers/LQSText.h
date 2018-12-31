//
//  LQSText.h
//  LQSKit
//
//  Created by muzico on 2018/11/15.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>


#define LQSTextText(anObject) [LQSText text:anObject]

@interface LQSText : NSObject


+ (NSString*) text:(id) anObject;

+ (NSString*) MD5WithText:(NSString*) text;


+ (NSUInteger) numberOfString:(NSString*) string fromText:(NSString*)text;

+ (BOOL) text:(NSString*) text likeOther:(NSString*)otherText;


+ (NSUInteger) lengthWithText:(NSString*) text;


+ (NSArray*) arrayFromNumberText:(NSString*)aString;


/**
 不计较大小写情况下，判断 text 是否包含 subText。
 */
+ (BOOL) text:(NSString*)text includeTextNotCase:(NSString*)subText;

@end
