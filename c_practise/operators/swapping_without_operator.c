#include<stdio.h>
int main()
{
	int a=0,b=0;
	printf("Enter the two values a and b\n");
	scanf("%d%d",&a,&b);
	a+=b,b=a-b,a=a-b;
	printf("After swapping a=%d and b=%d\n",a,b);
	return 0;
}
/*
 *  a = a | b;  // Store combined bits
    b = a & b;  // Extract original a
    a = a & (~b);  // Extract original b
		   
    a = a ^ b;  // Step 1
    b = a ^ b;  // Step 2
    a = a ^ b;  // Step 3

    a = a * b;  // a becomes 50
    b = a / b;  // b becomes 5
    a = a / b;  // a becomes 10

    */
