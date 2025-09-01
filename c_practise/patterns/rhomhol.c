#include<stdio.h>
int main()
{
        int n,j,i,k;
        printf("enter no of rows:");
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
                if(i%2==0)
		{
		continue;
		}
		else{
		for(j=1;j<=n-i;j++)
                {
                        printf(" ");
                }
                for(k=1;k<=i;k++)
                {
                        if(k==(i+1)/2||i==n||i==k||k==1)
                        {
                        printf("* " );
                }
                else
                {
                        printf("  ");
                }
                }
                printf("\n");
        }}
	for(i=n;i>=1;i--)
        {
		if(i%2==0&&i!=n)
		{
		continue;
		}
		else{
                for(j=1;j<=n-i;j++)
                {
                        printf(" ");
                }
                for(k=1;k<=i;k++)
                {
                        if(k==(i+1)/2||i==n||i==k||k==1)
                        {
                        printf("* " );
                }
                else
                {
                        printf("  ");
                }
                }
                printf("\n");
        }}

}
  
