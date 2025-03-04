#include<stdio.h>
int find_max(int,int);
int main()
{
	int a=0,b=0,c=0;
	printf("Enter the three numbers u want find max\n");
	scanf("%d%d%d",&a,&b,&c);
	int max=find_max(find_max(a,b),c);
	printf("THe Max number is %d\n",max);
	return 0;
}
int find_max(int a,int b)
{
	return (a>=b)?a:b;
	
}

