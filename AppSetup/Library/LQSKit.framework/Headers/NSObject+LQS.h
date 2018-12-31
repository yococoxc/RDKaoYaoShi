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

- (BOOL) lqs_isEqualToString:(NSString*)aString;


@property(nonatomic,readonly) NSString* lqs_toString;
@property(nonatomic,readonly) NSString* lqs_toXingString;


@property (nonatomic,readonly) UIViewController *lqs_currentViewController;
- (UIViewController *) lqs_currentViewControllerWithClass:(Class)aClass;


@property (nonatomic,readonly) UINavigationController *lqs_currentNavigationController;

- (BOOL) lqs_currentNavigationControllerPushViewController:(UIViewController*)viewController;
- (BOOL) lqs_currentNavigationControllerPushViewController:(UIViewController*)viewController animated:(BOOL)animated;


- (BOOL) lqs_currentNavigationControllerHidesBottomBarWhenPushViewController:(UIViewController*)viewController;
- (BOOL) lqs_currentNavigationControllerHidesBottomBarWhenPushViewController:(UIViewController*)viewController animated:(BOOL)animated;


- (NSArray*) lqs_currentNavigationControllerPopToRootViewController;
- (NSArray*) lqs_currentNavigationControllerPopToRootViewControllerAnimated:(BOOL)animated;

- (UIViewController*) lqs_currentNavigationControllerPopViewController;
- (UIViewController*) lqs_currentNavigationControllerPopViewControllerAnimated:(BOOL)animated;


- (void) lqs_currentControllerPresentViewController:(UIViewController *)viewController;
- (void) lqs_currentControllerPresentViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void) lqs_currentControllerPresentViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion;


- (void) lqs_currentControllerDismissViewController;
- (void) lqs_currentControllerDismissViewControllerAnimated:(BOOL)animated;
- (void) lqs_currentControllerDismissViewControllerAnimated:(BOOL)animated completion:(void (^)(void))completion;


@property(nonatomic,readonly) BOOL lqs_isUIFont;
@property(nonatomic,readonly) BOOL lqs_isNSArray;
@property(nonatomic,readonly) BOOL lqs_isNSDictionary;
@property(nonatomic,readonly) BOOL lqs_isNSString;
@property(nonatomic,readonly) BOOL lqs_isNSNumber;
@property(nonatomic,readonly) BOOL lqs_isUIView;
@property(nonatomic,readonly) BOOL lqs_isUILabel;
@property(nonatomic,readonly) BOOL lqs_isUICollectionView;
@property(nonatomic,readonly) BOOL lqs_isUITableView;
@property(nonatomic,readonly) BOOL lqs_isUIButton;
@property(nonatomic,readonly) BOOL lqs_isUIImageView;
@property(nonatomic,readonly) BOOL lqs_isUIControl;
@property(nonatomic,readonly) BOOL lqs_isUIWindow;
@property(nonatomic,readonly) BOOL lqs_isUINavigationController;
@property(nonatomic,readonly) BOOL lqs_isUIViewController;
@property(nonatomic,readonly) BOOL lqs_isUITabBarController;


@property(nonatomic,readonly) NSString* lqs_jsonString;
@property(nonatomic,readonly) id lqs_json;
@property(nonatomic,readonly) NSData* lqs_jsonData;

@property(nonatomic,readonly) NSUInteger lqs_length;




- (void) lqs_setupWithObject:(void(^)(NSObject* object))aBlock;


@end
