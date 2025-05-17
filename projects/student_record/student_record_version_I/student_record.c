#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 15
#define MAX_ARRAY_SIZE 3

#define MODE_INPUT_DATA 1
#define MODE_EDIT_DETAIL 2

#define MODE_VIEW_FIND 1
#define MODE_UPDATE_DETAILS 2
#define MODE_DELETE 3


typedef struct student
{
	char name[MAX_LEN];
	int roll_number;
	int marks[MAX_ARRAY_SIZE];

}student;


void insert_data(student *s,int initial_value,int end_value,int mode);
void display_students(const student *s,int size);
void search_student( student *s,int roll_no,int size,int mode);
void average_marks(const student *s,int size);

int main(void) {

	short int option,size=0,roll_no;
	student *p=NULL;

	printf("-----------------------------------------\n");
	printf("    STUDENT RECORD MANAGEMENT SYSTEM\n");
	printf("-----------------------------------------\n");

	while(1)
	{
		printf("\n");
		printf("1.Create a student record\n");
		printf("2.Add new student\n");
		printf("3.Display all student records\n");
		printf("4.Search student by roll no\n");
		printf("5.Update a student record\n");
		printf("6.Delete a student record\n");
		printf("7.Display the average marks of each student\n");
		printf("8.Exit\n");

		while(scanf("%hd",&option) != 1 || (option <=0 || option >=9))
		{
			printf("Invalid Input option\n");
			while(getchar()!='\n');
		}
		getchar();

		switch(option)
		{
			case 1:
				if(size == 0)
				{
					printf("Enter the number of students you want create record\n");
					while(scanf("%hd",&size) != 1 || (size >0 && size<=1000))
					{
						printf("Invalid Input option\n");
						printf("Enter the values between 1 to 1000\n");
						while(getchar()!='\n');
					}
					getchar();
					p=malloc(size*sizeof(*p));

					if(p != NULL)
					{
						printf("Enter the details\n");
						insert_data(p,0,size,MODE_INPUT_DATA);
					}				

					else
					{
						printf("Memory Alllocation Failed\n");
						return 1;
					}

				}
				else
				{
					char choose;
					printf("Already student added\n");
					printf("Do you want to delete all students list\n");
					printf("Y-yes and N-no\n");
					choose=getc(stdin);
					if(choose == 'Y')
					{
						free(p);
						printf("Go to the menu than click on create a students\n");
						size=0;
					}
					else if (choose == 'N')
					{
						printf("You can re-edit the student list\n");
					}

					else
					{
						printf("Invalid input option\n");
					}

				}
				break;

			case 2:printf("Enter the number of students you want to add in record\n");
			       int new_size;
			       while(scanf("%d",&new_size) != 1 || (new_size >0 && new_size<=1000))
			       {
				       printf("Invalid Input option\n");
				       printf("Enter the values between 1 to 1000\n");
				       while(getchar()!='\n');
			       }
			       getchar();
			       student *temp=NULL;
			       temp=realloc(p,sizeof(student)*(size + new_size));
			       if(temp != NULL)
			       {
				       p=temp;
				       insert_data(p,size,(size+new_size),MODE_INPUT_DATA);
				       size+=new_size;
			       }

			       else
			       {
				       printf("Memory allocation failed\n");
				       return 1;
			       }
			       break;


			case 3:printf("The size %d\n",size);display_students(p,size); break;

			case 4:printf("Enter the roll number\n");
			       while(scanf("%hd",&roll_no) != 1 || (roll_no >0 && roll_no<=1000))
			       {
				       printf("Invalid Input option\n");
				       printf("Enter the values between 1 to 1000\n");
				       while(getchar()!='\n');
			       }
			       getchar();
			       search_student(p,roll_no,size,MODE_VIEW_FIND);
			       break; 

			case 5:printf("Enter the roll number u want to update the details\n");
			       while(scanf("%hd",&roll_no) != 1 || (roll_no >0 && roll_no<=1000))
			       {
				       printf("Invalid Input option\n");
				       printf("Enter the values between 1 to 1000\n");
				       while(getchar()!='\n');
			       }
			       search_student( p,roll_no,size,UPDATE_DETAILS);//search the data by using search function then in mode 2 it updates by insert funtion
			       break;

			case 6:printf("Enter the roll number u want to delete the details\n");
			       while(scanf("%hd",&roll_no) != 1 || (roll_no > 0 && roll_no<=1000))
			       {
				       printf("Invalid Input option\n");
				       printf("Enter the values between 1 to 1000\n");
				       while(getchar()!='\n');
			       }
			       search_student( p,roll_no,size,MODE_DELETE);//search the data by using search function then in mode 2 it updates by delete funtion
			       size=size-1;
			       //student *temp=NULL;
			       temp=realloc(p,sizeof(student)*size);
			       if(temp != NULL)
			       {
				       p=temp;
			       }

			       else
			       {
				       printf("Memory allocation failed\n");
				       return 1;
			       }


			       break;

			case 7:average_marks(p,size);
			       break;
			case 8:printf("Thank You\n");
			       if(p != NULL)
			       {       
				       free(p);
			       }
			       exit(0);//Successful programme termination
				       
			default:printf("Invalid input \n");//No need but extra safety purpose
		}

	}

	return 0;
}

