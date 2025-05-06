// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct contact{
    char name[20];
    char phone_number[15];
}contact;

void create_contact(contact *p,int no_of_contacts);
void print_contacts( const contact *p, int size);

int main() {
 int size;
 printf("Enter the number of contact u want to create\n");
 while(scanf("%d",&size) != 1 || size <0)
 {
     printf("Invalid input\n");
     printf("Enter the positive integer only\n");
     while(getchar()!='\n');
 }
 getchar();
 
 contact *p=NULL;
 p=calloc(size,sizeof(*p));
 
 if(p != NULL)
 {
     printf("Enter the contact details\n");
     create_contact(p,size);
     printf("Entered contact details are\n");
     print_contacts( p, size);
     free(p);
 }
 
 else
 {
     printf("Memory Allocation Failed\n");
 }
 

    return 0;
}

void create_contact(contact *p,int no_of_contacts)
{
    int i;
    for(i=0;i < no_of_contacts;i++)
    {
        printf("ContactDetails-%d\n",i+1);
        printf("Enter the name\n");
        fgets(p[i].name,20,stdin);
        p[i].name[strcspn(p[i].name,"\n")]='\0';
        printf("enter the Phone number\n");
        fgets(p[i].phone_number,15,stdin);
        p[i].phone_number[strcspn(p[i].phone_number,"\n")]='\0';
    }
}
void print_contacts( const contact *p, int size)
{
     int i;
    for(i=0;i < size;i++)
    {
        printf("ContactDetails-%d\n",i+1);
        printf("Name-%s\n",p[i].name);
        printf("Phone number-%s\n",p[i].phone_number);
    }
}
