//
//  ViewController.h
//  ScrollImage
//
//  Created by henyep on 15/8/6.
//  Copyright (c) 2015年 com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIScrollViewDelegate>
@property (strong, nonatomic) UIScrollView *scrV;
@property (strong, nonatomic) UIPageControl *pageC;
@property (strong, nonatomic) UIImageView *imgVLeft;
@property (strong, nonatomic) UIImageView *imgVCenter;
@property (strong, nonatomic) UIImageView *imgVRight;
@property (strong, nonatomic) UILabel *lblImageDesc;
@property (strong, nonatomic) NSMutableDictionary *mDicImageData;
@property (assign, nonatomic) NSUInteger currentImageIndex;
@property (assign, nonatomic) NSUInteger imageCount;

@end

