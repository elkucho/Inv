//
//  L4MasterViewController.h
//  InvMD
//
//  Created by Marco Lima on 2012-11-12.
//  Copyright (c) 2012 LIM4 Consulting Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class L4DetailViewController;

@interface L4MasterViewController : UITableViewController

@property (strong, nonatomic) L4DetailViewController *detailViewController;

@end
