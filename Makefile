# This is the Makefile for GCC compiler. Only you need to update outest.
.SUFFIXES:
.SUFFIXES: .o .a .so .c .h .s .cm
SHELL         =/bin/sh
CC            =gcc
SRC           =main.cm chapter_1.cm evaluation.cm utilize.cm

COVERAGE      =-fprofile-arcs -ftest-coverage
OBJ           =$(patsubst %.cm, %.o, $(SRC))
INCH          =./inc
INCS          =./src
INC           =-I$(INCH) -I$(INCS)
TARGET        =dsaaa.out
FDPS          =fdependent
OBJDIR        =obj
MFLAG         =-x c
CFLAG         =$(MFLAG) -c -Wall -pg $(COVERAGE)
LFLAG         =-pg $(COVERAGE)
EXRLIB        =-lm

vpath %.o $(OBJDIR)

.phony:link clean

$(TARGET):$(OBJ)
	$(MAKE) link

-include $(FDPS)

$(FDPS):$(SRC)
	$(CC) $(INC) $(MFLAG) -MM $^ >$@

ifneq ($(OBJDIR), $(wildcard $(OBJDIR)))
	mkdir $(OBJDIR)
endif


$(OBJ):%.o:%.cm
	$(CC) $(INC) $(CFLAG) -o $@ $<
	mv $@ $(OBJDIR)

link:$(OBJ)
	$(CC) $(INC) $(LFLAG) -o $(TARGET) $^ $(EXRLIB)


clean:
	-rm -rf $(TARGET) $(OBJDIR)/* $(FDPS)
	-rm -rf report *.gcda *.gcno
