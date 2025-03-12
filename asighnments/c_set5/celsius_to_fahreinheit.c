#include<stdio.h>
int main(void)
{
	float celsius=0.0;
	printf("enter the celsius value\n");
	scanf("%f",&celsius);
	printf("The fahreinheit value is %f\n",(celsius*9/5)+32);
	return 0;
}

