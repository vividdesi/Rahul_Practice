#include<stdio.h>
#include<stdint.h>

#define SET_BIT(REG,POSITION) ((REG) |= (1U<<POSITION))
#define CLEAR_BIT(REG,POSITION) ((REG) &= (~(1U<<POSITION)))
#define TOGGLE_BIT(REG,POSITION) ((REG) ^= (1U<<POSITION))

void disp(uint8_t p)
{
	for(int8_t i=7;i>=0;i--)
		printf("%d",(p >> i) & 1);
	printf("\n");
}
int main()
{
	uint8_t PORTB=0X00;
	
	SET_BIT(PORTB,0);
	disp(PORTB);
	CLEAR_BIT(PORTB,1);
	disp(PORTB);
	TOGGLE_BIT(PORTB,7);
	disp(PORTB);
	SET_BIT(PORTB,1);
	disp(PORTB);
	CLEAR_BIT(PORTB,0);
	disp(PORTB);
	TOGGLE_BIT(PORTB,3);
	disp(PORTB);
}

