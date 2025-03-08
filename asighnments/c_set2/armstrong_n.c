#include<stdio.h>
#include<math.h>
int _count(int);
int main(void)
{
	int number=0,count=0;
	printf("Enter the arm strong number u want from first N\n");
	scanf("%d",&number);
	for(int i=1;i<=number;i++)
	{
	  int arm=0,rem=0,temp=0;
	  count=_count(i);
	  temp=i;
	  while(temp>0)
	  {
		  rem=temp%10;
		  arm+=pow(rem,count);
		  temp/=10;
	  }
	  if(arm==i)printf("The %d is an armstrong number\n",i);
	}
	return 0;
}
int _count(int n)
{
	int count=0;
	while(n>0)
	{
		n/=10;
		count++;
	}
	return count;
}



