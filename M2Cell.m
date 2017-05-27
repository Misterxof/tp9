//
//  M2Cell.m
//  m2048
//
//  Created by Danqing on 26.05.17.
//  Copyright (c) 2017 Admin. All rights reserved.
//

#import "M2Cell.h"
#import "M2Tile.h"

@implementation M2Cell

- (instancetype)initWithPosition:(M2Position)position {
  if (self = [super init]) {
    self.position = position;
    self.tile = nil;
  }
  return self;
}


- (void)setTile:(M2Tile *)tile {
  _tile = tile;
  if (tile) tile.cell = self;
}

@end
