#include<stdio.h>
int main(void)
{
	int basic=0,hra=0,other=0;
	printf("Enter the basic salary\n");
	scanf("%d",&basic);
	printf("Enter the hra\n");
	scanf("%d",&hra);
	printf("Enter the other allowances\n");
	scanf("%d",&other);
	printf("The gross salary is %d\n",basic+hra+other);
	return 0;
}
