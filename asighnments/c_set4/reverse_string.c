#include<stdio.h>
int main(void)
{
	char a[5]={0};
	printf("Enter the string\n");
	fgets(a,5,stdin);
	int size=sizeof(a);char temp='\0';
	for(int i=0;i<size-2;i++)
	{
		temp=a[i],a[i]=a[size-i],a[size-i]=temp;
	}
	printf("%s\n",a);
	return 0;
}
