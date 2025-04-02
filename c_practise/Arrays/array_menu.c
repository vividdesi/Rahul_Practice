#include<stdio.h>
#include<stdlib.h>
#define max 100
void array_insertion(int a[],int n);
void print_array(int a[],int n);
void search(int a[],int s,int n);
void delection_array(int a[],int *n,int pos);
void insert_array_pos(int a[],int *p,int pos,int value);
int main(void)
{
  int a[max];int n;
  printf("Enter the size\n");
  scanf("%d",&n);
  int choice,pos;
  while(1)
  {
	  printf("1.Insertion 2.Deletion 3.Search 4.Display 5.insertion of element in an existing array 6.Exit\n");
	  scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Enter the Values\n");
		       array_insertion(a,n);
		       break;
		case 2:printf("Enter the position u want to delete\n");
		    
		       scanf("%d",&pos);
		       delection_array(a,&n,pos);
		       break;
		case 3:int s;
		       printf("Enter the element u want to search\n");
		       scanf("%d",&s);
		       search(a,s,n);
		       break;
		case 4:printf("The values are \n");
		       print_array(a,n);
		       break;
		case 5:printf("Enter the postion and value u want insert in pre-exiting array\n");
		       int value;
		       scanf("%d%d",&pos,&value);
		       insert_array_pos(a,&n,pos,value);
		       break;
		case 6:printf("Thank you for using\n");
		       exit(0);
	}
	}	

	return 0;
}
void print_array(int a[],int n)
{
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}

void array_insertion(int a[],int n)
{
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
}
void search(int a[],int s,int n)
{
	int i,c=0;
	for( i=0;i<n;i++)
	{
		if(a[i]==s)c++;
	}
	if(c >0)printf("The value is found in the array\n");
	else printf("The given value is not found in the array\n");
}

void delection_array(int a[],int *n,int pos)
{
	for(int i=pos;i<*n;i++)
	{
		a[i]=a[i+1];

	}
	(*n)--;
	printf("The array values are\n");
	print_array(a,*n);
}
void  insert_array_pos(int a[],int *n,int pos,int value)
{
	printf("The value is %d and position is %d\n",value,pos);
	for(int i=*n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	(*n)++;
	printf("The array values are\n");
	print_array(a,*n);
}

