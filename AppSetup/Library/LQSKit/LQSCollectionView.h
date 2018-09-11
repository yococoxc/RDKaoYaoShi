//
//  LQSCollectionView.h
//  LQSKit
//
//  Created by muzico on 2018/7/24.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicViewTemplate.h"

@class LQSCollectionView;

@protocol LQSCollectionViewDataSource <NSObject>
@required
- (NSInteger) lqsCollectionView:(LQSCollectionView*)view numberOfItemsInSection:(NSInteger)section;

- (UICollectionViewCell*) lqsCollectionView:(LQSCollectionView*)view cellForItemAtIndexPath:(NSIndexPath *)indexPath;

@optional
- (NSInteger) numberOfSectionsInLQSCollectionView:(LQSCollectionView *)view;

- (CGFloat) lqsCollectionView:(LQSCollectionView*)view heightForItemAtIndexPath:(NSIndexPath *)indexPath;

- (UIEdgeInsets) lqsCollectionView:(LQSCollectionView*)view insetForSectionAtIndex:(NSInteger)section;


- (UICollectionReusableView*) lqsCollectionView:(LQSCollectionView*)view viewForHeaderAtIndexPath:(NSIndexPath *)indexPath;
- (UICollectionReusableView*) lqsCollectionView:(LQSCollectionView*)view viewForFooterAtIndexPath:(NSIndexPath *)indexPath;

- (CGFloat) lqsCollectionView:(LQSCollectionView*)view heightForHeaderInSection:(NSInteger)section;

- (CGFloat) lqsCollectionView:(LQSCollectionView*)view heightForFooterInSection:(NSInteger)section;


/**
 该方法会导致 lqsCollectionView:heightForItemAtIndexPath: 以及一系列默认失效。
 */
- (CGSize) lqsCollectionView:(LQSCollectionView*)view layout:(UICollectionViewLayout *)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath *)indexPath;

- (CGFloat) lqsCollectionView:(LQSCollectionView*)view layout:(UICollectionViewLayout *)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section;

- (CGFloat) lqsCollectionView:(LQSCollectionView*)view layout:(UICollectionViewLayout *)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section;





- (void) lqsCollectionView:(LQSCollectionView*)view scrollViewDidScroll:(UIScrollView *)scrollView;
- (void) lqsCollectionView:(LQSCollectionView*)view scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView;
- (void) lqsCollectionView:(LQSCollectionView*)view scrollViewDidEndDecelerating:(UIScrollView *)scrollView;
- (void) lqsCollectionView:(LQSCollectionView*)view scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;

@end

@protocol LQSCollectionViewDelegate <NSObject>
@optional
- (void) lqsCollectionView:(LQSCollectionView*)view didSelectItemAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface LQSCollectionView : LQSBasicViewTemplate

@property(nonatomic,strong,readonly) UICollectionViewFlowLayout* collectionLayout;

@property(nonatomic,strong,readonly) UICollectionView* collectionView;

//44
@property(nonatomic,assign) CGFloat cellHeight;
//0
@property(nonatomic,assign) CGFloat headerHeight;
//0
@property(nonatomic,assign) CGFloat footerHeight;

//1
@property(nonatomic,assign) CGFloat cellWidthMultiple;

@property(nonatomic,weak) id<LQSCollectionViewDataSource> dataSource;

@property(nonatomic,weak) id<LQSCollectionViewDelegate> delegate;

//yes
@property(nonatomic) BOOL showsHorizontalScrollIndicator;
//yes
@property(nonatomic) BOOL showsVerticalScrollIndicator;




@property(nonatomic,strong) UIButton* topButton;

@property(nonatomic,assign) CGSize topButtonSize;
@property(nonatomic,assign) CGFloat topButtonBottom;
@property(nonatomic,assign) CGFloat topButtonRight;



- (void) registerClass:(Class)aClass;
- (void) registerHeaderClass:(Class)aClass;
- (void) registerFooterClass:(Class)aClass;

- (id) viewForHeaderWithReuseIdentifier:(NSString*)reuseIdentifier forIndexPath:(NSIndexPath*)indexPath;
- (id) viewForFooterWithReuseIdentifier:(NSString*)reuseIdentifier forIndexPath:(NSIndexPath*)indexPath;


@end
