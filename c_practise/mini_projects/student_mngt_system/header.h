#include<stdint.h>
typedef struct student
{
	char name[20];
	char gender[8];
	uint16_t roll_no;
	uint8_t s[4];
	char grade;
	struct student *next;
}student;
//Declared the structure for student grade management system for dynamically allocating data


student* create_node();

student* add_student(student *start,uint8_t size);

void display_students(student * start);

void calculate_grade(student *start);

//void search_rollno();
