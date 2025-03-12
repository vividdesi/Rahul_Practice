#include<stdio.h>
void dec_binary(int );
int main(void)
{
	int a=0,b=0,choice=0;
	printf("enter the two values\n");
	scanf("%d%d",&a,&b);
	printf("1.AND OPERATION 2.OR OPERATION 3.XOR OPERATION\n");
	scanf("%d",&choice);
	dec_binary(a);
	switch(choice)
	{
		case 1:printf("The And operation of given binary will be \n");
			dec_binary(a);
			dec_binary(b);
			printf("---------------\n");
                        dec_binary(a&b);
                        printf("---------------\n");break;
		case 2:printf("The OR operation of given binary will be \n");
                        dec_binary(a);
                        dec_binary(b);
                        printf("---------------\n");
                        dec_binary(a|b);
                        printf("---------------\n");break;
		case 3:printf("The Xor operation of given binary will be \n");
                        dec_binary(a);
                        dec_binary(b);
                        printf("---------------\n");
                        dec_binary(a^b);
                        printf("---------------\n");break;
		default:printf("Invalid input\n");


	}
	return 0;
}

void dec_binary(int a)
{
	for(int i=7;i>=0;i--)
	{
		if((a&(1<<i))>=1)printf("1 ");
		else printf("0 ");
	}
	printf("\n");
}
