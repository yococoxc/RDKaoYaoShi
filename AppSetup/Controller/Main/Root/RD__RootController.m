//
//  RD__RootController.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__RootController.h"
#import "RD__MainController.h"

@interface RD__RootController ()

@end

@implementation RD__RootController

+ (UIViewController*) mainController {
    return [RD__MainController shareController];
}

@end
