#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;
	float c=0,f=0;
	while(1)
	{
	printf("1.Celsius to fahrenheilt\n2.fahrenheit to celsius\n3.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:printf("enter the celsius value\n");
		       scanf("%f",&c);
		       printf("The fahrenheit value is %.2f\n",f=(c*9/5)+32);
		       break;
		case 2:printf("enter the fahrenheit value\n");
		       scanf("%f",&f);
		       printf("The celsius value is %.2f\n",c=(f-32)*5/9);
		       break;
		case 3:exit(1);
	}
	}
	return 0;
}

