#include<stdio.h>

#define STACK 5

int A[STACK];
int top=-1;

void push(void);
void pop(void);
void peek(void);
void display(void);

int main(void)
{
	int choice;

	void (*fn[])(void)={push,pop,display,peek};

	while(1)
	{
		printf("1.Push 2.Pop 3.Display 4.Peek 5.Exit\n");
		scanf("%d",&choice);
		if(choice == 5)
		{
			printf("Thank you\n");
			return 0;
		}
		else
		{
			fn[--choice]();
		}
	}

}

void push(void)
{
	if( top > -2 && top < (STACK-1))
	{
	int value;
	printf("Enter the value\n");
	scanf("%d",&value);
	A[++top]=value;
	}

	else
	{
		printf("Stack overflow\n");
		printf("Popout some values to push values\n");
	}
}
void pop(void)
{
	if(top != -1)
	{
		printf("Removing the %d value from stack\n",A[top]);
		A[top--]=0;
	}

	else
	{
		printf("Nothing to poppout from the stack\n");
	}
}
void peek(void)
{
	if(top > -1 && top < STACK)
	{
		printf("The top value is %d\n",A[top]);
	}

	else
	{
		printf("There is no top value value \n");
	}
}
void display(void)
{
	int i;

	if(top > -1 && top < STACK)
	{
	for(i=top ;i>=0;i--)
	{
		printf("The values are %d\n",A[i]);
	}
	}

	else
	{
		printf("stack is empty\n");
	}
}

