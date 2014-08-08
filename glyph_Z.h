#ifndef GLYPH_Z
#define GLYPH_Z

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_Z_NUM_VERTS 108
#define GLYPH_Z_WIDTH 0.88000000
#define GLYPH_Z_DEPTH 0.17500000
extern GLfloat glyph_Z[324];

#endif
