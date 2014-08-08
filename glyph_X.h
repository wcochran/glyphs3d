#ifndef GLYPH_X
#define GLYPH_X

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_X_NUM_VERTS 132
#define GLYPH_X_WIDTH 0.83333333
#define GLYPH_X_DEPTH 0.17500000
extern GLfloat glyph_X[396];

#endif
