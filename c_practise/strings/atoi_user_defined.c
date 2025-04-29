#include<stdio.h>
#include<string.h>

#define MAX_LEN 10

int usr_atoi(const char *str);

int main(void)
{
	char str[MAX_LEN];
	printf("Enter the Numeric string u want to convert into integer\n");
	if(fgets(str,MAX_LEN,stdin) == NULL)
	{
		printf("Invalid input\n");
		printf("Enter only char datatype\n");
		while(getchar() != '\n');
		return -1;
	}
	str[strcspn(str,"\n")]='\0';
	
	int value;
	value = usr_atoi(str);

	printf("The value is %d\n",value);
	
	return 0;
}

int usr_atoi(const char *str)
{
	int i=0,sign=1,value=0,char_to_int_converter;

	if(str[0] == '-')
	{	
		sign=-1;
		i=1;
	}

		
	else if ((str[0] < '0') || (str[0] > '9'))
	{
		printf("Cannot be converted into int\n");
		printf("Only char integer can be convereted\n");
		return 0;
	}

	for(i;str[i] != '\0';i++)
	{
		
		if((str[i] < '0') || (str[i] > '9'))
		{
			printf("Cannot be converted into int\n");
			printf("Only char integer can be convereted\n");
			return 0;
		}

		else
		{
			char_to_int_converter=str[i]-'0';
			value=value * 10 + char_to_int_converter;
		}
	}

	return sign * value;
}


	 


