//
//  LQSViewTemplate.h
//  LQSKit
//
//  Created by muzico on 2018/8/14.
//  Copyright © 2018年 muzico. All rights reserved.
//

#import "LQSView.h"

@interface LQSViewTemplate : LQSView

//这个bodyContentView已经通过 setupBodyView: 方法加载到里面。
@property(nonatomic,strong,readonly) UIView* bodyContentView;

@end
