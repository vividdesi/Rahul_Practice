#include<stdio.h>
#include<math.h>
int main(void)
{
	double x=0,y=0;
	printf("Enter the values\n");
	scanf("%lf%lf",&x,&y);
	printf("The power value is %lf\n",pow(x,y));
	return 0;
}
