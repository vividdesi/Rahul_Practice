#include<stdio.h>
int main(void)
{
	int a[2][3]={ {1,2,3},{5,6,7}};
	int *p[2]={NULL,NULL};
	p[0]=&a[0][0];
	p[1]=&a[1][0];
	for(int i=0;i<3;i++)
	printf("%d ",p[0][i]);
	for(int i=0;i<3;i++)
	printf("%d ",p[1][i]);
	printf("\n");
	int **q=&p[0];
	for(int i=0;i<3;i++)
		printf("%d ",**(q++));


	return 0;
}
