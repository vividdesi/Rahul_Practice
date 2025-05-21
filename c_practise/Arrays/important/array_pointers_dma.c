// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
void array_pointer_fun(char **disp,int number);
int main() {
    char s1[]="Hello",s2[]="hi",s3[]="bye";
    
    char **a=NULL;
    int size=3;
    a=malloc(size*sizeof(char *));//allocating a pointers which points to char 
    a[0]=s1,a[1]=s2,a[2]=s3;
    array_pointer_fun(a,3);
    free(a);
    return 0;
}
void array_pointer_fun(char **disp,int number)
{
    for(int i=0;i<number;i++)
    {
        printf("%s\n",(disp[i]));
    }
    for(int i=0;i<number;i++)
    printf("0x%X\n",(disp[i]));
    
}
