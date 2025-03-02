#include<stdio.h>
void binary(int a);
int main()
{
	int a=0,bit_position=0,choice=0;
	printf("Enter the number u want to shift \n");
	scanf("%d",&a);
	printf("Enter the bit position u want to shift\n");
	scanf("%d",&bit_position);
	printf("1.Right_shift 2.Left_shift \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Before right shifting the binary value  is ");
		       binary(a);
		       printf("The right_shift value will be %d\n",a=(a>>bit_position));
		       printf("After right shifting the binary value is ");
                       binary(a);
		       break;
		case 2:printf("Before left shifting the binary value is ");
		       binary(a);
		       printf("The left shift value will be %d\n",a=(a<<bit_position));
		       printf("After left shifting the binary value is ");
		       binary(a);
		       break;
	}
	return 0;
}
void binary(int a)
{
  int result=0,remainder=0,base=1;
  while(a>0)
  {
    remainder=a%2;
    result+=remainder*base;
    base*=10;
    a/=2;
   }
   printf("The binary value is %d\n",result);
  }
