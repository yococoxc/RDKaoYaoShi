//
//  LQSModel.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LQSModel : NSObject

@property(nonatomic,strong,readonly) NSDictionary* lqsDataSourceCoreDictionary;

+ (instancetype) modelWithDictioanry:(NSDictionary*)dictionary;


/*
 根据需求重写该方法。
 按照默认逻辑处理请返回YES，
 如果需要自行处理请返回NO。
 
 默认会将 m__ 前缀消去而得到可以。
 */
- (BOOL) handlePropertyContentFromCustomWithKey:(NSString*)key;

@end
