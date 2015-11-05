//
//  ToDoItem.m
//  ToDoList
//
//  Created by Douglas P. Milstead on 7/29/15.
//  Copyright (c) 2015 Douglas P. Milstead. All rights reserved.
//

#import "ToDoItem.h"

@implementation ToDoItem

- (id)initWithCoder:(NSCoder *)decoder {
    if (self = [super init]) {
        self.itemName = [decoder decodeObjectForKey:kField1Key];
        self.completed = [decoder decodeBoolForKey:kField2Key];
    }
    
    return self;
}

- (void)encodeWithCoder:(NSCoder *)encoder {
    [encoder encodeObject:self.itemName forKey:kField1Key];
    [encoder encodeBool:self.completed forKey:kField2Key];
}

@end
