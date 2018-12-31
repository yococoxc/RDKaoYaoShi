//
//  CommonTableView.h
//  juhao
//
//  Created by muzico on 2018/11/30.
//  Copyright © 2018 muzico. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CommonTableView;

typedef void(^CommonTableViewDidSelectBlock)(CommonTableView *tableView, NSInteger index);
typedef void(^CommonTableViewSetupCellBlock)(CommonTableView *tableView, id cell, id dataSource, NSInteger index);

@protocol CommonTableViewDelegate<NSObject>

@optional
- (void) commonTableView:(CommonTableView *)tableView didSelectWithDataSource:(NSDictionary *)dataSource atIndex:(NSInteger)index;

@end

@interface CommonTableView : UITableView

@property (strong ,nonatomic) id/*UITableViewCell*/ customCell;

@property (strong, nonatomic) NSArray<NSDictionary *> *tableDataSource;

@property (weak ,nonatomic) id<CommonTableViewDelegate> commonDelegate;

@property (copy, nonatomic) CommonTableViewDidSelectBlock didSelectBlock;

@property (copy, nonatomic) CommonTableViewSetupCellBlock setupCellBlock;

@property (assign, nonatomic) CGFloat cellHeight;

+ (instancetype) createWithCommonDelegate:(id<CommonTableViewDelegate>)delegate;

@end


/*
 没有设定 customCell 的情况下，默认将会采用内置的UITableViewCell。
 而这个时候的 tableDataSource，将会读取下面的字典数据。
 
 
 bg，配置 Cell 的颜色。默认为白色，支持16进制颜色，透明填clear。
 type，不填就是默认Cell；填写gap，则表示这是一个间隔，将会按照内部约定的处理。
 left text，左边的标签的内容。
 right text，右边标签的内容。
 name，名称，当left text没有内容时，会自动写入到其中。
 height，高度，Cell 默认为 44。
 icon，左边标签前面的图像。
 line，底部的线。可选值为no（没有线），all（没有偏移的线），也可以填入向右偏移多少的数值，默认偏移16。
 end icon，最右边的icon。默认为没有，可选值为：检查、详情、详情箭头、箭头。
 */

