//
//  LQSStore.h
//  LQSKit
//
//  Created by muzico on 2018/7/23.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LQSStore : NSObject

#pragma mark -
- (void) removeWithString:(NSString*)string;

- (void) setWithString:(NSString*)string withObject:(id)anObject;

- (id) getWithString:(NSString*)string;


#pragma mark -
+ (void) removeWithString:(NSString*)string;

+ (void) setWithString:(NSString*)string withObject:(id)anObject;

+ (id) getWithString:(NSString*)string;


#pragma mark -
- (void) removeWithStringToMD5:(NSString*)string;

- (void) setWithStringToMD5:(NSString*)string withObject:(id)anObject;

- (id) getWithStringToMD5:(NSString*)string;


#pragma mark -
+ (void) removeWithStringToMD5:(NSString*)string;

+ (void) setWithStringToMD5:(NSString*)string withObject:(id)anObject;

+ (id) getWithStringToMD5:(NSString*)string;


- (NSString*) pathWithString:(NSString*)string;
+ (NSString*) pathWithString:(NSString*)string;
- (NSString*) pathWithStringToMD5:(NSString*)string;
+ (NSString*) pathWithStringToMD5:(NSString*)string;

@end
