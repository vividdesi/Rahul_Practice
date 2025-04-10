#include<stdio.h>
typedef struct student
{
	char name[20];
	int roll_no;
	int age;
}s;
void print(s stu1);
int main(void)
{
	s stu1={"rahul",12,24},stu2={"rambo",12,24};
	print(stu1);
	print(stu2);
	printf("Copying values of stu1 into stu2\n");
	stu2=stu1;
	print(stu2);
	return 0;
}
void print(s stu1)
{
	printf("Name is %s\n",stu1.name);
	printf("Roll no is %d\n",stu1.roll_no);
	printf("age is %d\n",stu1.age);
}
