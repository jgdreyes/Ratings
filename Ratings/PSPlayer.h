//
//  PSPlayer.h
//  Ratings
//
//  Created by Jennifer Reyes on 2/8/14.
//  Copyright (c) 2014 Pumpkin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PSPlayer : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
