//
//  M2Scene.h
//  m2048
//
//  Created by Danqing on 26.05.17.
//  Copyright (c) 2017 Admin. All rights reserved.
//

@import SpriteKit;
@class M2Grid;
@class M2ViewController;

@interface M2Scene : SKScene

@property (nonatomic, weak) M2ViewController *controller;

- (void)startNewGame;

- (void)loadBoardWithGrid:(M2Grid *)grid;

@end
