# Wedit Makefile for project farbpreis
SRCDIR=c:\users\michael\dev\farbpreis
CFLAGS=-I"c:\lcc\include"  -g2 
CC=$(LCCROOT)\bin\lcc.exe
LINKER=$(LCCROOT)\bin\lcclnk.exe
OBJS=\
	farbpreis.obj

LIBS=
EXE=farbpreis.exe

$(EXE):	$(OBJS) Makefile
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc1\farbpreis.exe $(OBJS) $(LIBS)

# Build farbpreis.c
FARBPREIS_C=\

farbpreis.obj: $(FARBPREIS_C) $(SRCDIR)\farbpreis.c
	$(CC) -c $(CFLAGS) $(SRCDIR)\farbpreis.c

link:
	$(LINKER)  -subsystem console -o $(SRCDIR)\lcc1\farbpreis.exe $(OBJS) $(LIBS)

clean:
	del $(OBJS) farbpreis.exe
