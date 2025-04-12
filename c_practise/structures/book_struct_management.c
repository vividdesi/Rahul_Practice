#include<stdio.h>
#include<string.h>
#define max_len 20
typedef struct book
{
	char title[max_len];
	char author[max_len];
	int price;
}b;
void print(b *bk)
{
	printf("The book name is %s\n",bk->title);
	printf("Author name is %s\n",bk->author);
	printf("price-%d\n",bk->price);
}
int main(void)
{
	int n,min,max;
	printf("Enter the number of books\n");
	scanf("%d",&n);
	while(getchar() !='\n');
	b a[n];
	printf("Input the details of book\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the book-%d title name\n",i+1);
		fgets(a[i].title,max_len,stdin);
		a[i].title[strcspn(a[i].title,"\n")]='\0';
		printf("Enter the book-%d author name\n",i+1);
		fgets(a[i].author,max_len,stdin);
		a[i].author[strcspn(a[i].author,"\n")]='\0';
		printf("Enter the price of the book-%d\n",i+1);
		scanf("%d",&a[i].price);
		while(getchar() !='\n');
	}
	for(int i=0;i<n;i++)
	{
		printf("The book-%d \n",i+1);
		print(&a[i]);
		printf("\n");
	}
	int j=0,k=0;
	max=a[0].price;
	min=a[0].price;
	for(int i=0;i<n;i++)
	{
	  if( a[i].price > max)
	  {
		  max=a[i].price;
		  j=i;
	  }
	  if(a[i].price < min )
	  {
		  min=a[i].price;
		  k=i;
	  }
	}
	printf("The highest price book is \n");
	print(&a[j]);
	printf("The lowest price book is\n");
	print(&a[k]);
	return 0;
}
