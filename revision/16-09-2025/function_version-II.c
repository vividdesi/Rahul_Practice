#include<stdio.h>

double add(double  a,double b){ return a+b;}
double multi(double  a,double b){ return a*b;}
double sub(double  a,double b){ return a-b;}
double div(double  a,double b){ return a/b;}

typedef enum operation
{
	ADD,
	SUB,
	MULTI,
	DIV,
	EXIT,
}OP;

double (*operation[])(double,double)={add,sub,multi,div};

char *Operation_names[]={"ADDITION","SUBTRACTION","MULTIPLICATION","DIVISION"};

int main(void)
{
	int a,b,choice;

	double result;

	while(1)
	{
	printf("Enter the choice you prefer\n");
	printf("1.ADD 2.SUBTRACTION 3.MULTIPLICATION  4.DIVISION 5.EXIT\n");
	scanf("%d",&choice);
	choice--;
 	
	if(choice <ADD || choice > EXIT)
	{
		printf("Invalid option\n");
		continue;
	}

	if(choice == EXIT)
	{
		printf("Thank you\n");
		return 0;
	}


	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
        
	if(choice == DIV && b ==0)
	{
		printf("Error : Division by Zero!\n");
		continue;
	}

	result=operation[choice](a,b);

        printf("The value of  %s  is %lf\n",Operation_names[choice],result);

	}




}
