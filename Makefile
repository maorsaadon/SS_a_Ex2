CC = gcc -c
CFLAGS = -Wall -g

all: connections 

.PHONY : clean
clean:
	rm -rf *.o connections 

connections: main.o my_mat.o
	gcc -Wall -o connections main.o my_mat.o 
 
my_mat.o : my_mat.c my_mat.h
	$(CC) $(CFLAGS) my_mat.c

main.o : main.c my_mat.h
	$(CC) $(CFLAGS) main.c

