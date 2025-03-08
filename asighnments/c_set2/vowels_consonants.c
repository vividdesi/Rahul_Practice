#include<stdio.h>
int main(void)
{       int a[10]={0},incre=0;
	printf("CAPITAL CONSONANTS\n");
	for(int i=65;i<=90;i++)
	{
		if(i=='A' || i=='I' || i=='E' || i=='O' || i=='U')a[incre++]=i;
		else printf(" %c ",i);
	}
	printf("\nSmall consonants\n");
	for(int i=97;i<=122;i++)
        {
                if(i=='a' || i=='i' || i=='e' || i=='o' || i=='u')a[incre++]=i;
                else printf("%c ",i);
        }
	printf("\n The capital and small vowels \n");
	for(int i=0;i<10;i++)printf("%c ",a[i]);
	printf("\n");
	return 0;
}
