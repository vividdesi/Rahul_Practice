#include<stdio.h>
#define m 50
void factor(int ,int *);
int max_value(int *,int *);
void print(int *p)
{
	for(int i=0;p[i] !=0;i++)printf("%d ",p[i]);
	printf("\n");
}

int main(void)
{
	int a=0,b=0,a1[m]={0},b1[m]={0};
	printf("Enter the values in a and b\n");
	scanf("%d%d",&a,&b);
	factor(a,a1);
	factor(b,b1);
	print(a1);
	print(b1);
	int n=max_value(a1,b1);
	printf("The GCD of %d and %d is %d\n",a,b,n);
	return 0;
}

void factor(int n,int *p)
{
	int k=0;
	for(int i=1;i<=n;i++)if(n%i ==0)p[k++]=i;
	//p[k]=123;
}

int max_value(int *p,int *q)
{
	int max=0;
	for(int i=0;p[i] !=0;i++)
	{
		for(int j=0;q[j]!=0;j++)
		{
			if(p[i]==q[j])max=q[j];
		}
	}
	return max;
}
/*
 * This code is inefficient to solve the gcd of 2 numbers because here i used loop method to have factors
 * in macro i have max 50 where it store only 50 factors
 * used arrays 
 * */




