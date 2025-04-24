#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define NAME_LEN 30

typedef struct {
    int empid;
    char name[NAME_LEN];
    float salary;
} Employee;

void insert_employee(Employee *e);
void print_employee(const Employee *e);
void modify_employee(Employee *e);

int main(void) {
    int n,index;
    printf("Enter the size u want to allocate\n");
    while(scanf("%d",&n) != 1 || n<=0)
    {
        printf("Invalid input\n");
        printf("Enter positive integers only\n");
        while(getchar() != '\n');
    }
    Employee *array=NULL;
    
    array=calloc(n ,sizeof(*array));
    
    if(array)
    {
        int i;
        printf("Enter the details of the employees\n");
        for(i=0;i<n;i++)
        {
            printf("Employee-%d\n",i+1);
            insert_employee(&array[i]);
        }
        
        printf("Entered employee details are\n");
        for(i=0;i<n;i++)
        {
            printf("Employee-%d Details\n",i+1);
            print_employee(&array[i]);
        }
        
        printf("Enter the employee index u want to Modify\n");
        while(scanf("%d",&index) != 1 || index <= 0)
        {
            printf("Invalid input\n");
            printf("Enter positive integers only\n");
            while(getchar() != '\n');
        }
        
        insert_employee(&array[index]);
        print_employee(&array[index]);
        
        free(array);
        
    }
    
    else
    {
        printf("Memory Allocation failed\n");
    }

    return 0;
}

void insert_employee(Employee *e)
{
   printf("Enter the employee id\n");
    while(scanf("%d",&e->empid) != 1 || e->empid <= 0)
        {
            printf("Invalid input\n");
            printf("Enter positive integers only\n");
            while(getchar() != '\n');
        }
    getchar();
    printf("Enter the name of Employee\n");
    if(fgets(e->name,sizeof(e->name),stdin) == NULL)
    {
        printf("Invalid input\n");
        return;
    }
    e->name[strcspn(e->name,"\n")]='\0';
    
    printf("Enter the salary details\n");
    scanf("%f",&e->salary);
    getchar();
}

void print_employee(const Employee *e)
{
    printf("Employee I.D -%d\n",e->empid);
    printf("Employee Name -%s\n",e->name);
    printf("Employee salary -%.2f\n",e->salary);
}

void modify_employee(Employee *e)
{
    printf("Modifying the employee\n");
    insert_employee(e);
    print_employee(e);
}
