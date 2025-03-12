#include<stdio.h>
int main(void)
{
	int n=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	int count =0,i=1,temp=n;
	while(temp>0)
	{
		temp=temp-i;
		i=i+2;
		count++;
	}
	printf("The count value is %d\n",count);
	if(count * count == n)printf("Its an Perfect square\n");
	else printf("Its not an Perfect square\n");
	return 0;
}

