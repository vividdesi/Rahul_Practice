#include<stdio.h>

typedef enum operation{
	ADD,
	SUB,
	MULTI,
	DIV,
	EXIT
}op;



int addition(int a,int b)
{
	return a+b;
}

int subtraction(int a,int b)
{
	return a-b;
}

int multiplication(int a,int b)
{
	return a*b;
}

int division(int a,int b)
{
	return a/(float)b;
}

int main(void)
{
  int(* operation[])(int,int)={addition,subtraction,multiplication,division};

  int a,b,choice,result;
  while(1)
  {
	  printf("1.Add 2.Sub 3.Multi 4.Division 5.Exit\n");
	  scanf("%d",&choice);
	  choice --;

	  if((choice) == EXIT)
	  {
		  printf("Thank you\n");
		  return 0;
	  }

	  printf("Enter the value of a and b\n");
	  scanf("%d%d",&a,&b);

	  switch(choice)
	  {
	        case  ADD:printf("The addition value is %d\n",result=operation[ADD](a,b));break;
		case  SUB:printf("The subtraction value is %d\n",result=operation[SUB](a,b));break;
		case MULTI:printf("The multiplication value is %d\n",result=operation[MULTI](a,b));break;
		case DIV:printf("The Division value is %d\n",result=operation[DIV](a,b));break;
	        default:printf("Invalid input\n");
	        
	  }
  }


}
