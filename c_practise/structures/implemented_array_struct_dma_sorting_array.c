#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_data
{
    char name[50];
    int age;
}student;

int insert_array_struct(student *array, int size)
{
    printf("Enter the values\n");
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of student-%d\n",i+1);
        while (getchar() != '\n');
        if(fgets(array[i].name,sizeof(array[i].name),stdin) == NULL)
 	    {
 		      printf("Error reading name\n");
 		      return 1;
 	    }
 	    array[i].name[strcspn(array[i].name,"\n")] = '\0';
 	     printf("Enter the age of student-%d\n",i+1);
 	     while(scanf("%d",&array[i].age) != 1 || array[i].age<=0)
 	     {
 	       printf("Invalid input,please enter positive integer only\n");  
 	      while(getchar() != '\n');
 	     }
    }
    return 0;
}
void print_array_struct(student *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Student-%d details -->\n",i+1);
        printf("Name-%s\n",arr[i].name);
        printf("Age-%d\n",arr[i].age);
    }
    printf("\n");
}

void sort(student *array,int size)
{
    int i,j,last_swap,new_swap,flag;
    last_swap=size-1;
    for(i=0;i<size-1;i++)
    {
        flag = 0;
        for(j=0;j<last_swap;j++)
        {
            if(array[j].age > array[j+1].age)
            {
                student temp;
                temp= array[j];
                array[j]= array[j+1];
                array[j+1]= temp;
                flag= 1;
                new_swap= j;
            }
        }
        if(flag == 0)break;
        last_swap=new_swap;
    }
    
}
    
int main(void)
{
    int size;
    printf("The size of struct is %d\n",sizeof(student));//56 bytes
    printf("Enter the size to allocate array of structures\n");
    while(scanf("%d",&size) != 1 || size<=0)
    {
        printf("Invalid input, enter only positive integer\n");
        while(getchar() != '\n');
    }
    student  *array=NULL;
    array=calloc(size,sizeof(*array));//Ex=size=6 56*6=336 bytes allocated
    
    if(array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    if(insert_array_struct(array,size) == 1)
    {
        printf("Entered invalid input\n");
        free(array);
        return 1;
    }
    
    printf("Entered values are\n");
    printf("Before sorting the array of structure\n");
    print_array_struct(array,size);
    printf("After sorting the array of structure\n");
    sort(array,size);
    print_array_struct(array,size);
    free(array);
    return 0;
}
