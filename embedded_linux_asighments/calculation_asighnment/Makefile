#echo"This is my first Makefile script"

CC=gcc

CFLAG=-c

OFLAG=-o
INSTALL_PATH=/home/rahul/Rahul_Practice

all: calculation.o add.o multi.o sub.o div.o even.o odd.o fibo.o prime.o calci

calculation.o:calculation.c
	$(CC) $(CFLAG) $<
add.o:add.c
	$(CC)  $(CFLAG) $<
multi.o:multi.c
	$(CC) $(CFLAG) $<
sub.o:sub.c
	$(CC) $(CFLAG) $<
div.o:div.c
	$(CC) $(CFLAG) $<
even.o:even.c
	$(CC) $(CFLAG) $<
odd.o:odd.c
	$(CC) $(CFLAG) $<
fibo.o:fibo.c
	$(CC) $(CFLAG) $<
prime.o:prime.c
	$(CC) $(CFLAG) $<
calci:calculation.o add.o multi.o sub.o div.o even.o odd.o fibo.o prime.o
	$(CC) $^ $(OFLAG) $@
	@echo "Binary generated successfully"

install:
	cp calci $(INSTALL_PATH)
	@echo "Installation is done succesfully"
clean:
	rm -rf *.o calci
#	echo "Remove unwanted files"

