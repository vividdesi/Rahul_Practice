#include <stdio.h>
#include<string.h>

typedef struct Student
{
    int rollno;//4 bytes
    char name[30];//30 bytes but i should divisible by 4 so 32
    float marks;//4 bytes
}student;

void print_struct_data(student *p,int i)
{
    printf("\n");
    printf("The details of student-%d is\n",i);
    printf("The name is %s\n",p->name);
    printf("The roll no number is %d\n",p->rollno);
    printf("The marks is %.2f\n",p->marks);
    printf("\n");
}

int main(void) {

printf("The size of struct is %d\n",sizeof(student));// so 40 bytes
//Method I
student s1={2,"Rahul",33.5};

print_struct_data(&s1,1);

//Method II allocating data at runtime
student s2;

printf("Enter the name for student-II\n");

if(fgets(s2.name,sizeof(s2.name),stdin) == NULL)
{
    printf("Invalid input\n");
    while(getchar() != '\n');
}
s2.name[strcspn(s2.name,"\n")]='\0';

printf("Enter the roll no and marks of student-II\n");
scanf("%d%f",&s2.rollno,&s2.marks);
getchar();

print_struct_data(&s2,2);

printf("Enter to modify the marks of student-I\n");
scanf("%f",&(s1.marks)); 
getchar();
printf("Enter to modify the marks of student-II\n");
scanf("%f",&(s2.marks));
getchar();
printf("After modifying marks of student1 and student 2\n");
print_struct_data(&s1,1);
print_struct_data(&s2,2);
return 0;
}
