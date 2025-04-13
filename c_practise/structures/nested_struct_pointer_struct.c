#include<stdio.h>
#include<stdlib.h>
typedef struct student{
int x;
int y;
}s;

typedef struct teacher{

	int a;
	int b;
	s *p;
}t;
int main(void)
{
	t *q=NULL;
	q=(t*)malloc(sizeof(t));
	if(q != NULL)
	{
	  q->p=(s*)malloc(sizeof(s));
	  if(q->p != NULL)
	  {
		 q->a=1;
		 q->b=2;
		 q->p->x=3;
		 q->p->y=4;
		 printf("%d %d %d %d\n",q->a,q->b,q->p->x,q->p->y);
	  }
	  else
	  {
		  printf("Memory allocation failed\n");
		  free(q->p);
		  free(q);
	  }
	}
	else
	{
		printf("Memory allocation failed\n");
		free(q);
	}
	if( q!= NULL)
	{
		if(q->p != NULL)
		free(q->p);
		free(q);
	}
	return 0;
}

