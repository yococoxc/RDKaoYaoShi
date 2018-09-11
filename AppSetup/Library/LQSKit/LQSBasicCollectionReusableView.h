//
//  LQSBasicCollectionReusableView.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSCollectionSectionItem.h"

@interface LQSBasicCollectionReusableView : UICollectionReusableView

- (void) initializeWithView;



@property(nonatomic,weak) LQSCollectionSectionItem* item;

#pragma mark -
- (void) setupWithItem:(LQSCollectionSectionItem*)item;

- (void) setupWithItem:(LQSCollectionSectionItem*)item dataSourceDictionary:(NSDictionary*)dataSourceDictionary;
- (void) setupWithItem:(LQSCollectionSectionItem*)item dataSourceArray:(NSArray*)dataSourceArray;

- (void) setupWithDictionary:(NSDictionary*)dictionary;
- (void) setupWithArray:(NSArray*)array;
- (void) setupWithDataSource:(id)dataSource;

@end
