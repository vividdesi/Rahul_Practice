#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter the value to print from first N natural umbers\n");
	scanf("%d",&number);
	for(int i=1;i<=number;i++)printf("%d ",i);
	printf("\n");
	return 0;
}
