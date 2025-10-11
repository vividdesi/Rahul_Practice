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

student* insert_begin(student * start);

student* insert_end(student *start);

student* insert_at_position(student *start);

student* delete_begin(student *start);

student* delete_end(student *start);

student* delete_at_position(student *start);

void free_all_nodes(student *start);

extern student* (*del_fun[3])(student*);

extern student* (*insert_fun[3])(student*);

//void search_rollno();
