//
//  OpenGLView.h
//  Tutorial01
//
//  Created by  on 12-11-24.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

@interface EAGLView : UIView {
    @private
        EAGLContext *context;
        
        // The pixel dimensions of the CAEAGLLayer.
        GLint framebufferWidth;
        GLint framebufferHeight;
        
        // The OpenGL ES names for the framebuffer and renderbuffer used to render to this view.
        GLuint defaultFramebuffer, colorRenderbuffer, depthRenderbuffer;
    }
    
    @property (nonatomic, retain) EAGLContext *context;
    
    - (void)setFramebuffer;
    - (BOOL)presentFramebuffer;

@end
