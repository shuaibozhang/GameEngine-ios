//
//  GameApp.cpp
//  GameEngine
//
//  Created by zhang on 2017/12/28.
//  Copyright © 2017年 zhang. All rights reserved.
//

#include "GameApp.h"

GameApp* GameApp::_appInstance = nullptr;

GameApp* GameApp::getAppInstance()
{
    if(_appInstance == nullptr)
    {
        _appInstance = new GameApp();
    }
    
    return _appInstance;
}

void GameApp::appInit(int width, int height)
{

}

void GameApp::appRender()
{
    
}

void GameApp::appExit()
{
    
}

void GameApp::appToucheBegan(float x, float y, unsigned int count)
{
    
}

void GameApp::appToucheMoved(float x, float y, unsigned int count)
{
    
}

void GameApp::appToucheEnded(float x, float y, unsigned int count)
{
    
}
