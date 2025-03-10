#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	printf("Enter the three values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)printf("%d is greater than %d,%d\n",a,b,c);
	else if (b>c)printf("%d is greater than %d,%d\n",b,a,c);
	else if(a==b &&b==c)printf("All Numbers are same\n");
	else printf("%d is Greater than %d ,%d\n",c,a,b);
	return 0;
}	
