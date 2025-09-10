#include "stm32f4xx.h"

int main(void)
{
    // 1. Enable clocks for GPIOA and SYSCFG
7    RCC->AHB1ENR |= (1<<0);   // GPIOA clock enable
    RCC->APB2ENR |= (1<<14);  // SYSCFG clock enable

    // 2. Configure PA0 as output, PA1 as input
    GPIOA->MODER &= ~((3<<0) | (3<<2));   // clear PA0, PA1
    GPIOA->MODER |=  (1<<0);              // PA0 = output (01)

    // 3. Configure PA1 with pull-up
    GPIOA->PUPDR &= ~(3<<2);
    GPIOA->PUPDR |=  (1<<2);              // PA1 pull-up

    // 4. Configure EXTI1 line for PA1
    SYSCFG->EXTICR[0] &= ~(0xF<<4);       // clear EXTI1 mapping
    // default is port A, so not needed actually

    EXTI->IMR  |= (1<<1);    // Unmask line 1
    EXTI->RTSR |= (1<<1);    // Rising edge trigger

    // 5. Enable EXTI1 interrupt in NVIC
    NVIC_EnableIRQ(EXTI1_IRQn);

    while(1) {
        __WFI();  // wait for interrupt
    }
}

// Interrupt handler for PA1 (EXTI1)
void EXTI1_IRQHandler(void)
{
    if (EXTI->PR & (1<<1)) {
        EXTI->PR = (1<<1);            // clear pending flag
        GPIOA->ODR ^= (1<<0);         // toggle LED
    }
}


