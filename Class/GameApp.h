//
//  GameApp.hpp
//  GameEngine
//
//  Created by zhang on 2017/12/28.
//  Copyright © 2017年 zhang. All rights reserved.
//

#ifndef GameApp_h
#define GameApp_h

#include <stdio.h>

typedef struct
{
    void ( *Init			)( int width, int height );
    void ( *Draw			)( void );
    void ( *ToucheBegan	    )( float x, float y, unsigned int tap_count );
    void ( *ToucheMoved	    )( float x, float y, unsigned int tap_count );
    void ( *ToucheEnded	    )( float x, float y, unsigned int tap_count );
    void ( *Accelerometer   )( float x, float y, float z );
    
} GAMEDELEGATE;

extern  GAMEDELEGATE templateApp;

class GameApp
{
public:
    virtual void appInit( int width, int height ) = 0;
    
    virtual void appRender( void ) = 0;
    
    virtual void appExit( void ) = 0;
    
    void appToucheBegan( float x, float y, unsigned int tap_count );
    
    void appToucheMoved( float x, float y, unsigned int tap_count );
    
    void appToucheEnded( float x, float y, unsigned int tap_count );
    
    void appToucheCancelled( float x, float y, unsigned int tap_count );
};

#endif /* GameApp_h */
