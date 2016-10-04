//
//  ToDoItem.h
//  InDueTime
//
//  Created by Komari Herring on 8/30/16.
//  Copyright © 2016 The Iron Yard. All rights reserved.

#import "ToDoItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface ToDoItem (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *toDoDescription;
@property (nullable, nonatomic, retain) NSNumber *isDone;
@property (nullable, nonatomic, retain) NSString *extraDetail;
@property (nullable, nonatomic, retain) NSDate *dueDate;
@property (nullable, nonatomic, retain) NSNumber *countOfSomething;
@property (nullable, nonatomic, retain) NSNumber *bonusToggle;
@property (nullable, nonatomic, retain) NSString *misc;

@end

NS_ASSUME_NONNULL_END
