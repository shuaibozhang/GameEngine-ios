//
//  GameApp.cpp
//  GameEngine
//
//  Created by zhang on 2017/12/28.
//  Copyright © 2017年 zhang. All rights reserved.
//

#include "GameApp.h"
#include"GLDefinds.h"
#include"commond/Mesh.h"
#include"commond/Shader.h"

GameApp* GameApp::_appInstance = nullptr;

ShaderData shader;
MeshData mesh;

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
    glViewport(0, 0, width, height);
    
	float vertices[] = {
		0.5f, 0.5f, 0.0f,   // 右上角
		0.5f, -0.5f, 0.0f,  // 右下角
		-0.5f, -0.5f, 0.0f, // 左下角
		-0.5f, 0.5f, 0.0f   // 左上角
	};

	int indices[] = { // 注意索引从0开始! 
		0, 1, 3, // 第一个三角形
		1, 2, 3  // 第二个三角形
	};

	Shader_Create_Default(shader);
	mesh = Mesh_Load(vertices, sizeof(vertices), indices, sizeof(indices));
}

void GameApp::appRender()
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glUseProgram(shader.shaderProgram);
	Mesh_Draw(mesh);
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
