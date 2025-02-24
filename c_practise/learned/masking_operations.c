#include<stdio.h>
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
	switch(options)
	{
		case 1:printf("The set value will be %d\n",number|=(1<<bit_position));break;
		case 2:printf("The Reset value will be %d\n",number&=~(1<<bit_position));break;
		case 3:printf("The Toggle value will be %d\n",number^=(1<<bit_position));break;
	}
	return 0;
}



