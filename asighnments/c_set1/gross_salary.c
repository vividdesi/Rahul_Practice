#include<stdio.h>
int main()
{
	int basic_salary=0,HRA=0,DA=0,bonus=0;
	printf("Enter the basic_salary,HRA,DA and Bonus\n");
	scanf("%d%d%d%d",&basic_salary,&HRA,&DA,&bonus);
	printf("The gross salary is %d\n",basic_salary+HRA+DA+bonus);
	return 0;
}
