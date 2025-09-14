#include<stdio.h>
#include<limits.h>
//#include<float.h>

int main(void)
{
	printf("char size is %lu\n",sizeof(char));
	printf("short int size %lu\n",sizeof(short int));
	printf("int size %lu\n",sizeof(int));
	printf("float size %lu\n",sizeof(float));
	printf("double size %lu\n",sizeof(double));
	printf("long double %lu\n",sizeof(long double));
	printf("long int %lu\n",sizeof(long int));
	printf("Minimum value of char: %d\n", CHAR_MIN);
        printf("Maximum value of char: %d\n", CHAR_MAX);
        printf("Minimum value of short: %d\n", SHRT_MIN);
        printf("Maximum value of short: %d\n", SHRT_MAX);
        printf("Minimum value of int: %d\n", INT_MIN);
        printf("Maximum value of int: %d\n", INT_MAX);
        printf("Maximum value of unsigned int: %u\n", UINT_MAX);
        printf("Minimum value of long: %ld\n", LONG_MIN);
        printf("Maximum value of long: %ld\n", LONG_MAX);
        printf("Maximum value of unsigned long: %lu\n", ULONG_MAX);
	return 0;
}
