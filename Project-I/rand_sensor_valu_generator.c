// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<time.h>

int main(void) {
uint32_t ADC_VALUE[5];
uint8_t choice=0;
srand(time(0));
while(1)
{
    printf("Enter the choice\n");
    printf("1.Store the ADC values\n");
    printf("2.Retrive Adc values\n");
    printf("3.Exit\n");
    scanf("%hhd",&choice);
    switch(choice)
    {
    case(1):printf("Storing the Adc values\n");
            for(int i=0;i<5;i++)
            ADC_VALUE[i]=rand()%100;
            break;
    case(2):printf("The Retirved are values are\n");
            for(int i=0;i<5;i++)
            {
            printf("%d ",ADC_VALUE[i]);
            }
            printf("\n");
            break;
    case(3):printf("Thank you\n");
            exit(0);
    default:printf("Invalid Entry\n");
    }
}

    return 0;
}
