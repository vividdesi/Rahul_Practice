#include<stdio.h>
void dec_binary(int);
int main()
{
	int number=0,bit_position=0,options=0;
	printf("Enter the Masking u want \n");
	printf("1.Set-bit\n2.Reset-bit\n3.Toggle-bit\n");
	scanf("%d",&options);
	printf("Enter the number u want to mask\n");
	scanf("%d",&number);
	printf("Enter the bit position u want to mask\n");
	scanf("%d",&bit_position);
	dec_binary(number);
	switch(options)
	{
		case 1:printf("The set value will be %d\n",number|=(1<<bit_position));dec_binary(number);break;
		case 2:printf("The Reset value will be %d\n",number&=~(1<<bit_position));dec_binary(number);break;
		case 3:printf("The Toggle value will be %d\n",number^=(1<<bit_position));dec_binary(number);break;
	}
	return 0;
}

void dec_binary(int n)
{
	int rem=0,base=1,result=0;
	while(n>0)
	{
		rem=n%2;
		result+=rem*base;
		base*=10;
		n/=2;
	}
	printf("The binary is %d\n",result);
	int zeros=0,ones=0;
	while(result>0)
	{
		rem=result%10;
		if(rem==0)zeros++;
		else ones++;
		result/=10;
	}
		printf("The number of zeros are %d and ones are %d\n",zeros,ones);
		

}


