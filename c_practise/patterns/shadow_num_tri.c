#include<stdio.h>
int main()
{
	
	for(int i=0;i<=4;i++)
	{
		int k=1;
		for(int j=1;j<=7;j++)
		{
		        if(j>=1 && j<=3-i)printf("%d",k++);	
			else if(j>=5-i && j<=3+i)printf(" ");
			else printf("%d",(k--));
		}
		printf("\n");
	}
	return 0;
}


