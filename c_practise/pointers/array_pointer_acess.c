#include<stdio.h>

int main(void)
{
	int a[5]={10,20,30,40,50};

	int *p=NULL,i;
	p=a;
	printf("Method one ->*(p++)\n");

	for(i=0;i<5;i++)
	{
		printf("The value si %d\n",*(p++));
	}

	//or we can also access value by
	printf("Method two -> p[i]\n");
       	p=a;
	for(i=0;i<5;i++)
	{
		printf("The value si %d\n",p[i]);
	}

	printf("Method three -> *(p+i)\n");

	for(i=0;i<5;i++)
	{
		printf("The value si %d\n",*(p+i));
	}
	p=a;

	printf("Modifying the value\n");
	printf("The value of a[0] is %d\n",(*p)++);
	printf("The value is modifed is %d\n",*p);
	//here a[o] value is incremented by one 
	//here 10 will be 11
	//p is pointed to the a[o] not incremented the value
	return 0;
}
