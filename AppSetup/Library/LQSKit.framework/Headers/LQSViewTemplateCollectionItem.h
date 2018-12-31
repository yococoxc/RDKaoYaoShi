//
//  LQSViewTemplateCollectionItem.h
//  LQSKit
//
//  Created by muzico on 2018/8/17.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSView.h"

#import "LQSCollectionView.h"

#import "LQSCollectionSectionItem.h"

#import "LQSBasicCollectionViewCell.h"
#import "LQSBasicCollectionReusableView.h"


@interface LQSViewTemplateCollectionItem : LQSView<LQSCollectionViewDataSource,LQSCollectionViewDelegate>


//这个collectionManager已经通过 setupBodyView: 方法加载到里面。
@property(nonatomic,strong,readonly) LQSCollectionView* collectionManager;


@property(nonatomic,strong) NSArray<LQSCollectionSectionItem*>* collectionDataSource;


/**
 在 collectionDataSource 中通过 tag，查找目标对象。
 ***/
- (LQSCollectionSectionItem*) itemWithTag:(NSString*)tag;



- (void) numberOfSectionsInCollectionManager:(LQSCollectionView*)manager;
- (void) collectionManager:(LQSCollectionView*)manager numberOfItemsInSection:(NSInteger)section;

- (void) collectionManager:(LQSCollectionView*)manager cell:(LQSBasicCollectionViewCell*)cell forItem:(LQSCollectionSectionItem*)item atIndexPath:(NSIndexPath *)indexPath;

- (void) collectionManager:(LQSCollectionView*)manager reusableView:(LQSBasicCollectionReusableView*)reusableView forItem:(LQSCollectionSectionItem*)item atIndexPath:(NSIndexPath *)indexPath;
- (void) collectionManager:(LQSCollectionView*)manager header:(LQSBasicCollectionReusableView*)header forItem:(LQSCollectionSectionItem*)item atIndexPath:(NSIndexPath *)indexPath;
- (void) collectionManager:(LQSCollectionView*)manager footer:(LQSBasicCollectionReusableView*)footer forItem:(LQSCollectionSectionItem*)item atIndexPath:(NSIndexPath *)indexPath;



- (void) collectionManager:(LQSCollectionView*)manager didSelectItem:(LQSCollectionSectionItem*)item atIndexPath:(NSIndexPath *)indexPath;


@end
