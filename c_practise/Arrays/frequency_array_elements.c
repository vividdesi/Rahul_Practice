#include<stdio.h>
int main(void)
{
	int a[100],b[100],size,i,j,count=0,k=0;;
	printf("Enter the number of elements u want to\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
       	printf("The element at index %d :",i);	
	 scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;

			}
	        }

		b[k++]=a[i],b[k++]=count;
		count=0;
	}
	for(i=0;i<(size*2)-1;i+=2)
	{
		for(j=i+2;j<size*2;j+=2)
		{
			if(b[i]==b[j])
			{
				b[j]=0;
				b[j+1]=0;
			}
		}
	}
	printf("The number of frequnt values are\n");
	printf("----------------------------------\n");
	for(i=0;i<size*2;i+=2)
	{
		if(b[i] !=0)
		{
		printf("%d occurs %d times\n",b[i],b[i+1]);
		}
	}
	return 0;
}

