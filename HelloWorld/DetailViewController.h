//
//  DetailViewController.h
//  HelloWorld
//
//  Created by Varuna Lekamwasam on 11/21/12.
//  Copyright (c) 2012 Varuna Lekamwasam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
