#include<stdio.h>
void dec_binary(int);
int main(void)
{
	int n=0,bit_pos=0;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("Enter the Bit position u want to shift\n");
	scanf("%d",&bit_pos);
	dec_binary(n);
	int choice=0;
	printf("1.Right shift 2.Left shift\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Before Right  shifting the number is %d\n",n);
		       dec_binary(n);
		       n=(n>>bit_pos);
		       printf("After Right shifting the number is %d\n",n);
		       dec_binary(n);
		       break;
		case 2:printf("Before left shifting the number is %d\n",n);
		       dec_binary(n);
		       n=(n<<bit_pos);
		       printf("After left shifting the number is %d\n",n);
		       dec_binary(n);
		       break;	       
		       
		default:printf("Invalid input value\n");
	}
	return 0;
}

void dec_binary(int n)
{
	for(int i=7;i>=0;i--)
	{
		if(n&(1<<i))printf("1");
		else printf("0");
	}
	printf("\n");
}
