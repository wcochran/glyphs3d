#ifndef GLYPH_H
#define GLYPH_H

#if defined(__APPLE__) || defined(MACOSX)
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#define GLYPH_H_NUM_VERTS 132
#define GLYPH_H_WIDTH 0.76666667
#define GLYPH_H_DEPTH 0.17500000
extern GLfloat glyph_H[396];

#endif
