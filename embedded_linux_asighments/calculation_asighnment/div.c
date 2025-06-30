#include<stdio.h>
#include"headerfile.h"

void divi(int a,int b)
{
	if(a == 0)
	{
		printf("We cannot divide with 0\n");
		return ;
	}

	else
	{
		printf("The division value is %f\n",(float)a/b);
	}
}
