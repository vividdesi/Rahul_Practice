#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
	char name[20];
	int age;
	float mark;
}student;


int main(void)
{
	student *p=NULL;

	p=malloc(sizeof(*p));

	if(p != NULL)
	{
		printf("Enter the name\n");
		fgets(p->name,20,stdin);
	        p->name[strcspn(p->name, "\n")] = '\0';


		printf("Enter the age\n");
		scanf("%d",&p->age);

		printf("enter the mark\n");
		scanf("%f",&p->mark);

		printf("name is %s\n",p->name);
		printf("age is %d\n",p->age);
		printf("mark is %f\n",p->mark);

		free(p);
	}

	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}
