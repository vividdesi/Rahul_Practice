#include<stdio.h>
#include<stdlib.h>
int add(int ,int);
int sub(int,int);
int multiplication(int ,int);
float division(int,int);
int main(void)
{
	int a,b,choice;
	while(1)
	{
	printf("-----------------------------------------------------------\n");
	printf(" Enter  the  2  twos  values  u  want  to  do  arithematic\n");
	printf("-----------------------------------------------------------\n");
	scanf("%d%d",&a,&b);
	printf("\n");
	printf("-----------------------------------------------------------\n");
	printf("Enter the Arithematic operation u want to in above values\n");
	printf("-----------------------------------------------------------\n");
        printf("1.addition 2.subtraction 3.multiplication 4.Division 5.Exit\n");
	printf("-----------------------------------------------------------\n");
	scanf("%d",&choice);
	printf("\n");
	switch(choice)
	{
		case 1:printf("The addition value for %d and %d is %d\n",a,b,add(a,b));break;
		case 2:printf("The subtraction value for %d and %d is %d\n",a,b,sub(a,b));break;
		case 3:printf("The Multiplication value for %d and %d is %d\n",a,b,multiplication(a,b));break;
		case 4:if(b <= 0)
		       {
			       printf("Cannot be divided by 0 \n");
			       break;
		       }
		       printf("The Division value for %d and %d is %.2f\n",a,b,division(a,b));break;
		case 5:printf("The programme is exiting\n");exit(0);
		default:printf("Invalid input\n");
	}
	}

        return 0;
}

int add(int a,int b)
{
	return a+b;
};
int sub(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{
	return a*b;
}
float division(int a,int b)
{
  return (float)a/b;
}



