//
//  Player.h
//  Ratings
//
//  Created by Alejandro Zielinsky on 2018-04-23.
//  Copyright © 2018 Alejandro Zielinsky. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject

@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *game;
@property (nonatomic,assign) int rating;
@end
