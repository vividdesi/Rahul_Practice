#include<stdio.h>
struct stu{
	int x;
	int y;
};
typedef struct st{
	int a;
	int b;
       	int c;
	struct stu d;

}s;
int main(void)
{
	s s1;
	s1.a=1;
	s1.b=2;
	s1.c=3;
	s1.d.x=4;
	s1.d.y=5;
	printf("%d %d %d %d %d\n",s1.a,s1.b,s1.c,s1.d.x,s1.d.y);
	printf("Modifying the values\n");
	printf("Enter the value of s1.a\n");
	scanf("%d",&(s1.a));
	printf("Enter the value of s1.b\n");
	scanf("%d",&(s1.b));
	printf("Enter the value of s1.c\n");
	scanf("%d",&(s1.c));
	printf("Enter the value of s1.d.x\n");
	scanf("%d",&(s1.d.x));
	printf("Enter the value of s1.d.y\n");
	scanf("%d",&(s1.d.y));
	printf("%d %d %d %d %d\n",s1.a,s1.b,s1.c,s1.d.x,s1.d.y);
	return 0;
}
