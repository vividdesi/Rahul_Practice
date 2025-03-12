#include<stdio.h>
int main(void)
{
	float root=0.0,n=0.0,x=0.0;
	printf("Enter the number u want squaroot of \n");
	scanf("%f",&n);
	x=n;
	do {
	        root = 0.5 * (x + (n / x));
	        if (root == x) break;
	        x = root;  
	    } while (1); 
	printf("The square root value is %f \n",root);
	return 0;
}
