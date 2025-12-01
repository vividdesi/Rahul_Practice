#include<stdio.h>
#define MSG1 "helllo"
#define MSG2 "helllo"
int main(void)
{
	#define MSG "helllo"
	printf("The string in the macro is %s\n",MSG);
	printf("The string in the macro is %s\n",MSG1);
	printf("The string in the macro is %s\n",MSG2);

	return 0;
}
