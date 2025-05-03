#include <stdio.h>
#define MAX_LEN 10
void insert_data_array(int *p,int size);
void print_data_array(const int *p ,int size);
int second_largest_element(const int *p,int size);

int main() {
  int a[MAX_LEN];
  
insert_data_array(a,MAX_LEN);
print_data_array(a,MAX_LEN);
     
printf("The second largest array element is %d\n",second_largest_element(a,MAX_LEN));
     
     
    return 0;
}

void insert_data_array(int *p,int size)
{
   printf("Enter the values upto 10\n");
  for(int i=0;i<size;i++)
  {
     printf("Enter the value-%d\n",i+1);
    while(scanf("%d",&p[i]) != 1 )
    {
        printf("Invalid input\n");
        printf("Enter only integer values\n");
        while(getchar() != '\n');
    }
  }
 
}

void print_data_array(const int *p ,int size)
{
    printf("he entered values are -\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
int second_largest_element(const int *p,int size)
{
    int largest,second,i;
    if(p[0] > p[1])
    {
        largest=p[0];
        second=p[1];
    }
    else
    {
        largest=p[1];
        second=p[0];
    }
    
    for(i=2;i<size;i++)
    {
        if(p[i] > largest)
        {
            second=largest;
            largest=p[i];
        }
        else if (p[i] > second && p[i] != largest)
        {
            second=p[i];
        }
    }
    
    
    return second;
}

