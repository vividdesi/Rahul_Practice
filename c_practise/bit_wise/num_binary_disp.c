#include<stdio.h>
void print_binary(int);
int main()
{
  int number=4;
  printf("Enter the number\n");
 scanf("%d",&number);
 /* for(int i=0;i<8;i++)
  {
  print_binary(number<<i);
  printf("\n");
  }*/
  print_binary(number);
  return 0;
}
void print_binary(int bin)
{
        for(int i=7;i>=0;i--)
        {
                if(bin & 1<<i)printf("1");
                else printf("0");
        }
        printf("=%d\n",bin);
}
