//
//  ZDPopViewController.m
//  SinaWeiBo
//
//  Created by admin on 15/7/14.
//  Copyright (c) 2015年 admin. All rights reserved.
//
#define Margin 5
#import "ZDPopViewController.h"
@interface ZDPopViewController ()
@end

@implementation ZDPopViewController

- (instancetype)init{
    self = [super init];
    ZDpopView *popView = [[ZDpopView alloc] init];
 
    self.popview = popView;
    

    return self;
}

-(void)showInView:(UIView*)inView{
    [self.popview showInView:inView];
}

-(instancetype)initWithContentViewController:(UIViewController *) contentViewController andContentSize:(CGSize)aSize{
    
    ZDpopView *apopView   =  [[ZDpopView alloc] initWithContentView:contentViewController.view andContentSize:aSize];
    self.popview = apopView;
    return self;
}


@end
