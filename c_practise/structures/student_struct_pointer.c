// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    char *name;
    int roll_no;
}s;

int main() {
   s *s1;
   s1=malloc(sizeof(s));
   if(s1 != NULL)
   {
       int n;
       printf("Enter the size of the name\n");
       scanf("%d",&n);
       getchar();
       s1->name=malloc((n+1)*sizeof(char));
       if(s1->name != NULL)
       {
           printf("Enter the name\n");
           fgets(s1->name,n+1,stdin);
           s1->name[strcspn(s1->name, "\n")] = '\0';
           printf("Enter the roll number\n");
           scanf("%d",&(s1->roll_no));
           printf("The student name is %s\n",s1->name);
           printf("The roll no is %d\n",s1->roll_no);
       }
       else printf("Memory allocation failed at s1->name\n");
   }
   else printf("Memory allocation Failed at s1\n");
   free(s1->name);
   free(s1);
    return 0;
}
