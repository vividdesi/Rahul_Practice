#include<stdio.h>
void dec_binary(int n);
int main(void)
{ 
	int n=128;
	for(int i=0;i<=7;i++)
	{
	  printf("%d\n",n);
	  dec_binary(n);
	  n=n>>1;
	}
	return 0;
}
void dec_binary(int n)
{
    for(int i=7;i>=0;i--)
    {
	    if((n&(1<<i)))printf("1");
	    else printf("0");
    }
    printf("\n");
 }
