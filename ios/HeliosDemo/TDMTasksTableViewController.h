//
//  TDMTasksTableViewController.h
//  HeliosDemo
//
//  Created by Craig Clayton on 2/20/14.
//  Copyright (c) 2014 Craig Clayton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDMTasksTableViewController : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext* context;

@property (strong, nonatomic) IBOutlet UITextField *txtTask;



@end