void insert_data(student *s,int initial_value,int end_value,int mode)
{
	if(mode == 1)
	{

		for(  ;initial_value < end_value;initial_value++)
		{
			printf("Enter the student name\n");
			fgets(s[initial_value].name,MAX_LEN,stdin);
			s[initial_value].name[strcspn(s[initial_value].name,"\n")]='\0';
			printf("Enter the Roll number\n");
			while (scanf("%d",&s[initial_value].roll_number) != 1 ||(s[initial_value].roll_number <=0 && s[initial_value].roll_number >=999))
			{
				printf("Invalid input digit\n");
				while(getchar() != '\n');
			}
			getchar();
			printf("Enter the marks\n");
			for(int i=0;i<MAX_ARRAY_SIZE;i++)
			{
				printf("Enter the Marks - %d\n",i+1);
				scanf("%d",&s[initial_value].marks[i]);
			}
			getchar();

		}
	}

	else if(mode ==2)
	{ 
		int insert_data;
		printf("Enter the number u want to edit\n");
		printf("1.Name\n2.Roll number\n3.marks\n");
		scanf("%d",&insert_data);
		getchar();
		if( insert_data == 1)
		{
			printf("Enter the student name to update\n");
			fgets(s->name,MAX_LEN,stdin);
			s->name[strcspn(s->name,"\n")]='\0';            
		}
		else if ( insert_data == 2)
		{   
			printf("Enter the Roll number to update\n");
			while (scanf("%d",&s->roll_number) != 1 ||(s->roll_number >0 && s->roll_number <=1000))
			{
				printf("Invalid input digit\n");
				while(getchar() != '\n');
			}
			getchar();            
		}

		else
		{
			for(short int i=0;i<MAX_ARRAY_SIZE;i++)
			{
				char choose;
				printf("Would u like change subject -%d marks\n",i+1);
				printf("Y-yes or N-no\n");
				scanf("%c",&choose);
				getchar();
				if(choose == 'Y')
				{
					printf("Update the marks of subject-%d\n",i+1);
					printf("Enter the marks\n");
					scanf("%d",&s->marks[i]);
					getchar();
				}
			}

		}
	}

	else
	{
		printf("Invalid mode\n");
	}


}



void display_students(const student *s,int size)
{
	printf("THE SIZE VALUE IS %d\n",size);
	int i;
	for(i=0;i<size;i++)
	{


		printf("The student-%d details are\n",i+1);
		printf("Name    -%s\n",s[i].name);
		printf("Roll_no -%d\n",s[i].roll_number);
		for(int j=0;j<MAX_ARRAY_SIZE;j++)
		{
			printf("The subject- %d marks -%d\n",j+1,s[i].marks[j]);
		}

	}
	printf("\n");

}


void search_student( student *s,int roll_no,int size,int mode)
{
	short int k=-1;
	for(short int i=0 ;i<size ;i++)
	{

		if(roll_no == s[i].roll_number)
		{
			k=i;
			break;
		}
	}
	if(mode == 1)
	{

		if(k>=0)
		{
			printf("The student details are found\n");
			printf("The student details are\n");
			printf("Name    -%s\n",s[k].name);
			printf("Roll_no -%d\n",s[k].roll_number);
			for(int j=0;j<MAX_ARRAY_SIZE;j++)
			{
				printf("The subject- %d marks -%d\n",j+1,s[k].marks[j]);
			}

		}

		else
		{
			printf("Details are not found\n");
		}  
	}

	else if (mode == 2)
	{

		if(k>=0)
		{
			printf("The student details are found\n");
			printf("The student details are\n");
			printf("Name    -%s\n",s[k].name);
			printf("Roll_no -%d\n",s[k].roll_number);
			for(int j=0;j<MAX_ARRAY_SIZE;j++)
			{
				printf("The subject- %d marks -%d\n",j+1,s[k].marks[j]);
			}

			insert_data(&s[k],k,k+1,MODE_EDIT_DETAIL);

		}

		else
		{
			printf("Details are not found\n");
		}


	}

	else if (mode == 3)
	{
		if(k>=0)
		{

			for(;k<size-1;k++)
			{
				s[k]=s[k+1];
			}

		}


		else
		{
			printf("Details are not found\n");
		}

	}


}

void average_marks(const student *s,int size)
{
	int i,average_marks;
	for(i=0;i<size;i++)
	{
		printf("The student name -%s\n",s[i].name);
		average_marks=(s[i].marks[0] + s[i].marks[1] + s[i].marks[2])/3;
		printf("The average amrks are %d\n",average_marks);
	}
}

