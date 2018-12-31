//
//  CourseTypeRequest.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/14.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "CourseTypeRequest.h"

@implementation CourseTypeRequest

- (void) requestWithOnly:(BOOL *)only {
    
    NSString* urlString = [NSString stringWithFormat: @"%@%@/goods_type.php",APIDomainName,APIOtherDomain];
    
    self.coreRequest.HTTPMethod = @"POST";
    
    [self requestWithURLString:urlString];
}

@end
