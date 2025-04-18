#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    char name[20];
    int marks;
}student;
void print(student *q,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("The student-%d details\n",i+1);
        printf("The name is %s\n",q[i].name);
        printf("The marks is %d\n",q[i].marks);
    }
}
int main(void)
{
  int n;
  printf("Enter the size of the array of structure\n");
  if(scanf("%d",&n) != 1)
  {
      printf("Invalid input\n");
      return 1;
  };
  getchar();
  if(n<=0)
  {
      printf("Size should be greater than  Zero\n");
      return 1;
  }
  student *p=NULL;
  p=malloc(n*sizeof(*p));
  if(p != NULL)
  {
      for(int i=0;i<n;i++)
      {
          printf("Enter the name of the student\n");
          if((fgets(p[i].name,sizeof(p[i].name),stdin)) == NULL)
	  {
		  printf("Error reading name\n");
		  free(p);
		  return 1;
	  }
          p[i].name[strcspn(p[i].name,"\n")]='\0';
          printf("Enter the marks\n");
          if(scanf("%d",&p[i].marks) != 1)
          {
              printf("Invalid input \n");
              free(p);
              return 1;
          }
          getchar();
      }
      printf("The entered data is\n");
       print(p,n);
       free(p);
  }
  else
  {
      printf("Memory Allocation Failed\n");
  }
  return 0;
}
