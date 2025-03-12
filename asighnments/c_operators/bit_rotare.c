#include<stdio.h>
#define bit_size 32

int  left_bit_rotate(int n,int pos)
{
	return ((n<<pos)|(n>>(bit_size - pos)));
};

int right_bit_rotate(int n,int pos)
{
return ((n>>pos)|(n<<(bit_size-pos)));
};

void dec_binary(int n)
{
  for(int i= bit_size -1;i>=0;i--)
  {
   if(n&(1<<i))printf("1");
   else printf("0");
   }
  printf("\n");
}

int main(void)
{
   int n=0,pos=0;
   printf("Enter the number and position to rotate\n");
   scanf("%d%d",&n,&pos);
   printf("The left rotate binary position and value is %d\n",left_bit_rotate(n,pos));
   dec_binary(left_bit_rotate(n,pos));
   printf("The right rotate binary position and value is %d\n",right_bit_rotate(n,pos));
   dec_binary(right_bit_rotate(n,pos));
   return 0;
}
