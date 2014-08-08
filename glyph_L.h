#ifndef GLYPH_L
#define GLYPH_L

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_L_NUM_VERTS 60
#define GLYPH_L_WIDTH 0.70000000
#define GLYPH_L_DEPTH 0.17500000
extern GLfloat glyph_L[180];

#endif
