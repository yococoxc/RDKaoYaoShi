//
//  LQSNotitia.h
//  LQSKit
//
//  Created by muzico on 2018/8/29.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LQSNotitia;
@class LQSNotitiaItem;

/********************************************/

@protocol LQSNotitiaDelegate <NSObject>
@optional
- (void) lqsNotitiaItem:(LQSNotitiaItem*)item receiveWithObject:(id)object withInfo:(NSDictionary*)info;

@end

/********************************************/

@interface NSObject (LQSNotitiaInstance)<LQSNotitiaDelegate>

@end

/********************************************/

@interface LQSNotitiaItem : NSObject

@property(nonatomic,weak) id targetObject;

@property(nonatomic,strong) NSString* tag;

@property(nonatomic,strong) NSString* groupTag;

@end

/********************************************/

@interface LQSNotitia : NSObject

/**
 tag : 注册唯一的。必须的，
 groupTag : 注册群组的。意味着一个通知将有多个对象触发。
 **/
+ (BOOL) registerTarget:(id)targetObject withTag:(NSString*)tag withGroupTag:(NSString*)groupTag;

+ (BOOL) sendWithTag:(NSString*)tag object:(id)object info:(NSDictionary*)info;

+ (BOOL) sendWithTag:(NSString*)tag;

+ (BOOL) sendWithGroupTag:(NSString*)groupTag object:(id)object info:(NSDictionary*)info;

+ (BOOL) sendWithTag:(NSString*)tag withGroupTag:(NSString*)groupTag object:(id)object info:(NSDictionary*)info;

/**
 包含了tag、groupTag。
 **/
+ (BOOL) sendWithAllTag:(NSString*)allTag object:(id)object info:(NSDictionary*)info;

@end
