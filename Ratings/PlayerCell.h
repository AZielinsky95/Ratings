//
//  PlayerCell.h
//  Ratings
//
//  Created by Alejandro Zielinsky on 2018-04-23.
//  Copyright © 2018 Alejandro Zielinsky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
