//
//  PlayerDetailsViewController.h
//  Ratings
//
//  Created by Alejandro Zielinsky on 2018-04-23.
//  Copyright © 2018 Alejandro Zielinsky. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GamePickerViewController.h"
@class PlayerDetailsViewController;
@class Player;
@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Player *)player;
@end

@interface PlayerDetailsViewController : UITableViewController <GamePickerViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
