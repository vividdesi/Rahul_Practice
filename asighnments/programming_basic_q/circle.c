#include<stdio.h>
#define pi 3.14
int main(void)
{
	int radius=0;
	printf("Enter the radius of an circle\n");
	scanf("%d",&radius);
	printf("The area of circle is %f\n",pi*(radius*radius));
	printf("The perimeter of circle is %f\n",2*pi*radius);
	return 0;
}
