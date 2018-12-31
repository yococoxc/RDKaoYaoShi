//
//  CommonMainMenuView.h
//  MZC-LQSKit
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//


#import "CommonMainMenuViewItem.h"

@class CommonMainMenuView;

@protocol CommonMainMenuViewDelegate <NSObject>

@optional
- (BOOL) commonMainMenuView:(CommonMainMenuView*)view didSelectWithIndex:(NSUInteger)index;

@end

@interface CommonMainMenuView : LQSView

@property(nonatomic,weak) id<CommonMainMenuViewDelegate> delegate;

- (CommonMainMenuViewItem*) itemWithTag:(NSUInteger)tag;

- (void) selectedWithTag:(NSUInteger)tag;


/**
 [{
 text:"文本",image:"normalImage",selectedImage:"selectedImage"
 },
 {},
 {},
 ...
 ]
 **/
@property(nonatomic,strong) NSArray* dataSource;

@end
