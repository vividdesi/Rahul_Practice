#include<stdio.h>

typedef struct peripheral 
{
	int id;
	char name[10];
	int base_address;
}Peripheral;



void uart_isr()
{
	printf("Uart function \n");
}
void spi_isr()
{
	printf("Spi function\n");
}
void i2c_isr()
{
	printf("I2c function\n");
}

char *string[]={"UART","SPI","I2C"};

int main(void)
{
	int t;

	void (*isr)(void)[3]=NULL;
	(*isr)(void)[0]=UART;
	(*isr)(void)[1]=SPI;
	(*isr)(void)[2]=I2C;

	int base_address[3]={0x1234,0x4321,0x5678};

	int (*p)[3]=&base_address;

	printf("Traversing the interupt vector table\n");
	printf("1.UART 2.SPI 3.I2C\n");
	scanf("%d",&t);
	void(*fp)(void)=(*isr+(--t));
	fp();

	Peripheral uart = {1, "UART", 0x40001000};
   	 Peripheral *p = &uart;   // pointer to struct
        




}
