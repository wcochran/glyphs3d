#ifndef GLYPH_O
#define GLYPH_O

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_O_NUM_VERTS 192
#define GLYPH_O_WIDTH 0.76666667
#define GLYPH_O_DEPTH 0.17500000
extern GLfloat glyph_O[576];

#endif
