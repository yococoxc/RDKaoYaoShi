//
//  NSObject+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface NSObject (LQS)

- (BOOL) lqs__isEqualToString:(NSString*)aString;


@property(nonatomic,readonly) NSString* lqs__toString;
@property(nonatomic,readonly) NSString* lqs__toXingString;


- (UIViewController*) lqs__currentViewController;
- (UINavigationController*) lqs__currentNavigationController;
- (BOOL) lqs__currentNavigationControllerPushViewController:(UIViewController*)viewController;
- (BOOL) lqs__currentNavigationControllerPushViewController:(UIViewController*)viewController animated:(BOOL)animated;

- (NSArray*) lqs__currentNavigationControllerPopToRootViewController;
- (NSArray*) lqs__currentNavigationControllerPopToRootViewControllerAnimated:(BOOL)animated;

- (UIViewController*) lqs__currentNavigationControllerPopViewController;
- (UIViewController*) lqs__currentNavigationControllerPopViewControllerAnimated:(BOOL)animated;


- (void) lqs__currentControllerPresentViewController:(UIViewController *)viewController;
- (void) lqs__currentControllerPresentViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void) lqs__currentControllerPresentViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion;


- (void) lqs__currentControllerDismissViewController;
- (void) lqs__currentControllerDismissViewControllerAnimated:(BOOL)animated;
- (void) lqs__currentControllerDismissViewControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;


@property(nonatomic,readonly) BOOL lqs__isNSArray;
@property(nonatomic,readonly) BOOL lqs__isNSDictionary;
@property(nonatomic,readonly) BOOL lqs__isNSString;
@property(nonatomic,readonly) BOOL lqs__isNSNumber;
@property(nonatomic,readonly) BOOL lqs__isUIView;
@property(nonatomic,readonly) BOOL lqs__isUIViewController;


@property(nonatomic,readonly) NSString* lqs__jsonString;
@property(nonatomic,readonly) id lqs__json;
@property(nonatomic,readonly) NSData* lqs__jsonData;

@property(nonatomic,readonly) NSUInteger lqs__length;




- (void) lqs__setupWithObject:(void(^)(NSObject* object))aBlock;


@end
