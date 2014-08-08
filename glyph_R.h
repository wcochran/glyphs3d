#ifndef GLYPH_R
#define GLYPH_R

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_R_NUM_VERTS 204
#define GLYPH_R_WIDTH 0.86666667
#define GLYPH_R_DEPTH 0.17500000
extern GLfloat glyph_R[612];

#endif
