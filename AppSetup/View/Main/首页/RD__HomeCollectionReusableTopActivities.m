//
//  RD__HomeCollectionReusableTopActivities.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeCollectionReusableTopActivities.h"
#import "RD__HomeCollectionReusableTopActivitiesCell.h"


#import "RD__ActityListController.h"


@interface RD__HomeCollectionReusableTopActivities ()<UICollectionViewDataSource,UICollectionViewDelegate,UIScrollViewDelegate>

@property(nonatomic,strong) UICollectionView* collectionView;

@property(nonatomic,strong) UIPageControl* pageControl;

@end

@implementation RD__HomeCollectionReusableTopActivities

- (void) initializeWithView {
    [super initializeWithView];
    
    
    UIControl* headView = [UIControl new];
    [headView lqs__addTarget:self action:@selector(pressedControToDo)];
    [self addSubview:headView];
    [headView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(20);
        make.top.mas_equalTo(0);
        make.right.mas_equalTo(-20);
        make.height.mas_equalTo(30);
    }];
    
    UILabel* titleLabel = [UILabel lqs__text:@"热门活动" textColor:@"#555" fontSize:12];
    [headView addSubview:titleLabel];
    [titleLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(headView);
        make.centerY.mas_equalTo(headView);
    }];
    
    
    
    
    
    
    
    
    self.lqs__backgroundColor = @"#fff";
    
    UICollectionView* collectionView = [UICollectionView lqs__view];
    collectionView.delegate = self;
    collectionView.showsVerticalScrollIndicator = NO;
    collectionView.showsHorizontalScrollIndicator = NO;
    collectionView.pagingEnabled = YES;
    collectionView.lqs__collectionLayout.scrollDirection = UICollectionViewScrollDirectionHorizontal;
    collectionView.dataSource = self;
    [collectionView registerClass:[RD__HomeCollectionReusableTopActivitiesCell class] forCellWithReuseIdentifier:@"RD__HomeCollectionReusableTopActivitiesCell"];
    [self addSubview:collectionView];
    [collectionView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.bottom.mas_equalTo(0);
        make.top.mas_equalTo(headView.mas_bottom);
    }];
    self.collectionView = collectionView;
    
    
    UIPageControl* pageControl = [UIPageControl new];
    pageControl.pageIndicatorTintColor = [UIColor lightGrayColor];
    pageControl.currentPageIndicatorTintColor = [UIColor blueColor];
    [self addSubview:pageControl];
    [pageControl mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.right.bottom.mas_equalTo(0);
        make.height.mas_equalTo(20);
    }];
    self.pageControl = pageControl;
}

- (void) setupWithItem:(LQSCollectionSectionItem *)item dataSourceArray:(NSArray *)dataSourceArray {
    
    if ([dataSourceArray lqs__isNSArray] == NO) {
        return;
    }
    
    [self.collectionView reloadData];
}

#pragma mark -
- (void) pressedControToDo {
    RD__ActityListController* controller = [RD__ActityListController new];
    [self lqs__currentNavigationControllerPushViewController:controller];
}


#pragma mark -
- (NSInteger) collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    
    CGSize itemSize = collectionView.frame.size;
    collectionView.lqs__collectionLayout.itemSize = itemSize;
    
    
    NSUInteger count = [self.item.dataSourceArray lqs__length];
    self.pageControl.numberOfPages = count;
    return count;
}

- (UICollectionViewCell*) collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
    RD__HomeCollectionReusableTopActivitiesCell* cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"RD__HomeCollectionReusableTopActivitiesCell" forIndexPath:indexPath];
    
    [cell setupWithDictionary:[self.item.dataSourceArray objectAtIndex:indexPath.row]];
    
    return cell;
}

#pragma mark - UIScrollViewDelegate
- (void) scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    CGFloat pageWith = scrollView.frame.size.width;
    int page = floor((scrollView.contentOffset.x - pageWith/2)/pageWith)+1;
    self.pageControl.currentPage = page;
}

@end
