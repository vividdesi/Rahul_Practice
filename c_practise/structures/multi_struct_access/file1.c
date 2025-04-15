#include<stdio.h>
#include<string.h>
#include"header.h"
s s1;
int main()
{
	s1.roll_number=10;
	strcpy(s1.name,"rahul");
	printf("the name is : %s in file1 \n",s1.name);
	printf("the roll_number  is : %d in file1 \n",s1.roll_number);
	disp();
	return 0;
}
