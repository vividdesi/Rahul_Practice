#include<stdio.h>
int main(int argc,char  *argv[])
{
	int a[argc]={0};
	for(int i=0;i<argc;i++)
	{
		a[i]=argv[i]-'0';
		printf("The integer value is %d\n",a[i]);
	}
	return 0;
}
