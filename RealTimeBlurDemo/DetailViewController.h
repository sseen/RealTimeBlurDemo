//
//  DetailViewController.h
//  RealTimeBlurDemo
//
//  Created by MSDJ on 15/6/1.
//  Copyright (c) 2015年 MSDJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

