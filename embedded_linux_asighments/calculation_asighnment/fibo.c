#include<stdio.h>
#include"headerfile.h"
void fibo(int n)
{
	if (n <= 0) 
	{
		printf("Invalid input\n");
		return;
	}
	int t1=0,t2=1;
	int next_term;
	int i=1;
	while(i<=n)
	{
		if(i == 1)
		{
			printf("%d ",t1);
			i++;
			continue;			
		}
		if(i == 2)
		{
			printf("%d ",t2);
			i++;
			continue;
		}

		next_term=t1+t2;
		printf("%d ",next_term);
		t1=t2;
		t2=next_term;	
		i++;
	}
	printf("\n");
}
