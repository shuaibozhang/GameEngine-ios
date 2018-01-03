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

class GameApp
{
public:
    void appInit( int width, int height );
    
    void appRender( void );
    
    void appExit( void );
    
    void appToucheBegan( float x, float y, unsigned int tap_count );
    
    void appToucheMoved( float x, float y, unsigned int tap_count );
    
    void appToucheEnded( float x, float y, unsigned int tap_count );
    
    static GameApp* getAppInstance();
private:
    static GameApp* _appInstance;
};

#endif /* GameApp_h */
