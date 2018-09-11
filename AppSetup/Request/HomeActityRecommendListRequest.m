//
//  HomeActityRecommendListRequest.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "HomeActityRecommendListRequest.h"

@implementation HomeActityRecommendListRequest

- (void) requestWithOnly:(BOOL *)only {
    
    NSString* urlString = [NSString stringWithFormat: @"%@%@/actity_getActityRecommendList.php",APIDomainName,APIOtherDomain];
    
    self.coreRequest.HTTPMethod = @"POST";
    
    [self requestWithURLString:urlString];
}

@end
