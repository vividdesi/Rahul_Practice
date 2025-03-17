#include<stdio.h>
void num_convert(short int,short int);
int main(void)
{
	short int n=0,choice=0;
	printf("Enter the number u want convert\n");
	scanf("%hd",&n);
	printf("1.Binary 2.octal 3.Hexa decimal\n");
	scanf("%hd",&choice);
	switch(choice)
	{
		case 1:printf("The Octal value of %d is ",n);num_convert(n,2);break;
		case 2:printf("The Octal value of %d is ",n);num_convert(n,8);break;
	        case 3:printf("The Hexa decimal value of %d is ",n);num_convert(n,16);break;
	        default:printf("Invalid operation\n");
	}
	printf("\n");
	return 0;
}

void num_convert(short int n,short int i)
{
  short int k=0;
  char arr[20];
  while(n>0)
  {
    int rem=n%i;
    if(rem>=10 && rem<=15)arr[k++]=rem-10+'A';
    else arr[k++]=rem+'0';
    n/=i;
  }
  for(int j=k-1;j>=0;j--)printf("%c",arr[j]);
  printf("\n");
  }



