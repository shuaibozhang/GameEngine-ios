//
//  ViewController.m
//  GameEngine-ios
//
//  Created by zhang on 2018/1/2.
//  Copyright © 2018年 zhang. All rights reserved.
//

#import "ViewController.h"
#import "EAGLView.h"
@interface ViewController ()

@end

@implementation ViewController

// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
    CGRect screenBounds = [[UIScreen mainScreen] bounds];
    self.view = [[EAGLView alloc] initWithFrame:screenBounds];
    animating = false;
}

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)viewWillAppear:(BOOL)animated {
    //[self startAnimation];
    [super viewWillAppear:animated];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
}

- (void)startAnimation
{
    if (!animating)
    {
        CADisplayLink *aDisplayLink = [[UIScreen mainScreen] displayLinkWithTarget:self selector:@selector(drawFrame)];
        [aDisplayLink setFrameInterval:1];
        [aDisplayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
        self->displayLink = aDisplayLink;
        
        animating = TRUE;
    }
}

- (void)drawFrame
{
    [(EAGLView *)self.view setFramebuffer];
    
        
    [(EAGLView *)self.view presentFramebuffer];
}

// For ios6, use supportedInterfaceOrientations & shouldAutorotate instead
#ifdef __IPHONE_6_0
- (NSUInteger) supportedInterfaceOrientations{
    return UIInterfaceOrientationMaskAllButUpsideDown;
}
#endif

- (BOOL) shouldAutorotate {
    return YES;
}

- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation {
    [super didRotateFromInterfaceOrientation:fromInterfaceOrientation];
}

//fix not hide status on ios7
- (BOOL)prefersStatusBarHidden {
    return YES;
}


- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}


@end
