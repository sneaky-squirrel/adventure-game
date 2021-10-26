PROGRAM = test
IDIR = ../include
CC = g++
CFLAGS = -I$(IDIR)
CPPFLAGS =

ODIR = obj
LDIR = ../lib

LIBS = -lstdc++

_OBJ = 
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
