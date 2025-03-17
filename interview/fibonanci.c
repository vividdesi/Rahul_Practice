#include<stdio.h>
int main(void)
{
	int n,a=0,b=1,c,i=0;
	printf("Enter the fibonacci upto nth term\n");
	scanf("%d",&n);
	while(i<n)
	{      
	       	if(i ==0) printf("%d ",a);
		else if(i == 1)printf("%d ",b);
	       	else
		{
			c=a+b;
			a=b;
			b=c;
	         	printf("%d ",c);	
		}
	    	i++;
	}
	printf("\n");
	return 0;
}
