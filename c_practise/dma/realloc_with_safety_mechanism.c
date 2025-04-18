#include <stdio.h>
#include<stdlib.h>
int insert(int *p,int initial_value,int end_value)
{
    printf("Enter the values\n");
    for(int i=initial_value;i<end_value;i++)
    {
        if(scanf("%d",p+i) != 1)
        {
            printf("Invalid value entered\n");
            return 1;
        };
    
    }
    return 0;
}
void print(int *p,int end_value)
{
    printf("The entered values are \n");
    for(int i=0;i<end_value;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
}
int main(void) {
int n;
printf("Enter the size of the  array\n");
if(scanf("%d",&n) != 1)
{
    printf("Invalid datatype value only enter the int\n");
    return 1;
}
if(n<=0)
{
    printf("The size should be greater than Zero\n");
    return 1;
}
int *p= NULL;
p=malloc(n*sizeof(*p));
if( p != NULL)
{
   if((insert(p,0,n) == 1))
   {
       printf("invalid value\n");
       free(p);
       return 1;
   }
   print(p,n);
   printf("Enter the size to re-allocate\n");
   int n_2;
   if(scanf("%d",&n_2) != 1)
   {
       printf("Invalid datatype value only enter int\n");
       free(p);
       return 1;
   };
   int *temp=NULL;
   temp=realloc(p,n_2*sizeof(*p));
   if(temp == NULL)
   {
       printf("Memory reaaloccation failed\n");
       free(p);
   }
   p=temp;
   temp=NULL;
   if(n_2 > n)
   {
   if((insert(p,n,n_2)) == 1)
   {
       printf("Invalid value entered\n");
       free(p);
       return 1;
   }
   }
   else
   {
      printf("Realloc memory size is small or equal \n");
   }
   print(p,n_2);
   if(p != NULL)
   {
   free(p);
   }
}
else
{
    printf("Memory allocation failed\n");
}
    return 0;
}
