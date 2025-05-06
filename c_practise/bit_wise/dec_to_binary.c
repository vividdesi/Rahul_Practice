#include <stdio.h>

int main() {
  int number;
  printf("Enter the number to for binary\n");
  scanf("%d",&number);
  int res=0,rem,base=1;
  while(number != 0)
  {
      rem=number%2;
      res+=base * rem ;
      base*=10;
      number/=2;
  }
  printf("%d\n",res);

    return 0;
}
