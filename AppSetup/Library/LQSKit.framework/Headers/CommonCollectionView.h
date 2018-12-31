//
//  CommonCollectionView.h
//  juhao
//
//  Created by muzico on 2018/12/2.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommonCollectionView;

typedef void(^CommonCollectionViewDidSelectBlock)(CommonCollectionView *collectionView, id dataSource, NSIndexPath *indexPath, NSInteger index);

typedef void(^CommonCollectionViewSetupCellBlock)(CommonCollectionView *collectionView, id cell, id dataSource, NSIndexPath *indexPath, NSInteger index);

@interface CommonCollectionView : UICollectionView

@property (strong, nonatomic) UICollectionViewFlowLayout *collectionLayout;

@property(assign, nonatomic) NSUInteger column;

@property (strong, nonatomic) NSArray *collectionDataSource;

@property(nonatomic,copy) CommonCollectionViewDidSelectBlock didSelectBlock;

@property(nonatomic,copy) CommonCollectionViewSetupCellBlock setupCellBlock;

@property(nonatomic, strong) Class cellClass;

@property(nonatomic, copy) NSString *cellNibString;

@property(nonatomic, assign) CGFloat cellHeight;

@property(nonatomic, assign) CGFloat cellSizeScale;

@end
