//
//  RD__MainMenuView.h
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__MainMenuViewItem.h"

@class RD__MainMenuView;

@protocol RD__MainMenuViewDelegate <NSObject>

@optional
- (BOOL) rd__MainMenuView:(RD__MainMenuView*)view didSelectWithIndex:(NSUInteger)index;

@end

@interface RD__MainMenuView : LQSView


@property(nonatomic,weak) id<RD__MainMenuViewDelegate> delegate;


- (RD__MainMenuViewItem*) itemWithTag:(NSUInteger)tag;

- (void) selectedWithTag:(NSUInteger)tag;

@end
