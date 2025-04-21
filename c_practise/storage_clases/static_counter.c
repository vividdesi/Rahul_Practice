#include<stdio.h>

void static_counter( )
{
	static int a=1;
	printf("%d\n",a++);
}
int main(void)
{
	for(int i=0;i<5;i++)
	{
		static_counter( );
	}
	return 0;
}

