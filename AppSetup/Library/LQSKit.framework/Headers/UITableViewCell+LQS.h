//
//  UITableViewCell+LQS.h
//  LQSKit
//
//  Created by muzico on 2018/12/22.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewCell (LQS)

+ (instancetype) lqs_cellWithTableView:(UITableView *) tableView;

+ (instancetype) lqs_cellFromXIBWithTableView:(UITableView *) tableView;

@end
