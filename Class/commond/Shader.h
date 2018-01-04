#ifndef Shader_H
#define Shader_H
#include <iostream>
#include"GLDefinds.h"

typedef struct Shader_
{
	unsigned int shaderProgram;
} ShaderData;

extern void Shader_Create(ShaderData& shader, std::string vpath, std::string fpath);
extern void Shader_Create_Default(ShaderData& shader);

#endif