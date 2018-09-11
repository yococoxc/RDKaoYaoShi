//
//  LQSBasicCollectionViewCell.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LQSCollectionSectionItem.h"

@class LQSBasicCollectionViewCell;

@protocol LQSBasicCollectionViewCellDefaultDelegate <NSObject>
@optional
- (CGFloat) lqsBasicCollectionViewCell:(LQSBasicCollectionViewCell*)cell heightOfPreferredLayoutAttributesFittingAttributes:(UICollectionViewLayoutAttributes *)layoutAttributes;
- (CGSize)  lqsBasicCollectionViewCell:(LQSBasicCollectionViewCell*)cell sizeOfPreferredLayoutAttributesFittingAttributes:(UICollectionViewLayoutAttributes *)layoutAttributes;

@end


@interface LQSBasicCollectionViewCell : UICollectionViewCell<LQSBasicCollectionViewCellDefaultDelegate>

- (void) initializeWithView;

- (void) reloadLayout;

/***
 配置 cellHeight 值时，默认会执行 lqsBasicCollectionViewCell:heightOfPreferredLayoutAttributesFittingAttributes: 同效果。
 **/
@property(nonatomic,assign) CGFloat cellHeight;



@property(nonatomic,weak) LQSCollectionSectionItem* item;

#pragma mark -
- (void) setupWithItem:(LQSCollectionSectionItem*)item;
- (void) setupWithItem:(LQSCollectionSectionItem*)item dataSourceDictionary:(NSDictionary*)dataSourceDictionary;
- (void) setupWithItem:(LQSCollectionSectionItem*)item dataSourceArray:(NSArray*)dataSourceArray;

- (void) setupWithDictionary:(NSDictionary*)dictionary;
- (void) setupWithArray:(NSArray*)array;
- (void) setupWithDataSource:(id)dataSource;

@end
