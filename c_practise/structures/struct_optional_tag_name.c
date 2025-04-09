#include<stdio.h>
#include<string.h>
struct
{
	int x;
	char str[10];
}s1={1,"hi"},s2={2,"hello"};
int main(void)
{
	//s1={1,"hello"};
	//s2={2,"hi"}; we cannot asigh like this
	printf("Method 1\n");
	printf("The value s1 is %d s2 is %d\n",s1.x,s2.x);
	printf("The %s in s1 and %s in s2\n",s1.str,s2.str);
	printf("Method 2\n");
	s1.x=3,s2.x=4;
	strcpy(s1.str,"bye");
	strcpy(s2.str,"byee");	
	printf("The value s1 is %d s2 is %d\n",s1.x,s2.x);
	printf("The %s in s1 and %s in s2\n",s1.str,s2.str);
	return 0;
}
/*
 * You're getting the error because you cannot use aggregate initialization (i.e., s1 = {1, "hello"}) 
 * after the variable has been declared.
 */
