#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
	int a;
	int b;
	char c;
	char *d;

}st;
int main(void)
{
	
	st s1={2,3,'A'};
	st *p;
	p=&s1;
	s1.d=(char *)malloc(1*sizeof(char));
	if(s1.d != NULL)
	{
		*(s1.d)='z';

	printf("The value of a is %d\n",p->a);
	printf("The value of b is %d\n",p->b);
	printf("The character is %c\n",p->c);
	printf("The character is %c\n",*(p->d));
	free(s1.d);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;	
}
