//
//  Task.m
//  HeliosDemo
//
//  Created by Craig Clayton on 2/19/14.
//  Copyright (c) 2014 Craig Clayton. All rights reserved.
//

#import "Task.h"


@implementation Task

@dynamic completedAt;
@dynamic text;

- (BOOL) isCompleted
{
    return self.completedAt != nil;
}

- (void) setCompleted:(BOOL)completed
{
    self.completedAt = completed ? [NSDate date] : nil;
}

@end
