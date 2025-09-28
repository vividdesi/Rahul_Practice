#include<stdio.h>

int main(void)
{
	int i=0;
   label:
	printf("hello world\n");
	i++;
	if( i == 10)return 0;
	goto label;

}
