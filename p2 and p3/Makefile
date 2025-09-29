all: dotproduct

dotproduct: main.o practice2.o
	gcc -o dotproduct main.o practice2.o

main.o: main.c prac.h
	gcc -c main.c

practice2.o: practice2.c prac.h
	gcc -c practice2.c

clean:
	rm -f *.o dotproduct