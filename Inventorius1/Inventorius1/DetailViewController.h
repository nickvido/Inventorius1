//
//  DetailViewController.h
//  Inventorius1
//
//  Created by Nicholas Vidovich on 11/26/12.
//  Copyright (c) 2012 Unit 91. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
