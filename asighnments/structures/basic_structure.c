#include<stdio.h>
typedef struct student
{
	
	long roll_no;
	char name[25];
	int gender;
	char surname[10];
}s;
int main(void)
{
	s stu1={1,"rahul",10,"poola"};
	printf("%s\n",stu1.name);
	printf("%d\n",stu1.roll_no);
	printf("%d\n",stu1.gender);
	printf("The size of struct is %lu\n",sizeof(stu1));
	return 0;
}
