//
//  LQSHeadCollectionViewController.h
//  LQSKit
//
//  Created by muzico on 2018/7/24.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSHeadViewController.h"
#import "LQSCollectionView.h"

@interface LQSHeadCollectionViewController : LQSHeadViewController<LQSCollectionViewDataSource,LQSCollectionViewDelegate>

@property(nonatomic,strong,readonly) LQSCollectionView* coreCollectionView;


#pragma mark - 从 LQSCollectionView 中引用过来的
@property(nonatomic,strong,readonly) UICollectionViewFlowLayout* collectionLayout;

@property(nonatomic,strong,readonly) UICollectionView* collectionView;

//44
@property(nonatomic,assign) CGFloat cellHeight;

//1
@property(nonatomic,assign) CGFloat cellWidthMultiple;

@end
