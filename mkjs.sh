#!/bin/bash

#
# Uses c2js.pl script to convert glyphs from C source to JS format
#

for C in 0 1 2 3 4 5 6 7 8 9 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z; do
    F=glyph_$C.js
    echo "creating $F..."
    ./c2js.pl $C > $F
done
