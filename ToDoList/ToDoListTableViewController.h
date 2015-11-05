//
//  ToDoListTableViewController.h
//  ToDoList
//
//  Created by Douglas P. Milstead on 7/28/15.
//  Copyright (c) 2015 Douglas P. Milstead. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ToDoListTableViewController : UITableViewController

@property NSMutableArray *toDoItems;
@property NSString *filename;

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;


@end
