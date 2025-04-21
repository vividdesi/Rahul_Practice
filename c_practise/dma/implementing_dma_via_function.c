#include <stdio.h>
#include<stdlib.h>
void print_array(const int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
void insert_values_array(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the value %d\n",i+1);
        scanf("%d",&array[i]);
    }
}
int* allocate_memory_array(int size)
{
    int *array=NULL;
    array=malloc(size * sizeof(*array));
    if( array == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    printf("Enter the values\n");
    insert_values_array(array,size);
    return array;
}
int main(void) {
    int size;
    printf("Enter the size to allocate memory\n");
    while(scanf("%d",&size) != 1 || size <=0)
    {
        printf("Invalid input, please enter positive integer only\n");
        while(getchar() != '\n');
        
    }
    int *array=NULL;
    array=allocate_memory_array(size);
    if(array != NULL)
    {
        printf("Entered values are\n");
        print_array(array,size);
        free(array);
    }
    
    return 0;
}
