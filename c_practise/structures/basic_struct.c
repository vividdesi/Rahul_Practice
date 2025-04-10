#include<stdio.h>
typedef struct student
{
	char name[20];
	int roll_no;
	char gender[8];
	int phone_number;

}s;
int main(void)
{
	s s1,s2,s3;
	s a[3]={s1,s2,s3};
	int n;
	printf("Enter the Number of students\n");
	scanf("%d",&n);
	printf("Enter the details of  %d student\n",n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the name\n");
		scanf("%s",a[i].name);
		printf("Enter the roll no\n");
		scanf("%d",&a[i].roll_no);
		printf("Enter the gender\n");
		scanf("%s",a[i].gender);
		printf("Enter the phone number\n");
		scanf("%d",&a[i].phone_number);
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",a[i].name);
		printf("%d\n",a[i].roll_no);
		printf("%s\n",a[i].gender);
		printf("%d\n",a[i].phone_number);
	}
	return 0;
}
