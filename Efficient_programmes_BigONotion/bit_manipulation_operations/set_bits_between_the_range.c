#include<stdio.h>
#include<stdint.h>
uint8_t set_bits(uint8_t,uint8_t,uint8_t);
int main(void)
{
	uint8_t n=0,start,end,choice,value;
	printf("Enter the number\n");
	scanf("%hhu", &n);
	printf("Enter the start bit and end bit \n");
	scanf("%hhu%hhu",&start,&end);
	printf("Enter the choice\n");
	printf("1.Including the start and stop 2.Excluding the start and stop\n");
	scanf("%hhu",&choice);
	switch(choice)
	{
		case 1:value=set_bits(n,start,end);
		       printf("The value of set bits is 0x%x\n",value);
		       break;
		case 2:start+=1,end-=1;
		       value=set_bits(n,start,end);
		       printf("The value of set bit is 0x%x\n",value);
		       break;
		default:printf("Invalid input \n");


	}

	return 0;
}

uint8_t set_bits(uint8_t n,uint8_t start,uint8_t end)
{
	uint8_t mask;
	mask=((1<<(end-start+1))-1)<<start;
	return n|mask;
}
