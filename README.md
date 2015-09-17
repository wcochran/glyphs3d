# 3D Glyphs

# Description:

Library of 3D glyphs suitable for rendering via OpenGL/WebGL.
Each glyph is represented by a mesh of N triangles (3*N vertices, 9*N floats).
Triangles are oriented CCW from their visible side.
Upper case letters and digits have a height of 1 (above the base line).
Each glyph has a different width (see headers).

# Authors
  * Wayne Cochran  (wcochran@wsu.edu)
  * Adam Bennet
  * Gabriel Dunham
  * Eric Klinginsmith
  * Ben Longbons
  * Joseph O'Banion
  * Jesse Pitel
  * Mitch Pulley
  * Timothy Rast
  * Sebastian Sanchez
  * Michael Swiger

# Modification History
   * Sept 26, 2013..... Created.
   * Aug 8, 2014 ...... Created converter to JSON
   * Sep 27, 2015 ..... Generate JS (instead of JSON) -- easier to include in html.

# Buidling

  * To build static library glyph.a and composite header glyph.h

    make
    make clean

  * Destroy all generated files

    make clobber

  * To convert C source for glyphs into JS

   ./mkjs.sh

# Files in archive:

* `README` This file.
* `Makefile`  for building static library glyph.a and header file glyph.h
* `glyph_[0-9A-Z].h` C headers for individual glyphs
* `glyph_[0-9A-Z].c` C source for individual glyphs
* `mkheader.pl` Perl script that makes glyph.h from all the glyph_[0-9A-Z].h's
* `glyph_[0-9A_Z].js`  JavaScript version of glyph
* `c2js.pl`  Perl script that converts a glyph from C to JavaScript
* `mkjs.pl`  bash script that converts all C glyphs to JavaScript
