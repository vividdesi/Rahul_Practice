#include<stdio.h>
#define pi 3.14159
int main(void)
{
	const float a=3.14159;
	float radius=5;
	printf("The area of circle with #define is %f\n",pi*(radius*radius));
	printf("The area of circle with const is %f\n",a*(radius*radius));
	return 0;
}
