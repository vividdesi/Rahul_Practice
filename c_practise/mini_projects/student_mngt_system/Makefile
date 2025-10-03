Cc=gcc

main.o:main.c header.h
	${CC} -c main.c

functions.o:functions.c header.h
	${CC} -c functions.c

program:main.o functions.o
	${CC} main.o functions.o -o program
clean:
	rm -rf *.o program
