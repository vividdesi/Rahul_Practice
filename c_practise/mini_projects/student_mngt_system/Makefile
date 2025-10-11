CC=gcc
DEBUGFLAGS=-g -O0
CFLAGS=-Wall

all:program

main.o:main.c header.h
	${CC} ${CFLAGS}  -c main.c

functions.o:functions.c header.h
	${CC}  ${CFLAGS} -c functions.c

insert.o:insert.c header.h
	${CC} ${CFLAGS} -c insert.c

delete.o:delete.c header.h
	${CC} ${CFLAGS} -c delete.c


program:main.o functions.o insert.o delete.o
	${CC} ${CFLAGS} main.o functions.o insert.o delete.o -o program

Debug:main.c functions.c insert.c delete.c
	${CC} ${DEBUGFLAGS} main.c insert.c functions.c delete.c -o Debug_project

object:
	rm -rf *.o
clean:
	rm -rf *.o program
