#include<stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void)
{
	int a=0,b=0;
	printf("Enter the values\n");
	scanf("%d%d",&a,&b);
	int m=gcd(a,b);
	int lcm=(a*b)/m;
	printf("The lcm of %d and %d is %d\n",a,b,lcm);
	printf("The gcd of %d and %d is %d\n",a,b,m);
	return 0;
}

