#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{

	int x;
	int y;
	char z;
}s;
int main(void)
{
	s *p=NULL;
	int n;
	p=(s*)malloc(1*(sizeof(*p)));
	if(p != NULL)
	{
	p->x=2;
	p->y=4;
	p->z='a';
	printf("%d\n",p->x);
	printf("%d\n",p->y);
	printf("%c\n",p->z);
	free(p);
	}

	return 0;
}
