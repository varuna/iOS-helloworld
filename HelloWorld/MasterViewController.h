//
//  MasterViewController.h
//  HelloWorld
//
//  Created by Varuna Lekamwasam on 11/21/12.
//  Copyright (c) 2012 Varuna Lekamwasam. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
