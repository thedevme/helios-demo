//
//  TDMAppDelegate.h
//  HeliosDemo
//
//  Created by Craig Clayton on 2/19/14.
//  Copyright (c) 2014 Craig Clayton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TDMAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;

@end
