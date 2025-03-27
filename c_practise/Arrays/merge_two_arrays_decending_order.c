#include<stdio.h>
#define max1 4
#define max2 8
void print_array(int a[],int size)
{
	for(int i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
};
void insert_array(int a[],int size)
{
	 for(int i=0;i<size;i++)scanf("%d",&a[i]);
};
int main(void)
{
	int a[max1],b[max1],c[max2],i,j;
	printf("Enter the data in a\n");
	insert_array(a,max1);
	printf("Enter the data in b\n");
	insert_array(b,max1);
	printf("The insertes data is \n");
	print_array(a,max1);
	print_array(b,max1);
	printf("The cloning the a and b array values in c array\n");
	for(i=j=0;i<max1 && j< max1;i++,j++)
	{
		c[i]=a[j];
		c[i+4]=b[j];
	}
	print_array(c,max2);
	int index=0;printf("The sorting array in descending order using linear search algop\n");
	for(i=0;i<max2;i++)
	{
		for( j=0;j<max2-1;j++)
		{
			if(c[j]<=c[j+1])
			{
			  int temp=c[j];
	                c[j]=c[j+1];
        	        c[j+1]=temp;


			}

		}
	}
	 print_array(c,max2);
	 return 0;
}




