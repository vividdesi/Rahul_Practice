#include<stdio.h>
typedef struct sample
{
	char name[10];
	int number;
}s;
int main(void)
{
	s s1={"sample",1};
	printf("the values are\n");
	printf("%s %d\n",s1.name,s1.number);
	printf("Modifiying the values\n");
	printf("Enter the name to modify\n");
	fgets(s1.name,10,stdin);
	printf("Enter the number\n");
	scanf("%d",&s1.number);
	printf("the modified values are\n");
	printf("%s %d\n",s1.name,s1.number);
	return 0;
}

