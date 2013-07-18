//
//  ViewController.h
//  TableViewSearch
//
//  Created by Baljeet Singh on 14/02/13.
//  Copyright (c) 2013 Baljeet Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchBarDelegate,UISearchDisplayDelegate>
{
    NSString *searchText1 ;
    NSMutableArray*data;
    UITableView*tableView;
    UISearchBar*searchbar;
    NSMutableArray *copydata;
    BOOL searching;
    BOOL letUserSelectRow;
}
@property (retain, nonatomic) IBOutlet UISearchBar *searchbar;
- (void) searchTableView;
- (void) doneSearching_Clicked:(id)sender;
@property (retain, nonatomic) NSString*searchText1;;
@property (retain, nonatomic) IBOutlet UITableView *tableView;

@end
