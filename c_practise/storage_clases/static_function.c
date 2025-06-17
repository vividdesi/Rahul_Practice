#include<stdio.h>
void loop()
{
	int  x=5;
	printf("the static value is %d\n",x);
	for(int i=0;i<4;i++)x++;

}

int main()
{
	loop();
	loop();
	loop();
	loop();
	//printf("the static value is %d\n",x);
	return 0;
}

