//
//  Grid.h
//  GameOfLife
//
//  Created by Jessica Jiang on 6/24/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void)touchBegan:(UITouch *)touch withEvent:(UIEvent *)event;

-(void)evolveStep;
-(void)countNeighbors;
-(void)updateCreatures;


@end
