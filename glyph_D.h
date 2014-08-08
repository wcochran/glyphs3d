#ifndef GLYPH_D
#define GLYPH_D

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_D_NUM_VERTS 144
#define GLYPH_D_WIDTH 0.75000000
#define GLYPH_D_DEPTH 0.17500000
extern GLfloat glyph_D[432];

#endif
