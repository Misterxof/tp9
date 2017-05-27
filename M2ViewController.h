//
//  M2ViewController.h
//  m2048
//
//
//  Created by Danqing on 26.05.17.
//  Copyright (c) 2017 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>

@interface M2ViewController : UIViewController

- (void)updateScore:(NSInteger)score;

- (void)endGame:(BOOL)won;

@end
