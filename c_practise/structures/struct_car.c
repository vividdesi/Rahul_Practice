#include<stdio.h>
struct car{
	char name[10];
	char cc[5];
	char fuel[8];
	long int price;
	char car_type[10];
}c;

int main(void)
{
	int n;
	printf("Enter the number of cars\n");
	scanf("%d",&n);
	c[n];
	printf("Enter the details of the cars\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the car name\n");
		fgets(c[i].name,10,stdin);
		printf("Enter the cc\n");
		fgets(c[i].
	}
	return 0;
}
