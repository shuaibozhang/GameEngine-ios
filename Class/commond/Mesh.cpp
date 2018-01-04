#include "Mesh.h"

MeshData Mesh_Load(float const * vertices, const int size, int const * indices, const int indicesSize)
{
	MeshData meshdata;

	unsigned int VAO;
	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);

	unsigned int VBO;
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);

	unsigned int EBO;
	glGenBuffers(1, &EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, indicesSize, indices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glBindVertexArray(0);

	meshdata.vao = VAO;
	meshdata.vbo = VBO;
	meshdata.ebo = EBO;
	meshdata.verticesCount = indicesSize;

	return meshdata;
}

void Mesh_Draw(const MeshData & data)
{
	glBindVertexArray(data.vao);
	glDrawElements(GL_TRIANGLES, data.verticesCount, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}
