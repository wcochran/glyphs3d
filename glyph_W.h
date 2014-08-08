#ifndef GLYPH_W
#define GLYPH_W

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_W_NUM_VERTS 144
#define GLYPH_W_WIDTH 1.33333333
#define GLYPH_W_DEPTH 0.17500000
extern GLfloat glyph_W[432];

#endif
