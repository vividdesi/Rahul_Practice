#include<stdio.h>
int main(void)
{
	int principal=0,rate=0,time=0;
	printf("Enter the principal\n");
	scanf("%d",&principal);
       	printf("Enter the rate\n");
        scanf("%d",&rate);
	printf("Enter the time\n");
        scanf("%d",&time);
	int simple=principal*rate*time/100;
	printf("The simple interest is %d\n",simple);
	return 0;
}

