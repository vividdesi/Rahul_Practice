#include<stdio.h>
int main(void)
{
	int principal=0,rate=0,time=0;
	printf("Enter the principal amount\n");
	scanf("%d",&principal);
	printf("Enter the Rate of interest\n");
        scanf("%d",&rate);
	printf("Enter the duration\n");
        scanf("%d",&time);
	printf("The simple interest is %d\n",(principal*rate*time)/100);
;
	return 0;
}
