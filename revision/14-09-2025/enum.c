#include<stdio.h>

enum how
{
	a,b,c,d
};

int main(void)
{
	enum how h=d;
	printf("%d\n",h);
	return 0;
}
