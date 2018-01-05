#ifndef Mesh_H
#define Mesh_H
#include <iostream>
#include"GLDefinds.h"

typedef struct Mesh_
{
	unsigned int vbo;
	unsigned int ebo;
	unsigned int vao;
	unsigned int verticesCount;
} MeshData;

extern MeshData Mesh_Load(float const * vertices, const int size, int const * indices, const int indicesSizes);

extern void Mesh_Draw(const MeshData& data);

#endif
