#include<stdio.h>
void func(int a[]);
int main(void)
{
	int a[]={5,10,15,20,25};
	printf("The address of a is ox%x in main\n",a);
	printf("The address of a[0] is ox%x in main\n",&a[0]);
	printf("The size of a is %d in main\n",sizeof(a));
	func(a);
	return 0;
}
void func(int a[])
{
	int i=5,sum=0;
	while(i>2)sum=sum+a[--i];
	printf("The sum value is %d\n",sum);
	printf("The address of a is ox%x in function\n",a);
	printf("The address of a is ox%x in function\n",&a[0]);
	printf("The size of a is %d in function\n",sizeof(a));
	printf("The size of  of a[0] is %d\n",sizeof(a[0]));
}
