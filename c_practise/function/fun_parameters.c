#include<stdio.h>
void reg(register int,register int);
void auto_para(int a,int b);
void global();
static int e=10 , f=20;
extern int c,d;
int main()
{
	reg(5,6);
	auto_para(2,6);
	global();
	return 0;
}
void reg(register int a,register int b)
{
	printf("The regiser value is %d\n",a+b);
}
void auto_para(int a,int b)
{
	printf("The auto value is %d\n",a+b);
}
void global()
{
	printf("The value is %d\n",c+d);
	printf("THe e value is %d and f value is %d\n",e,f);
}
