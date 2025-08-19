#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
void set_bit(uint8_t *p,uint8_t position);
void clear_bit(uint8_t *p,uint8_t position);
void toggle_bit(uint8_t *p,uint8_t position);
void display(uint8_t p);
int main(void)
{
	
	uint8_t value=0x00,pos;
	char ch;
	while(1)
	{
	printf("Enter the postion to set value\n");
	scanf("%hhu",&pos);
	set_bit(&value,pos);
	display(value);
	
	printf("Enter the postion to clear value\n");
	scanf("%hhu",&pos);
	clear_bit(&value,pos);
	display(value);
	
	printf("Enter the postion to toggle value\n");
	scanf("%hhu",&pos);
	toggle_bit(&value,pos);
	display(value);
	getchar();

	printf("Want to exit yes -y or No - n\n");
        scanf("%c",&ch);
        if(ch == 'y')exit(0);
	getchar();	
	}
}

void set_bit(uint8_t *p,uint8_t position)
{
	if((*p & (1 << position)) >= 1)
	{
		printf("Alreadey position is set\n");
		return ;
	}
	else
	{
		*p|=(1<< position);

	}
}
void clear_bit(uint8_t *p,uint8_t position)
{
	if((*p & (1 << position)) == 0)
	{
		printf("Alreadey position is clear\n");
		return ;
	}
	else
	{
		*p&=~(1<< position);

	}

}
void toggle_bit(uint8_t *p,uint8_t position)
{
	*p^=(1<<position);
}
void display(uint8_t p)
{
	for(uint8_t i= 7;i>=0;i--)
	{
		if((p & (1 << i)) >= 1)
			printf("1");
		else
			printf("0");
		if(i ==0)break;
	}
	printf("\n");
}

