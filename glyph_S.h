#ifndef GLYPH_S
#define GLYPH_S

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_S_NUM_VERTS 180
#define GLYPH_S_WIDTH 0.76666667
#define GLYPH_S_DEPTH 0.17500000
extern GLfloat glyph_S[540];

#endif
