#include<stdio.h>
#include<string.h>

#define MAX_EMPLOYEES 5
#define MAX_LEN 20
typedef struct Employee
{
    int empid;
    char name[MAX_LEN];
    float salary;
}employee;//Total size is 28 bytes

void input_employees(employee *array,int size);
void print_high_salary(employee *array,int size);
void modify_employee(employee *array);

int main(void)
{
    //Declaring a static array of structures
    employee emp[MAX_EMPLOYEES];
    
    input_employees(emp,MAX_EMPLOYEES);
    
    //print only does withn salary high >50,000
    print_high_salary(emp,MAX_EMPLOYEES);
    
    int index;
    //Modifying one employees data by index and printing that updated one
    printf("Enter the index u want to modify\n");
    while(scanf("%d",&index) != 1 || index>=MAX_EMPLOYEES || index<=0)
    {
        printf("Invalid input\n");
        printf("Enter only positive integer between 0 to %d\n",MAX_EMPLOYEES);
        while(getchar() !='\n');
    }
    getchar();
    
    modify_employee(&emp[index]);
    
    
    return 0;
}

void input_employees(employee *array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Employee-%d\n",i+1);
        printf("Enter the Employee ID\n");
        while(scanf("%d",&array[i].empid) != 1 || array[i].empid<=0)
        {
            printf("Invalid input\n");
            printf("Enter only Positive integer\n");
            while(getchar() != '\n');
        }
        getchar();
        
        printf("Enter the Employee name\n");
        if(fgets(array[i].name,MAX_LEN,stdin) == NULL)
        {
            printf("Enter the valid input\n");
            return ;
        }
        array[i].name[strcspn(array[i].name,"\n")]='\0';
        
        printf("Enter the salary of employee\n");
        while(scanf("%f",&array[i].salary) != 1 || array[i].salary<=0)
        {
            printf("Invalid input\n");
            printf("Ewnter the value above Zero\n");
            while(getchar() != '\n');
        }
        getchar();
    }
}
void print_high_salary(employee *array,int size)
{
    printf("\n");
    for(int i=0;i<size;i++)
    {
        if(array[i].salary >= 50000)
        {
            printf("Employee details are-\n");
            printf("Employee I.D    - %d\n",array[i].empid);
            printf("Employee Name   - %s\n",array[i].name);
            printf("Employee Salary - %.2f\n",array[i].salary);
        }
    }
}
void modify_employee(employee *array)
{
    printf("Modifying the one employyees data \n");
    input_employees(array,1);
    print_high_salary(array,1);
}
