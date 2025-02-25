#include<stdio.h>
int bit_position_size(int);
int dec_binary_conversion(int);
int main()
{
	int number=0,even=0;
	printf("Enter the number u want toggle even positions\n");
	scanf("%d",&number);
	int binary=dec_binary_conversion(number);
	int size=bit_position_size(binary);
	for(int i=0;i<=size;i++)if(i%2==0)even|=(1<<i);
	//int even_binary=dec_binary_conversion(even);
	printf("Before the value %d\n",binary);
	number^=even;
	binary=dec_binary_conversion(number);
	printf("Before the value %d\n",binary);
	return 0;
}
int bit_position_size(int n)
{
	int count=0;
	while(n>0)
	{
		n/=10;
		count++;
	}
	return count;
}

int dec_binary_conversion(int n)
{
	int result=0,base=1,rem=0;
	while(n>0)
	{
		rem=n%2;
		result+=rem*base;
		base*=10;
		n/=2;
	}
	return result;
}


		


