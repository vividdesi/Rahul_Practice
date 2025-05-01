#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 20

typedef struct student{

	int roll_no;
	char name[MAX_LEN];
        char gender;
}student;

void insert_data(student *s,int size);
void display_data(const student *s,int size);
void bubble_sort(student *s,int size);

int main(void)
{
	int size;
	printf("Enter the array of structures size you want to allocate\n");
	while(scanf("%d",&size) != 1 || size < 0)
	{
		printf("Invalipd input\n");
		printf("Enter only positive integer\n");
		while(getchar() != '\n');
	}

	//Allocating the array of structures
	
	student *s=NULL;
	s=(student *) calloc(size,sizeof(student));
	
	if(s != NULL)
	{
		printf("Enter the data of the students\n");
		insert_data(s,size);

		printf("Data before sorting the array of structures\n");
		display_data(s,size);

		printf("Data after sorting the array pf structures\n");
	        bubble_sort(s,size);
		display_data(s,size);

		free(s);
	}

	else
	{
		printf("Memory Allocation failed\n");
	}
	return 0;
}

void insert_data(student *s,int size)
{
  int i;
  for(i=0;i<size;i++)
  {
	  printf("\n");
	  printf("Enter the student-%d details\n",i+1);
	  printf("Enter the Roll no\n");
	  while(scanf("%d",&s[i].roll_no) != 1 || s[i].roll_no < 0)
	  {
		 printf("Invalid input\n");
		printf("Enter only positive integers\n");
	       while(getchar() != '\n');
	  }	       
	  getchar();
	  
	  printf("Enter the name of the student\n");
	  if(fgets(s[i].name,MAX_LEN,stdin) == NULL)
	  {
		  printf("Invalid input\n");
		  printf("Enter only characters\n");
		  while(getchar() != '\n');
	  }
	  s[i].name[strcspn(s[i].name,"\n")]='\0';

	  printf("Enter the gender M/F \n");
	  scanf("%c",&s[i].gender);
	  getchar();
  }

}

void display_data(const student *s,int size)
{
	int i;
	for(i=0;i < size;i++)
	{
		printf("\n");
		printf("The student - %d Details are ->\n",i+1);
		printf("The Roll no      = %d\n",s[i].roll_no);
		printf("The student name = %s\n",s[i].name);
		printf("The gender       = %c\n",s[i].gender);
	}
}

void bubble_sort(student *s,int size)
{
	int i,j,last_size,new_size,flag;

	student temp;

	last_size=size-1;

	for(i=0;i < size-1;i++)
	{
		flag=0;
		for(j=0; j < last_size ;j++)
		{
			if(s[j].roll_no > s[j+1].roll_no)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				flag = 1;
				new_size=j;
			}
		}
		if(flag == 0) break;
		last_size=new_size;
	}
}

