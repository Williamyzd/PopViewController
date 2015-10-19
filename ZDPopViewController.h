//
//  ZDPopViewController.h
//  SinaWeiBo
//
//  Created by admin on 15/7/14.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZDpopView.h"

@interface ZDPopViewController : NSObject
@property (nonatomic, weak) ZDpopView *popview;
@property (nonatomic, weak) UIView *contentView;

-(void)showInView:(UIView*)inView;
-(instancetype)initWithContentViewController:(UIViewController *) contentViewController andContentSize:(CGSize)aSize;
@end
