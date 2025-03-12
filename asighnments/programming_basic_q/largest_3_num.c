#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("Enter the three values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)printf("A is greater of B and C\n");
		else if (c>b) printf("C is Greater than A and B\n");
	}
	else if(b>c)
	{
		printf("B is greater than A and C\n");
	}
	else 
	{
		printf("C is greater than A and B\n");
	}
	return 0;
}
