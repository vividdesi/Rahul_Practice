#include<stdio.h>
int main(void)
{
	float a=0.0;
	printf("Enter the float value \n");
	scanf("%f",&a);
	int result=(int)a;
	printf("The float value is %f\n",a);
	printf("The float value after typecast is %d\n",result);
	return 0;
}

