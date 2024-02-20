#pragma once
#include<glew.h>
class Mesh
{
public:
	Mesh();//Recibe datos de v�rtices e �ndices
	void CreateMesh(GLfloat *vertices,unsigned int *indices, unsigned int numOfVertices, unsigned int numberOfIndices);
	void RenderMesh();
	void ClearMesh();
	~Mesh();
private:
	GLuint VAO, VBO, IBO;
	GLsizei indexCount;

};
class MeshColor
{
public:
	MeshColor(); //s�lo recibe v�rtices
	void CreateMeshColor(GLfloat *vertices, unsigned int numOfVertices);
	void RenderMeshColor();
	void ClearMeshColor();
	~MeshColor();
private:
	GLuint VAO, VBO, IBO;
	GLsizei  vertexCount;
};

