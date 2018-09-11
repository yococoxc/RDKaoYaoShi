//
//  UICollectionView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (LQS)

+ (instancetype) lqs__view;

@property(nonatomic,readonly) UICollectionViewFlowLayout* lqs__collectionLayout;

- (void) lqs__setupWithCollectionView:(void(^)(UICollectionView* collectionView))aBlock;

@end
