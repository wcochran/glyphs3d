#ifndef GLYPH_C
#define GLYPH_C

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_C_NUM_VERTS 180
#define GLYPH_C_WIDTH 0.76666667
#define GLYPH_C_DEPTH 0.17500000
extern GLfloat glyph_C[540];

#endif
