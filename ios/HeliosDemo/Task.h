//
//  Task.h
//  HeliosDemo
//
//  Created by Craig Clayton on 2/19/14.
//  Copyright (c) 2014 Craig Clayton. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSDate * completedAt;
@property (nonatomic, retain) NSString * text;

@property (nonatomic, getter = isCompleted) BOOL completed;

@end
