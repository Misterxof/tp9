//
//  M2Overlay.h
//  m2048
//
//  Created by Danqing on 26.05.17.
//  Copyright (c) 2017 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M2Overlay : UIView

@property (nonatomic, weak) IBOutlet UILabel *message;

@property (nonatomic, weak) IBOutlet UIButton *keepPlaying;

@property (nonatomic, weak) IBOutlet UIButton *restartGame;

@end
