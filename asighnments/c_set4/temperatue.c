#include<stdio.h>
int main(void)
{
	double  fah=0,cel=0;int choice=0;
	printf("Enter the choice\n");
	printf("1.Fahreinheit to celsius 2.celsius to Fahreinheit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Enter the fahreinheit value to have celsius value\n");
		       scanf("%lf",&fah);
		       printf("The celsius value is %lf\n",(fah-32)*5/9);
		       break;
		case 2:printf("Enter the celsius value to have fahreinheit value\n");
		       scanf("%lf",&cel);
		       printf("The fahrenheit value is %lf\n",cel*9/5+32);
		       break;
		default:printf("Invalid input\n");
	}
	return 0;
}

