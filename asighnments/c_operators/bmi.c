#include<stdio.h>
int main(void)
{
	float height=0,weight=0;
	printf("Enter the weight in Kgs\n");
	scanf("%f",&weight);
	printf("Enter the Height is meters\n");
	scanf("%f",&height);
	float bmi=weight/height*2;
	printf("The bmi is %.2f\n",bmi);
	return 0;
}
