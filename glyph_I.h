#ifndef GLYPH_I
#define GLYPH_I

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_I_NUM_VERTS 36
#define GLYPH_I_WIDTH 0.21666667
#define GLYPH_I_DEPTH 0.17500000
extern GLfloat glyph_I[108];

#endif
