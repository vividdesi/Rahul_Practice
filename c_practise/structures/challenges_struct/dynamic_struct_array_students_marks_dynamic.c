#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 50
typedef struct student {
    int roll_no;
    char name[MAX_LEN];    // fixed-size name
    int *marks;       // dynamically allocated array of marks
    int num_subjects; // number of subjects (size of marks array)
} stu;//size 64 bytes

//n means number o students input
void input_data_students(stu *s);
void print_data_students(const stu *s);
void free_student(stu *s);

//Giving default number of subject at runtime and giving to struct
int number_subjects;

int main(void) {
   int size;
   
   printf("Enter the number of students u want allocate data\n");
   while(scanf("%d",&size) != 1 || size < 0)
   {
       printf("Invalid input\n");
       printf("Enter only positive integers\n");
       while(getchar() != '\n');
   }
   
    printf("Enter the number of subjects\n");
    while(scanf("%d",&number_subjects) != 1 || number_subjects < 0)
   {
       printf("Invalid input\n");
       printf("Enter only positive integers\n");
       while(getchar() != '\n');
   }
   
   stu *s=NULL;
   
   s=calloc(size,sizeof(*s));//ex size=3,than struct size 64 bytes -so 64*3=192 bytes
   
   if(s)
   {
     
     printf("Enter the details of students\n");
     for(int i=0;i<size;i++)
     {  
         printf("Enter the student-%d Details -->\n");
        input_data_students(&s[i]);
     }
     
     
     for(int i=0;i<size;i++)
     {
        printf("The student-%d Details are\n -->"); 
        print_data_students(&s[i]);
     }
     
     //Freeing the dynamic allocated data of marks in students struct
     for(int i=0;i<size;i++)
     {
         free_student(&s[i]);
     }
     
     free(s);
     
   }
   
   else
   {
       printf("Memory Allocation Failed\n");
   }
   
    return 0;
}

void input_data_students(stu *s)
{
    printf("Enter the Roll no\n");
    while( scanf("%d",&s->roll_no) != 1 || s->roll_no < 0)
       {
           printf("Invalid input\n");
           printf("Enter only positive integers\n");
           while(getchar() != '\n');
       }
       getchar();
       
       printf("Enter the name of student\n");
       if(fgets(s->name,MAX_LEN,stdin) == NULL)
       {
           printf("Invalid Input\n");
           return;
       }
       s->name[strcspn(s->name,"\n")]='\0';
       
       //Default for array of students value;
       s->num_subjects=number_subjects;
       
       //Allocating the size for marks to store
       s->marks=calloc(s->num_subjects,sizeof(int));
       if(s->marks)
       {
          for(int i=0;i < (s->num_subjects);i++)
          {
            printf("Enter the marks-%d\n",i+1);
            
            while( scanf("%d",&s->marks[i]) != 1 || s->marks[i] < 0)
           {
               printf("Invalid input\n");
               printf("Enter only positive integers\n");
               while(getchar() != '\n');
           }
          }
       }
       
       else
       {
           printf("Memory allocation failed\n");
       }
       
}

void print_data_students(const stu *s)
{
    printf("Rollno - %d\n",(s->roll_no));
    printf("Name   - %s\n",s->name);
    for(int i=0;i < number_subjects; i++)
    {
        printf("Marks-%d\n",s->marks[i]);
    }
    printf("Number of subjects is %d\n",(s->num_subjects));
}

void free_student(stu *s)
{
    free(s->marks);
}
