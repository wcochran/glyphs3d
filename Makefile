CC=gcc
COPTS=
AR=ar
ALL=glyph.a glyph.h

all: $(ALL)

JUNK=*.o *~

clean:
	-rm -rf $(JUNK)

clobber:
	-rm -rf $(JUNK) $(ALL) 

glyph.a: glyph_0.o glyph_1.o glyph_2.o glyph_3.o glyph_4.o glyph_5.o \
    glyph_6.o glyph_7.o glyph_8.o glyph_9.o glyph_A.o glyph_B.o \
    glyph_C.o glyph_D.o glyph_E.o glyph_F.o glyph_G.o glyph_H.o \
    glyph_I.o glyph_J.o glyph_K.o glyph_L.o glyph_M.o glyph_N.o \
    glyph_O.o glyph_P.o glyph_Q.o glyph_R.o glyph_S.o glyph_T.o \
    glyph_U.o glyph_V.o glyph_W.o glyph_X.o glyph_Y.o glyph_Z.o 
	$(AR) rcs glyph.a $^

.c.o:
	$(CC) -c $(COPTS) $<

glyph.h : glyph_0.h glyph_1.h glyph_2.h glyph_3.h glyph_4.h glyph_5.h \
    glyph_6.h glyph_7.h glyph_8.h glyph_9.h glyph_A.h glyph_B.h \
    glyph_C.h glyph_D.h glyph_E.h glyph_F.h glyph_G.h glyph_H.h \
    glyph_I.h glyph_J.h glyph_K.h glyph_L.h glyph_M.h glyph_N.h \
    glyph_O.h glyph_P.h glyph_Q.h glyph_R.h glyph_S.h glyph_T.h \
    glyph_U.h glyph_V.h glyph_W.h glyph_X.h glyph_Y.h glyph_Z.h 
	./mkheader.pl > glyph.h

glyph_0.o : glyph_0.c glyph_0.h
glyph_1.o : glyph_1.c glyph_1.h
glyph_2.o : glyph_2.c glyph_2.h
glyph_3.o : glyph_3.c glyph_3.h
glyph_4.o : glyph_4.c glyph_4.h
glyph_5.o : glyph_5.c glyph_5.h
glyph_6.o : glyph_6.c glyph_6.h
glyph_7.o : glyph_7.c glyph_7.h
glyph_8.o : glyph_8.c glyph_8.h
glyph_9.o : glyph_9.c glyph_9.h
glyph_A.o : glyph_A.c glyph_A.h
glyph_B.o : glyph_B.c glyph_B.h
glyph_C.o : glyph_C.c glyph_C.h
glyph_D.o : glyph_D.c glyph_D.h
glyph_E.o : glyph_E.c glyph_E.h
glyph_F.o : glyph_F.c glyph_F.h
glyph_G.o : glyph_G.c glyph_G.h
glyph_H.o : glyph_H.c glyph_H.h
glyph_I.o : glyph_I.c glyph_I.h
glyph_J.o : glyph_J.c glyph_J.h
glyph_K.o : glyph_K.c glyph_K.h
glyph_L.o : glyph_L.c glyph_L.h
glyph_M.o : glyph_M.c glyph_M.h
glyph_N.o : glyph_N.c glyph_N.h
glyph_O.o : glyph_O.c glyph_O.h
glyph_P.o : glyph_P.c glyph_P.h
glyph_Q.o : glyph_Q.c glyph_Q.h
glyph_R.o : glyph_R.c glyph_R.h
glyph_S.o : glyph_S.c glyph_S.h
glyph_T.o : glyph_T.c glyph_T.h
glyph_U.o : glyph_U.c glyph_U.h
glyph_V.o : glyph_V.c glyph_V.h
glyph_W.o : glyph_W.c glyph_W.h
glyph_X.o : glyph_X.c glyph_X.h
glyph_Y.o : glyph_Y.c glyph_Y.h
glyph_Z.o : glyph_Z.c glyph_Z.h

