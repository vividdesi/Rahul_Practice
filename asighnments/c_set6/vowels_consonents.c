#include<stdio.h>
#include<string.h>
#define max 40
int main(void)
{
	char str[max];
	printf("Enter the string u want to calculate\n");
	fgets(str,max,stdin);
	size_t len=strlen(str);
	printf("The length of string is %ld\n",len);
	if(len>0 && str[len -1]=='\n')str[len-1]='\0';
	int vowel=0,consonant=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='e'||str[i]=='u'||
	           str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='E'||str[i]=='U')vowel++;
		else
		{
			if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))consonant++;
		}
	}
	printf("The vowels is %d and consonants is %d\n",vowel,consonant);

	return 0;
}
