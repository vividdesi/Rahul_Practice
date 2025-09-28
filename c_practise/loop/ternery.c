#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter the a,b and c values\n");
    scanf("%d%d%d",&a,&b,&c);
    
   (a<b) 
  ? ((a<c) ? printf("a is lesser\n") : printf("c is lesser\n"))
  : ((b<c) ? printf("b is lesser\n") : printf("c is lesser\n"));

    return 0;
}
