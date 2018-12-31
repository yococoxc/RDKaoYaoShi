//
//  UICollectionView+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (LQS)

+ (instancetype) lqs_view;

@property(nonatomic,readonly) UICollectionViewFlowLayout* lqs_collectionLayout;

- (void) lqs_setupWithCollectionView:(void(^)(UICollectionView* collectionView))aBlock;

@end
