//
//  ToDoItem.h
//  ToDoList
//
//  Created by Douglas P. Milstead on 7/29/15.
//  Copyright (c) 2015 Douglas P. Milstead. All rights reserved.
//

#import <Foundation/Foundation.h>

#define    kField1Key    @"itemName"
#define    kField2Key    @"completed"

@interface ToDoItem : NSObject <NSCoding>

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
