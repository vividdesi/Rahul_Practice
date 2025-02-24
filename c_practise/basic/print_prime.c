#include<stdio.h>
int main()
{
	int number=0,i=0,j=0,flag=0;
	printf("Enter the number u want the prime values\n");
	scanf("%d",&number);
	for(i=2;i<=number;i++)
	{
	   for(j=2;j<=i;j++)
	   {
		  if(i%j==0) flag++;
	   }
	  
		  if(flag<2)printf("The prime number is %d\n",i);
		  flag=0;
	}
	return 0;
}




