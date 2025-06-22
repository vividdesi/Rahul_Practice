#include<stdio.h>
int main(int count,char *string[])
{
	printf("The argc are %d\n",count);
	for(int i=0;i<count;i++)printf("%s\n",string[i]);

	return 0;
}
