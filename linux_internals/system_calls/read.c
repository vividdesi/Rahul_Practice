#include<unistd.h>

int main(void)
{
	int buf[15];
	read(0,buf,10);
	write(1,buf,10);
}
