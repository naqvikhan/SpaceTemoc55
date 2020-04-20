//
//  GameScene.h
//  SpaceTemoc
//
//  Created by Naqvi Khan on 11/9/19.
//  Copyright © 2019 Naqvi Khan. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <GameplayKit/GameplayKit.h>

@interface GameScene : SKScene

@property (nonatomic) NSMutableArray<GKEntity *> *entities;
@property (nonatomic) NSMutableDictionary<NSString*, GKGraph *> *graphs;

@end
