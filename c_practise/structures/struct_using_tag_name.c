#include<stdio.h>
struct stu
{
	char name[10];
	int x;
	char g;
}s1={"hell",3,'m'},s2={"eww",4,'q'};
int main(void)
{	
	printf("Method 1\n");
	printf("%s\t %s\n",s1.name,s2.name);
	printf("%c\t %c\n",s1.g,s2.g);
	printf("%d\t %d\n",s1.x,s2.x);
	printf("Method 2\n");
	struct stu s1={"hi",1,'m'};
       struct stu s2={"hello",2,'f'};
	printf("%s\t %s\n",s1.name,s2.name);
	printf("%c\t %c\n",s1.g,s2.g);
	printf("%d\t %d\n",s1.x,s2.x);
	return 0;
}

