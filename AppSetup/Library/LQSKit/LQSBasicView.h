//
//  LQSBasicView.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LQSBasicView : UIView

@property(nonatomic,assign,readonly) BOOL layoutSubviewsDidAction;

- (void) initializeWithView;

- (void) reloadLayout;

- (void) initializeWithLayoutSubviewsOnce;

- (void) reloadData;


#pragma mark -
- (void) setupWithDictionary:(NSDictionary*)dictionary;
- (void) setupWithArray:(NSArray*)array;
- (void) setupWithDataSource:(id)dataSource;

@end
