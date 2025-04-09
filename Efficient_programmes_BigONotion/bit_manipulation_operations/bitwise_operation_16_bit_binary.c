#include<stdio.h>
#include<stdint.h>
void Display(uint16_t x);
int main(void)
{
	uint16_t a,b;
	printf("Enter the operand value a\n");
	scanf("%hu",&a);
	printf("Enter the operand value b\n");
	scanf("%hu",&b);
	printf("Enter the bitwise operation symbol you want to do\n");
	printf("1.AND- & 2.OR- | 3.XOR- ^ 4.COMPLEMENT- ~ 5.ALL OPERATIONS- A\n");
	char symbol;
	getchar();
	scanf("%c",&symbol);
	switch(symbol)
	{
		case '&':Display(a&b);break;
		case '|':Display(a|b);break;
		case '^':Display(a^b);break;
		case '~':Display(~a);Display(~b);break;
		case 'A':Display(a&b);Display(a|b);Display(a^b);Display(~a);Display(~b);break;
		default:printf("Invalid operation\n");
	}
	return 0;
}
void Display(uint16_t x)
{
	int i,mask;
	for(i=15;i>=0;i--)
	{
		mask=1<<i;
		putchar((x&mask)? '1':'0');
		if(i%4==0)printf(" ");
	}
	printf("\n");
}
