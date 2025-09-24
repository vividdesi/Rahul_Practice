#include<stdio.h>

void status(void)
{
	printf("status on\n");
}

void led_on(void)
{
	printf("led on\n");
}

void led_off(void)
{
	printf("led off\n");
}


typedef void (*operation)(void);

int main(void)
{

	operation op[3]={status,led_on,led_off};

	int input;

	printf("Enter the input\n");
	printf("1.status 2.led on 3.led off\n");
	scanf("%d",&input);
	if(input >=0 && input <=3)
	{
		--input;
		op[input]();
	}

	else
	{
		printf("invalid input\n");
	}
}


