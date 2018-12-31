//
//  AppDelegate.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "AppDelegate.h"

#import "RD__RootController.h"

#import "MainTabBarController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    
    
    
    [self toOK:self.window];


//    if ([self version:@"1.2" greaterThanVersion:@"1.0.2"] == 0) {
//        NSLog(@"1.2 大于 1.0.2");
//    } else {
//        NSLog(@"1.2 不大于 1.0.2");
//    }
//
//    if ([self version:@"1.2" greaterThanVersion:@"1.2.0"] == 0) {
//        NSLog(@"1.2 大于 1.2.0");
//    } else {
//        NSLog(@"1.2 不大于 1.2.0");
//    }
//
//    if ([self version:@"1.2.3" greaterThanVersion:@"1.2.3"] == 0) {
//        NSLog(@"1.2.3 大于 1.2.3");
//    } else {
//        NSLog(@"1.2.3 不大于 1.2.3");
//    }
//
//
//    if ([self version:@"1.3" greaterThanVersion:@"1.2.0.4"] == 0) {
//        NSLog(@"1.3 大于 1.2.0.4");
//    } else {
//        NSLog(@"1.3 不大于 1.2.0.4");
//    }
    
    
    return YES;
}

/**
 0，大于
 1，非大于
 2，不是上述的情况
 */
- (int) version:(NSString*)version greaterThanVersion:(NSString*)otherVersion {
    if ([version isKindOfClass:[NSString class]] == NO) {
        return 2;
    }
    if ([otherVersion isKindOfClass:[NSString class]] == NO) {
        return 2;
    }
    
    NSArray* array = [version componentsSeparatedByString:@"."];
    NSArray* otherArray = [otherVersion componentsSeparatedByString:@"."];
    
    NSUInteger count = [array count];
    if (count > [otherArray count]) {
        count = [otherArray count];
    }
    
    BOOL isOK = NO;
    for (NSUInteger index = 0; index < count; index++) {
        NSString* string = [array objectAtIndex:index];
        NSString* otherString = [otherArray objectAtIndex:index];
        
        if ([string integerValue] > [otherString integerValue]) {
            isOK = YES;
            break;
        }
    }
    
    
    if (isOK == NO) {
        if ([array count] > [otherArray count]) {
            //array 多
            for (NSUInteger index = count - 1; index < [array count]; index++) {
                NSString* string = [array objectAtIndex:index];
                if ([string integerValue] > 0) {
                    isOK = YES;
                    break;
                }
            }
        } else if ([array count] < [otherArray count]) {
            //otherArray 多
//            for (NSUInteger index = count - 1; index < [otherArray count]; index++) {
//                NSString* otherString = [otherArray objectAtIndex:index];
//                if ([otherString integerValue] > 0) {
//                    isOK = NO;
//                    break;
//                }
//            }
        }
    }
    
    if (isOK == YES) {
        return 0;
    } else {
        return 1;
    }
}

- (void) toOK:(UIWindow*)window {
    window.backgroundColor = [UIColor whiteColor];
    
//    RD__RootController* temp = [RD__RootController shareController];
//    window.rootViewController = temp;
//    [window makeKeyAndVisible];
    
    
    MainTabBarController *mainTabBarC = [MainTabBarController new];
    
    self.window.backgroundColor = [UIColor whiteColor];
    self.window.rootViewController = mainTabBarC;
}



- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
