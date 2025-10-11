#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

#include "header.h"

int roll_no=0;
int length=0;

char *gender[3]={"Male","Female","Others"};


student* create_node()
{
	student *temp=NULL;

	temp=malloc(sizeof(*temp));
	//Dynamically allocatiing the space in heap 
	while(getchar() != '\n' && getchar() != EOF);
	if(temp != NULL)
	{
		int g;

		printf("Enter the name\n");
		if(fgets(temp->name,20,stdin) == NULL)
		{
			printf("Invalid input\n");
			while(getchar() != '\n');
		}
		temp->name[strcspn(temp->name,"\n")]='\0';

		printf("Enter the gender\n");
		printf("1.Male 2.Female 3.Others\n");
		scanf("%d",&g);
		while(getchar() != '\n' && getchar() != EOF);
		if (g >= 1 && g <= 3) {
		    strncpy(temp->gender, gender[g-1], sizeof(temp->gender) - 1);
		    temp->gender[sizeof(temp->gender) - 1] = '\0'; // Ensure null termination
		}
		//temp->gender=*gender[--g];
		//Making the user to select options so that he cannnot type it 

		temp->roll_no=++roll_no;
		//Allocating the roll no sequentially

		for(uint8_t i=0;i<4;i++)
		{
			printf("Enter the subject -%d\n",i+1);
			scanf("%hhu",&temp->s[i]);
			//while(getchar() != '\n' && getchar() != EOF);
		}
			while(getchar() != '\n' && getchar() != EOF);
		
		temp->next=NULL;

		length++;
		//added length so that i can how many nodes are there...!

		return temp;

	}

	else
	{
		printf("Dynamic memory allocation failed\n");
		return NULL;
	}
	
}

student* add_student(student *start,uint8_t size)
{

	student *temp=NULL;

	for(uint8_t i=0;i<size;i++)
	{
		temp=create_node();

		if(temp == NULL)
		{
			return start;
		}

		if(start == NULL)
		{
			start = temp;
		}

		else
		{
			student *p=start;
			while(p->next != NULL)
			{
				p=p->next;
			}
			p->next=temp;
		}

	}
	return start;

}

void display_students( student * start)
{
	while(start != NULL)
	{ 	printf("--------------------------\n");
		printf("Name    - %s\n",start->name);
		printf("Gender  - %s\n",start->gender);
		printf("Roll no - %d\n",start->roll_no);

		for(uint8_t i=0;i<4;i++)
			printf("Subject-%d -%d\n",i+1,start->s[i]);

		printf("Grade   -%c\n",start->grade);

		start=start->next; 
	 	printf("--------------------------\n");

	}

}

void calculate_grade(student *start)
{
	int sum=0,percentage;

	while(start != NULL)
	{
		sum=0,percentage=0;
		for(uint8_t i=0;i<4;i++)
		{
			sum+=start->s[i];
			//printf("s[%hhu] value is %hhu\n",i,start->s[i]);
		}
		percentage = (int)(((float)sum / 400) * 100);
          	//printf("The percentage value is %d\n",percentage);

		if(percentage >= 90)
		{
			start->grade='A';
		}

		else if (percentage >= 80 && percentage <=89)
		{
			start->grade='B';
		}
		else if (percentage >= 70 && percentage <=79)
		{
			start->grade='C';
		}
		else if (percentage >= 60 && percentage <=69)
		{
			start->grade='D';
		}
		else 
		{
			start->grade='F';
		}

		start=start->next;

	}

}

//void search_rollno();

