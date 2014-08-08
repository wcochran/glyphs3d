#ifndef GLYPH_V
#define GLYPH_V

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_V_NUM_VERTS 72
#define GLYPH_V_WIDTH 0.83333333
#define GLYPH_V_DEPTH 0.17500000
extern GLfloat glyph_V[216];

#endif
