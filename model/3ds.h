#ifndef __3DS_H__
#define __3DS_H__

typedef struct
{
	char Name[32];
	float Ambient[4];
	float Diffuse[4];
	float Specular[4];
	float Emission[4];
	float Shininess;
	char Texture[32];
} Material3DS_t;

typedef struct
{
	char Name[32];
	char MaterialName[32];

	unsigned short NumVertex;
	float *Vertex, *UV, *Normal;

	unsigned short NumFace;
	unsigned short *Face;
} Mesh3DS_t;

typedef struct
{
	int NumMaterial;
	Material3DS_t *Material;

	int NumMesh;
	Mesh3DS_t *Mesh;
} Model3DS_t;

int Load3DS(Model3DS_t *Model, char *Filename);
void Free3DS(Model3DS_t *Model);

#endif
