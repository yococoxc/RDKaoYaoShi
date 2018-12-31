//
//  YCQuestionBankView.m
//  RDKaoYaoShi
//
//  Created by muzico on 2018/12/26.
//  Copyright © 2018 muzico. All rights reserved.
//

#import "YCQuestionBankView.h"

@interface YCQuestionBankView ()

@property(nonatomic,strong) LQSBoxView *box;

@end


@implementation YCQuestionBankView

- (instancetype) initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        self.backgroundColor = [UIColor whiteColor];
        
        LQSBoxView *box = [LQSBoxView new];
        box.frame = self.bounds;
        [box loadHeadView:[UIView lqs_backgroundColor:@"R"]];
        box.headViewHeight = 44;
        
        [self addSubview:box];
        self.box = box;
    }
    return self;
}

#pragma mark -
- (void) setFrame:(CGRect)frame {
    if (CGRectEqualToRect(frame, self.frame)) {
        return;
    }
    [super setFrame:frame];
    [self mRelayout];
}
- (void) setBounds:(CGRect)bounds {
    if (CGRectEqualToRect(bounds, self.bounds)) {
        return;
    }
    [super setBounds:bounds];
    [self mRelayout];
}
- (void) mRelayout {
    self.box.frame = self.bounds;
}


@end
