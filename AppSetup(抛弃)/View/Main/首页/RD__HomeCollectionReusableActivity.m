//
//  RD__HomeCollectionReusableActivity.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeCollectionReusableActivity.h"
#import "RD__HomeCollectionReusableActivityCell.h"

@interface RD__HomeCollectionReusableActivity ()<UICollectionViewDataSource>

@property(nonatomic,strong) UICollectionView* collectionView;

@end

@implementation RD__HomeCollectionReusableActivity

- (void) initializeWithView {
    [super initializeWithView];
    
    UICollectionView* collectionView = [UICollectionView lqs_view];
    collectionView.showsVerticalScrollIndicator = NO;
    collectionView.showsHorizontalScrollIndicator = NO;
    collectionView.lqs_collectionLayout.minimumLineSpacing = 20;
    collectionView.lqs_collectionLayout.sectionInset = UIEdgeInsetsMake(0, 20, 0, 20);
    collectionView.lqs_collectionLayout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
    collectionView.dataSource = self;
    [collectionView registerClass:[RD__HomeCollectionReusableActivityCell class] forCellWithReuseIdentifier:@"RD__HomeCollectionReusableActivityCell"];
    [self addSubview:collectionView];
    [collectionView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(0);
    }];
    self.collectionView = collectionView;
}

- (void) setupWithItem:(LQSCollectionSectionItem *)item dataSourceArray:(NSArray *)dataSourceArray {
    
    if ([dataSourceArray lqs_isNSArray] == NO) {
        return;
    }
    
    [self.collectionView reloadData];
}

#pragma mark -
- (NSInteger) collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    
    CGSize itemSize = CGSizeMake(139, collectionView.lqs_height);
    collectionView.lqs_collectionLayout.itemSize = itemSize;
    
    return [self.item.dataSourceArray lqs_length];
}

- (UICollectionViewCell*) collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    RD__HomeCollectionReusableActivityCell* cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"RD__HomeCollectionReusableActivityCell" forIndexPath:indexPath];
    
    [cell setupWithDictionary:[self.item.dataSourceArray objectAtIndex:indexPath.row]];
    
    return cell;
}


@end
