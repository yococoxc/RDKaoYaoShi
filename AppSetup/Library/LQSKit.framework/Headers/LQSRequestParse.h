//
//  LQSRequestParse.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LQSRequestResponse.h"

@interface LQSRequestParse : NSObject

+ (LQSRequestResponse*) parseWithData:(NSData*) data;
- (LQSRequestResponse*) parseWithData:(NSData*) data;

@end
