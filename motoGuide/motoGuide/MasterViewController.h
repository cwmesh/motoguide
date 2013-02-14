//
//  MasterViewController.h
//  fdsa
//
//  Created by Corey Mesh on 2013-01-17.
//  Copyright (c) 2013 Corey Mesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController{
    NSMutableArray* companies_;
}

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (nonatomic,retain)NSMutableArray* companies;
@end
