//
//  ToDoItem.h
//  ToDoList
//
//  Created by Jacobo on 2/17/15.
//  Copyright (c) 2015 Jacobo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
