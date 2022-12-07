CC = gcc -c
CFLAGS = -Wall -g
CLIBSA = ar rcs


all: connections 

.PHONY : clean
clean:
	rm -rf *.o *.a connections 

connections: main.o libmy_mat.a
	gcc -Wall main.o ./libmy_mat.a -o connections -lm

libmy_mat.a : my_mat.o my_mat.h
	$(CLIBSA) libmy_mat.a my_mat.o
 
my_mat.o : my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c

main.o : main.c my_mat.h
	$(CC) $(CFLAGS) main.c







