//
//  Grid.h
//  GameOfLife
//
//  Created by Jessica Jiang on 6/24/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h" //properties and methods

@interface Grid : CCSprite //Grid extends CCSprite, meaning it is a CCSprite with different properties

@property (nonatomic, assign) int totalAlive; //variables
@property (nonatomic, assign) int generation; //properties make variables: variables are like nouns.


-(void)evolveStep;
-(void)countNeighbors;
-(void)updateCreatures; //methods: methods are like verbs


@end
