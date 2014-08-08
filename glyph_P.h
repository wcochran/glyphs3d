#ifndef GLYPH_P
#define GLYPH_P

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_P_NUM_VERTS 168
#define GLYPH_P_WIDTH 0.76666667
#define GLYPH_P_DEPTH 0.17500000
extern GLfloat glyph_P[504];

#endif
