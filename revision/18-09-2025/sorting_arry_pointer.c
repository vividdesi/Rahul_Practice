// Online C compiler to run C program online
#include <stdio.h>
 
 void Disp(int *p[],int size)
 {
     for(int i=0;i<size;i++) 
   printf("%d ",*p[i]);
   printf("\n");
 }
 
 
void Array_Disp(const int *p,int size)
 {
     for(int i=0;i<size;i++) 
   printf("%d ",p[i]);
   printf("\n");
 } 
 void Bubble_sort(int *p[],int size)
 {
     int i,j,last_swap=size-1,new_swap,flag=0;
     int *temp;
     
     for(i=0;i<(size-1);i++)
     {
         flag=0;
         for(j=0;j<last_swap;j++)
         {
             if(*p[j] > *p[j+1])
             {
                 temp=p[j];
                 p[j]=p[j+1];
                 p[j+1]=temp;
                 new_swap=j;
                 flag=1;
             }
         }
         if(flag == 0)break;
         last_swap=new_swap;
     }
     
 }
 
int main() {
   int a[5]={50, 10, 40, 30, 20};
   int *p[5];
   for(int i=0;i<5;i++)
        p[i]=&a[i];
    printf("Before sorting values are\n");
    Disp(p,5);
    printf("After sorting values are\n");
    Bubble_sort(p,5);
    
    Disp(p,5);
    
    printf("Array values are\n");
    Array_Disp(a,5);
    return 0;
}
