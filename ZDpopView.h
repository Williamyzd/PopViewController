//
//  ZDpopView.h
//  弹出菜单
//
//  Created by admin on 15/7/15.
//  Copyright (c) 2015年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZDpopView ;
@protocol  ZDpopViewDelegate <NSObject>

- (void)popViewDidDied;
@end

@interface ZDpopView : UIView
@property(nonatomic, weak) id <ZDpopViewDelegate> delegate;
@property (nonatomic, weak) UIImageView *imageView;
-(void)showInView:(UIView*)inView;
-(void)dismiss;
-(instancetype)initWithContentView:(UIView*) contentView andContentSize:(CGSize)aSize;

@end
