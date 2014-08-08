#ifndef GLYPH_N
#define GLYPH_N

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_N_NUM_VERTS 108
#define GLYPH_N_WIDTH 0.78333333
#define GLYPH_N_DEPTH 0.17500000
extern GLfloat glyph_N[324];

#endif
