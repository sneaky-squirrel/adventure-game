PROGRAM = test
IDIR = ../include
CC = gcc
CFLAGS = -I$(IDIR)
CPPFLAGS =

ODIR = obj
LDIR = ../lib

LIBS = -lstdc++

_OBJ = world-navigation.o battle.o dialogue.o Character.o
OBJ = $(patsubst %, $(ODIR)/%, $(_OBJ) )

$(ODIR)/%.o: %.c $(IDIR)/%.h
	$(CC) $(CPPFLAGS) -c -o $@ $< $(CFLAGS) $(LIBS)

$(PROGRAM): main.c $(OBJ)
	$(CC) $(CPPFLAGS) -o $@ $^ $(CFLAGS) -o test

run:
	make
	./$(PROGRAM)
clean:
	rm -f $(ODIR)/*.o *~ core
	rm $(PROGRAM)
