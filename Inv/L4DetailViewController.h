//
//  L4DetailViewController.h
//  InvMD
//
//  Created by Marco Lima on 2012-11-12.
//  Copyright (c) 2012 LIM4 Consulting Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface L4DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
