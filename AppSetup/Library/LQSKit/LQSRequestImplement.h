//
//  LQSRequestImplement.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LQSRequest.h"

@class LQSRequestImplement;

@protocol LQSRequestImplementDelegate <NSObject>

@optional
//成功-1
- (void) lqsRequestImplement:(LQSRequestImplement*)request success:(id)result;

//成功-2
- (void) lqsRequestImplement:(LQSRequestImplement*)request successWithDictionary:(NSDictionary*)result;
- (void) lqsRequestImplement:(LQSRequestImplement*)request successWithArray:(NSArray*)result;

//成功-3
- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary*)result code200ForDatasDcitionary:(NSDictionary*)datas;
- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary*)result code200ForDatasArray:(NSArray*)datas;

- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary*)result code400ForDatasDcitionary:(NSDictionary*)datas;
- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary*)result code400ForDatasArray:(NSArray*)datas;

- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary*)result otherCodeForDatasDcitionary:(NSDictionary*)datas;
- (void) lqsRequestImplement:(LQSRequestImplement *)request successWithDictionary:(NSDictionary*)result otherCodeForDatasArray:(NSArray*)datas;

//失败
- (void) lqsRequestImplement:(LQSRequestImplement*)request error:(NSError*)error;

@end

@interface LQSRequestImplement : NSObject

@property(nonatomic,strong,readonly) LQSRequest* coreRequest;

@property(nonatomic,strong,readonly) LQSRequestResult *result;

@property(nonatomic,strong) NSString* tag;

@property(nonatomic,weak) id<LQSRequestImplementDelegate>delegate;


/**************
 额外参数值。
 *************/
@property(nonatomic,strong) id extraParameter;
@property(nonatomic,strong) id extraParameter01;
@property(nonatomic,strong) id extraParameter02;
@property(nonatomic,strong) id extraParameter03;
@property(nonatomic,strong) id extraParameter04;
@property(nonatomic,strong) id extraParameter05;
@property(nonatomic,strong) id extraParameter06;
@property(nonatomic,strong) id extraParameter07;
@property(nonatomic,strong) id extraParameter08;
@property(nonatomic,strong) id extraParameter09;

/**************
 可以重写的。
 *************/
- (void) request;
- (void) requestWithOnly:(BOOL *)only;


- (void) requestWithURLString:(NSString*)urlString;
- (void) requestWithURLString:(NSString*)urlString only:(BOOL*)only;

+ (instancetype) requestWithDelegate:(id<LQSRequestImplementDelegate>)delegate;

@end
