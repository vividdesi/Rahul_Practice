// Online C compiler to run C program online
#include <stdio.h>
void print(int a[][3])
{
    printf("The values are \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void add_matrix(int a[][3],int b[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%2d ",a[i][j]=a[i][j]*b[i][j]);
        }
        printf("\n");
    }
}
int main() {
    // Write C code here
    printf("Try programiz.pro\t hello");
    int a=123,b=1234;
    printf("%5d,%7d\n",a,b);
    printf("Try programiz.pro\t hello");
    printf("%10d,%12d\n",a,b);
    printf("%5.12s\n","helllo");
    char c=15,f=30;
    char p=c+f;
    short d=20;
    int e;
    e=c+d+f;
    printf("the p value is %d\n",p);
    printf("the e value is %d\n",e);
    long double g;
    g=e/c;
    printf("the implicit type conversion g value is %llf\n",g);
     g=(long double)e/c;
    printf("the explicit type conversion g value is %llf\n",g);
    char z[]="hello world";
    for(int i=0;i<sizeof(z);i++)printf("%c",z[i]);
    printf("\n");
    int y[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int pf[][3]={{1,2,3},{4,5,6},{7,8,9}};
    print(y);
    print(pf);
    add_matrix(y,pf);
    print(y);
    return 0;
}
