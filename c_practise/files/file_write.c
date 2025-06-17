#include<stdio.h>
int main(void)
{
	FILE *f=NULL;
	char a[]="hello file";
	int b=33;
	char c='a';
	f=fopen("test1.txt","w");
	if(f == NULL)printf("FIle is not opened\n");
	else
	{
		printf("File created and opened\n");
		fputs(a,f);
		fputs("\n",f);
		fputc(c,f);
		fputc('\n',f);
		//we can also use fprintf() for all the data 
		fprintf(f,"%d\n",b);
		fprintf(f,"%s\n",a);
		fprintf(f,"%c\n",c);
		fclose(f);
		printf("Data successfully written into file\n");
		printf("Closed the file\n");
	}
	return 0;
}
