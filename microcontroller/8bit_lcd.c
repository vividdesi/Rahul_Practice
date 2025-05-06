#include<stm32f401xc.h>
#include<stdint.h>

void delay() {
    for (volatile int i = 0; i < 50000; i++);
}

void Printdata(char data)
{
    GPIOA->ODR = (GPIOA->ODR & 0xFF00) | data;
}

void Lcd_Data (char data)
{
Printdata (data); // Pass the 8Bit data to data line's of LCD
GPIOB->ODR = GPIOB->ODR & (~(1<<1)); // PB1 Drive R/W Line of LCD to be LOW
GPIOB->ODR = GPIOB->ODR | (1<<2); // PB2 Drive RS Line of LCD to be HIGH
GPIOB->ODR = GPIOB->ODR | (1<<0); // PB0 Drive EN Line of LCD to be HIGH
delay ( ); // Delay
GPIOB->ODR = GPIOB->ODR & (~(1<<0)); // Drive EN Line of LCD to be LOW
}
/***** Passing Data to Instruction register of LCD *******/
/***** Pass commands to LCD ********/
void Lcd_Command ( char command)
{
Printdata (command); // Pass the 8Bit data to data line's of LCD
GPIOB->ODR = GPIOB->ODR & (~(1<<1)); // Drive R/W Line of LCD to be LOW
GPIOB->ODR = GPIOB->ODR & (~(1<<2)); // Drive RS Line of LCD to be LOW
GPIOB->ODR = GPIOB->ODR | (1<<0); // Drive EN Line of LCD to be HIGH
delay (); // Delay
GPIOB->ODR = GPIOB->ODR & (~(1<<0)); // Drive EN Line of LCD to be LOW
}
void Lcd_String ( char *str, char length)
{
 // LCD Data function in Loop for printing string or word of data to LCD
unsigned char i=0;
for (i=0;i<length; i++)
 {
   Lcd_Data (str[i]);
}
}
void Lcd_Initialise (void)
{
Lcd_Command (0x38); // configuring lcd in 16column and 2row format
Lcd_Command (0x06); // display on cursor off
Lcd_Command (0x0C); // autoincrement cursor
Lcd_Command (0x01); // clearscreen
}


int main(void)
{
    // Enable Clocks for GPIOA and GPIOB
    RCC->AHB1ENR |= (1 << 0) | (1 << 1);  // GPIOA + GPIOB

    // PA0–PA7 as output
    GPIOA->MODER &= ~(0xFFFF);  // Clear MODER for PA0–PA7
    GPIOA->MODER |=  (0x5555);  // Set as output

    // PB0, PB1, PB2 as output
    GPIOB->MODER &= ~((1 << 1) | (1 << 3) | (1 << 5));
    GPIOB->MODER |=  (1 << 0) | (1 << 2) | (1 << 4);

    Lcd_Initialise();

    while (1)
    {
        Lcd_Command (0x80);
        Lcd_String("YOCTO TUTOR",11);
        Lcd_Command (0xC0);
        Lcd_String("EMBEDDED LINUX", 14);
    }
}
