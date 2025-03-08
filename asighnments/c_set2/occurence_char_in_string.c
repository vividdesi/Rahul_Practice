#include<stdio.h>
int main(void)
{
	char a[20]={0};
	printf("Enter the string\n");
	fgets(a,20,stdin);
	 for (int i = 0; i < sizeof(a); i++)
	 {
            if (a[i] == '\n')
	    {
             a[i] = '\0';  // Replace newline with null terminator
             break;
            }
         }
	char c='\0';
	printf("Enter the char u occurence u want to search in an given string\n");
	scanf("%c",&c);
	int count=0;
	for(int i=0;i<sizeof(a);i++)
	{
		if(c==a[i])count++;
	}
	printf("The occurence of char %c in an given string %s is %d\n",c,a,count); 
	return 0;
}

/* The reason is When fgets() reads a string from the user, it also captures the newline character (\n) when the user presses the "Enter" key.
This newline character is left in the input buffer, and when you use scanf("%c", &c) to read the next character, it immediately picks up that leftover newline character instead of the intended character input.*/
