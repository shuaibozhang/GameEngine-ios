//
//  ViewController.h
//  GameEngine-ios
//
//  Created by zhang on 2018/1/2.
//  Copyright © 2018年 zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>

@interface ViewController : UIViewController
{
    EAGLContext *context;
    
    BOOL animating;
    NSInteger animationFrameInterval;
    CADisplayLink *displayLink;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) NSInteger animationFrameInterval;

- (void)startAnimation;
- (void)stopAnimation;

@end

