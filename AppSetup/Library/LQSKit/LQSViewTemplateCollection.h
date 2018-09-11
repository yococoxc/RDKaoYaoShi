//
//  LQSViewTemplateCollection.h
//  LQSKit
//
//  Created by muzico on 2018/8/14.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSView.h"
#import "LQSCollectionView.h"


@interface LQSViewTemplateCollection : LQSView<LQSCollectionViewDataSource,LQSCollectionViewDelegate>


//这个collectionView已经通过 setupBodyView: 方法加载到里面。
@property(nonatomic,strong,readonly) LQSCollectionView* collectionView;

@end
