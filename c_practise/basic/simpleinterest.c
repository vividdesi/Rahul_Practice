#include<stdio.h>
int main()
{
	float rate=0,principal=0,time=0;
	printf("Enter the Rate,Principal,and TIme\n");
	scanf("%f%f%f",&rate,&principal,&time);
	printf("The simple interest is %f\n",(principal*rate*time)/100);
	return 0;
}
