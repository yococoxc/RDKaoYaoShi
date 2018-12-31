//
//  LQSCollectionSectionItem.h
//  LQSKit
//
//  Created by muzico on 2018/8/17.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSBasicObject.h"

@interface LQSCollectionSectionItem : LQSBasicObject




@property(nonatomic,strong) id dataSource;
@property(nonatomic,strong) NSArray* dataSourceArray;
@property(nonatomic,strong) NSDictionary* dataSourceDictionary;

@property(nonatomic,assign) BOOL haveHeader;
@property(nonatomic,assign) BOOL haveFooter;
@property(nonatomic,assign) BOOL haveCell;

@property(nonatomic,assign) CGFloat headerHeight;
@property(nonatomic,assign) CGFloat cellHeight;
@property(nonatomic,assign) CGFloat footerHeight;

@property(nonatomic,assign) NSUInteger cellCount;
@property(nonatomic,strong) id cellDataSource;


@property(nonatomic,strong) Class headerClass;
@property(nonatomic,strong) Class footerClass;
@property(nonatomic,strong) Class cellClass;

@property(nonatomic,strong) NSString* tag;

@property(nonatomic,assign) NSInteger index;

@property(nonatomic,assign) UIEdgeInsets sectionInsets;



@property(nonatomic,weak) UICollectionView* collectionView;


@property(nonatomic,assign) CGFloat cellWidthMultiple;
//MAXFLOAT为没有设置大小。
@property(nonatomic,assign) CGFloat cellWidth;
//cell 宽度 偏移
@property(nonatomic,assign) CGFloat cellWidthOffset;

@property(nonatomic,assign) CGFloat cellHegihtOffset;


@property(nonatomic,assign) CGFloat minimumInteritemSpacing;

@property(nonatomic,assign) CGFloat minimumLineSpacing;

/**
 实际上设置了
 sectionInsets = UIEdgeInsetsMake(aValue, 0, 0, 0);
 */
+ (instancetype) gap:(CGFloat)aValue;

/**
 实际上设置了
 haveHeader = YES;
 headerHeight = height;
 headerClass = aClass;
 */
- (void) setupHeaderWithClass:(Class)aClass height:(CGFloat)height;
+ (instancetype) headerWithClass:(Class)aClass height:(CGFloat)height;

/**
 实际上设置了
 haveFooter = YES;
 footerHeight = height;
 footerClass = aClass;
 */
- (void) setupFooterWithClass:(Class)aClass height:(CGFloat)height;
+ (instancetype) footerWithClass:(Class)aClass height:(CGFloat)height;

/**
 实际上设置了
 cellHeight = height;
 cellClass = aClass;
 通过 array 自动识别
 cellCount
 haveCell
 */
- (void) setupCellWithClass:(Class)aClass array:(NSArray*)array height:(CGFloat)height;
+ (instancetype) cellWithClass:(Class)aClass array:(NSArray*)array height:(CGFloat)height;






@end
