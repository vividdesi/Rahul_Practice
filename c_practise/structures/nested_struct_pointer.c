#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int x;
	int *y;
}stu;
typedef struct teacher{
	int a;
	int b;
	stu s1;
}te;
int main(void)
{	printf("The values are entered\n");
	te t1;
	t1.a=1;
	t1.b=2;
	t1.s1.x=3;
	t1.s1.y=(int*)malloc(sizeof(int));
	if(t1.s1.y != NULL)
	{
		*(t1.s1.y)=20;
		printf("%d %d %d %d\n",t1.a,t1.b,t1.s1.x,*(t1.s1.y));
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	free(t1.s1.y);
	return 0;
}

