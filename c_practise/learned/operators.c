// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a=5,b=6,c=7,d=6,x,y;
   x=(a=7)&&(b=90);
   y=(c=1) || (d=90);
    printf("%d %d %d %d %d %d\n",a,b,c,d,x,y);
   x=(a==6)&&(b=90);
   y=(c==1) || (d=10);
    printf("%d %d %d %d %d %d\n",a,b,c,d,x,y); 
   a=2,b=2;
   
   x=4*(++a*2+3);
   y=4*(b++ * 2+3);
   printf("a is %d and b is %d\n",a,b);printf("The x is %d and y is %d\n",x,y);
   a=10;
   a=a++;
   printf("The a is %d\n",a);
    printf("The a is %d\n",a);
   a=a++ * a--;
   printf("The a value is %d\n",a);
    printf("The a is %d\n",a++ * a++);
   a=4,b=8,c=3,d=9;int z;
   z=a++ + ++b * c-- - --d;
   printf("The z values is %d\n",z);
    printf("%d %d %d %d \n",a,b,c,d);
    char ch='A';a=9;
    a=a+ch+24;
    printf("%d,%c,%d,%c\n",a,a,ch,ch);
    a=9,b=15,c=16,d=12;int e,f;
    e=!(a<b ||b<c);
    f=(a>b)?a-b:b-a;
    printf("The e values is %d and f value is %d\n",e,f);
    a=9;
    //x=((++a)++);//l value required error
    int k;
    k+=(x=5,y=x+2,z=x+y);
    printf("The k value is %d x %d y %d\n",k,x,y);
    a=b=c=d=4;
    printf("%d %d %d %d \n",a,b,c,d);
    a*=b+1;
    c+=d*=3;
    printf("%d %d %d %d \n",a,b,c,d);
    return 0;
}
