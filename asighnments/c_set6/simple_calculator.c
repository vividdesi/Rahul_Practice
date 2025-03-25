#include<stdio.h>
int main(void)
{
	int choice=0, a=0,b=0;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Enter your choice\n");
	printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("The addition value is %.1d\n",a+b);
		       break;
		case 2:printf("The Subtraction value is %.1d\n",a-b);
	        	break;
		case 3:printf("The multiplication value is %.1d\n",a*b);
		       break;
		case 4:printf("The division value is %.1d\n",a/b);
		       break;
		case 5:printf("The addition value is %.1d\n",a%b);
		       break;
		default:printf("Invalid input value\n");
	}
	return 0;
}


