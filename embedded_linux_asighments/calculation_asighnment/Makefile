all: calculation.o add.o multi.o sub.o div.o even.o odd.o fibo.o prime.o calci

calculation.o:calculation.c
	gcc -c calculation.c
add.o:add.c
	gcc -c add.c
multi.o:multi.c
	gcc -c multi.c
sub.o:sub.c
	gcc -c sub.c
div.o:div.c
	gcc -c div.c
even.o:even.c
	gcc -c even.c
odd.o:odd.c
	gcc -c odd.c
fibo.o:fibo.c
	gcc -c fibo.c
prime.o:prime.c
	gcc -c prime.c
calci:calculation.o add.o multi.o sub.o div.o even.o odd.o fibo.o prime.o
	gcc calculation.o add.o multi.o sub.o div.o even.o odd.o fibo.o prime.o -o calci
clean:
	rm -rf *.o calci

