//
//  HomeUserOrderDetailsRequest.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/11.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "HomeUserOrderDetailsRequest.h"

@implementation HomeUserOrderDetailsRequest

- (void) requestWithOnly:(BOOL *)only {
    
    NSString* urlString = [NSString stringWithFormat: @"%@%@/user_getUserOrderDetails.php",APIDomainName,APIOtherDomain];
    
    self.coreRequest.HTTPMethod = @"POST";
    
    [self requestWithURLString:urlString];
}

@end
