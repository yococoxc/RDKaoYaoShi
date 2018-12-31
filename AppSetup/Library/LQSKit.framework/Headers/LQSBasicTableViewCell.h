//
//  LQSBasicTableViewCell.h
//  LQSKit
//
//  Created by muzico on 2018/7/20.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LQSBasicTableViewCell : UITableViewCell

- (void) initializeWithView;


#pragma mark -
- (void) setupWithDictionary:(NSDictionary*)dictionary;
- (void) setupWithArray:(NSArray*)array;
- (void) setupWithDataSource:(id)dataSource;

@end
