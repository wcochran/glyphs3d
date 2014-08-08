#ifndef GLYPH_T
#define GLYPH_T

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_T_NUM_VERTS 84
#define GLYPH_T_WIDTH 0.80000000
#define GLYPH_T_DEPTH 0.17500000
extern GLfloat glyph_T[252];

#endif
