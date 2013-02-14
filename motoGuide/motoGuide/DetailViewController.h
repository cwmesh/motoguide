//
//  DetailViewController.h
//  fdsa
//
//  Created by Corey Mesh on 2013-01-17.
//  Copyright (c) 2013 Corey Mesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>{
    IBOutlet UIWebView* webView_;
}

@property (strong, nonatomic) id detailItem;
@property(nonatomic,retain)UIWebView *webView;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
