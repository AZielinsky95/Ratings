//
//  PlayersTableViewController.h
//  Ratings
//
//  Created by Alejandro Zielinsky on 2018-04-23.
//  Copyright © 2018 Alejandro Zielinsky. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersTableViewController : UITableViewController <PlayerDetailsViewControllerDelegate>


@property (nonatomic,strong) NSMutableArray *players;
@end
