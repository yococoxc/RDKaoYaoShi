//
//  RD__HomeView.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/9/5.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "RD__HomeView.h"

#import "RD__HomeCollectionReusableHeader.h"
#import "RD__HomeCollectionReusableActivity.h"
#import "RD__HomeCollectionReusableLiveBroadcastCalendar.h"
#import "RD__HomeCollectionReusableRecommendLiveBroadcast.h"
#import "RD__HomeCollectionReusableRecommendCourse.h"
#import "RD__HomeCollectionReusableTopActivities.h"



#import "HomeUserOrderDetailsRequest.h"
#import "HomeActityRecommendListRequest.h"
#import "HomeActityListRequest.h"

#import "MJRefresh.h"


@interface RD__HomeView ()<LQSRequestImplementDelegate>
{
    BOOL isHomeUserOrderDetailsRequest;
    BOOL isHomeActityRecommendListRequest;
    BOOL isHomeActityListRequest;
}

@end




@implementation RD__HomeView

- (void) initializeWithView {
    [super initializeWithView];
    
    
    
    NSMutableArray* keepArray = [NSMutableArray array];
    
    {
        LQSCollectionSectionItem* item = [LQSCollectionSectionItem headerWithClass:[RD__HomeCollectionReusableHeader class] height:0];
        item.tag = @"头";
        [keepArray addObject:item];
        
        [keepArray addObject:[LQSCollectionSectionItem gap:10]];
    }
    {
        LQSCollectionSectionItem* item = [LQSCollectionSectionItem headerWithClass:[RD__HomeCollectionReusableActivity class] height:0];
        item.tag = @"活动推荐";
        [keepArray addObject:item];
        
        [keepArray addObject:[LQSCollectionSectionItem gap:10]];
    }
    {
        LQSCollectionSectionItem* item = [LQSCollectionSectionItem headerWithClass:[RD__HomeCollectionReusableLiveBroadcastCalendar class] height:50];
        [keepArray addObject:item];
        
        [keepArray addObject:[LQSCollectionSectionItem gap:10]];
    }
    
    {
        LQSCollectionSectionItem* item = [LQSCollectionSectionItem headerWithClass:[RD__HomeCollectionReusableRecommendLiveBroadcast class] height:250];
        [keepArray addObject:item];
        
        [keepArray addObject:[LQSCollectionSectionItem gap:10]];
    }
    
    {
        LQSCollectionSectionItem* item = [LQSCollectionSectionItem headerWithClass:[RD__HomeCollectionReusableRecommendCourse class] height:250];
        [keepArray addObject:item];
        
        [keepArray addObject:[LQSCollectionSectionItem gap:10]];
    }
    
    
    {
        LQSCollectionSectionItem* item = [LQSCollectionSectionItem headerWithClass:[RD__HomeCollectionReusableTopActivities class] height:0];
        item.tag = @"热门活动";
        [keepArray addObject:item];
        
        [keepArray addObject:[LQSCollectionSectionItem gap:10]];
    }
    
    self.collectionDataSource = keepArray;
    
    
    
    self.collectionManager.collectionView.mj_header = [MJRefreshNormalHeader headerWithRefreshingTarget:self refreshingAction:@selector(headerWithRefreshing)];
    [self.collectionManager.collectionView.mj_header beginRefreshing];
}


- (void) headerWithRefreshing {
    {
        HomeUserOrderDetailsRequest* request = [HomeUserOrderDetailsRequest requestWithDelegate:self];
        request.tag = @"HomeUserOrderDetailsRequest";
        [request requestWithOnly:&isHomeUserOrderDetailsRequest];
    }
    {
        HomeActityRecommendListRequest* request = [HomeActityRecommendListRequest requestWithDelegate:self];
        request.tag = @"HomeActityRecommendListRequest";
        [request requestWithOnly:&isHomeActityRecommendListRequest];
    }
    {
        HomeActityListRequest* request = [HomeActityListRequest requestWithDelegate:self];
        request.tag = @"HomeActityListRequest";
        [request requestWithOnly:&isHomeActityListRequest];
    }
}

#pragma mark - LQSRequestImplementDelegate
- (void) lqsRequestImplement:(LQSRequestImplement *)request error:(NSError *)error {
    [self.collectionManager.collectionView.mj_header endRefreshing];
}
- (void) lqsRequestImplement:(LQSRequestImplement *)request success:(id)result {
    [self.collectionManager.collectionView.mj_header endRefreshing];
    
    /*************************************************************************/
    if ([request.tag lqs__isEqualToString:@"HomeUserOrderDetailsRequest"]) {
        if ([result lqs__isNSDictionary]) {
            NSString* code = [result lqs__toStringWithObjectForKey:@"code"];
            if ([code lqs__isEqualToString:@"1"]) {
                
                
                LQSCollectionSectionItem* item = [self itemWithTag:@"头"];
                if (item) {
                    item.dataSourceDictionary = [result objectForKey:@"data"];
                    
                    CGSize size = [[UIScreen mainScreen] bounds].size;
                    CGFloat height = [LQS heightWithWidth:size.width equalRatioWithOtherWidth:375 otherHeight:276];
                    item.headerHeight = height;
                }
            }
        }
    }
    /*************************************************************************/
    if ([request.tag lqs__isEqualToString:@"HomeActityRecommendListRequest"]) {
        if ([result lqs__isNSDictionary]) {
            NSString* code = [result lqs__toStringWithObjectForKey:@"code"];
            if ([code lqs__isEqualToString:@"1"]) {
                NSDictionary* data = [result objectForKey:@"data"];
                if ([data lqs__isNSDictionary] == NO) {
                    return;
                }
                NSArray* list = [data objectForKey:@"list"];
                if ([list lqs__length] == 0) {
                    return;
                }
                
                LQSCollectionSectionItem* item = [self itemWithTag:@"活动推荐"];
                if (item) {
                    item.dataSourceArray = list;
                    item.headerHeight = 88;
                }
            }
        }
    }
    /*************************************************************************/
    if ([request.tag lqs__isEqualToString:@"HomeActityListRequest"]) {
        if ([result lqs__isNSDictionary]) {
            NSString* code = [result lqs__toStringWithObjectForKey:@"code"];
            if ([code lqs__isEqualToString:@"1"]) {
                NSDictionary* data = [result objectForKey:@"data"];
                if ([data lqs__isNSDictionary] == NO) {
                    return;
                }
                NSArray* list = [data objectForKey:@"list"];
                if ([list lqs__length] == 0) {
                    return;
                }
                
                LQSCollectionSectionItem* item = [self itemWithTag:@"热门活动"];
                if (item) {
                    item.dataSourceArray = list;
                    
                    CGFloat width = [[UIScreen mainScreen] bounds].size.width-20-20;
                    CGFloat height = [LQS heightWithWidth:width equalRatioWithOtherWidth:690 otherHeight:218];
                    item.headerHeight = height + 30 + 40;
                }
            }
        }
    }
    /*************************************************************************/
    
    
    [self.collectionManager.collectionView reloadData];
}


@end
