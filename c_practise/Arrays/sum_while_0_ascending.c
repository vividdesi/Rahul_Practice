#include<stdio.h>
int main(void)
{
	int i=0,j=0,a[6]={4,2,6,0,5,10};
	while(a[i])
	{
		j+=a[i];
		i++;
	}
	printf("The value is %d\n",j);
	return 0;
}
