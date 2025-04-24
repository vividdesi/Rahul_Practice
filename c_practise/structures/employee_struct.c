//Asigning values using pointer
#include<stdio.h>
#include<string.h>

#define max_len 20

typedef struct Employee
{
    //Highest size is int/float same 4 bytes
    int empid;//4 bytes allocated
    char name[max_len];//20 bytes will allocated
    float salary;//4 bytes will be allocated
}employee;//total size woulb be 28 bytes

void insert_data(employee *p);//To insert data
void print_data(employee *p);//To display data inside the variable
void giveRaise(struct Employee *e);//To modify salary value

int main(void)
{
    employee e1;//decalred a varaible e1 to neter,access,modify data
    insert_data(&e1);
    printf("Employee details are\n");
    print_data(&e1);
    
    giveRaise(&e1);
    
    printf("Employee details with raised salry\n");
    print_data(&e1);
    
    return 0;
}

void insert_data(employee *p)
{
    printf("Enter the Employee ID\n ");
    while(scanf("%d",&p->empid) != 1 || p->empid <=0)
    {
        printf("Invalid input enter only positive integer\n");
        while(getchar() != '\n');
    }
    getchar();
    
    printf("Enter the employee name\n");
    if(fgets(p->name,max_len,stdin) == NULL)
    {
        printf("Invalid input\n");
        while(getchar() != '\n');
    }
    p->name[strcspn(p->name,"\n")]='\0';
    
    printf("Enter the salary Details\n");
    //scanf("%f",&p->salary);
    while(scanf("%f",&p->salary) != 1)
    {
        printf("Invalid input enter only positive integer\n");
        while(getchar() != '\n');
    }
    getchar();
}

void print_data(employee *p)
{
    printf("Employee  I.d   = %d\n",p->empid);
    printf("Employee name   = %s\n",p->name);
    printf("Employee salary = %.2f\n",p->salary);
}

void giveRaise(struct Employee *e)
{
     int raise_percentage;
    printf("Enter the percentage to raise the salary of employee\n");
    scanf("%d",&raise_percentage);
    getchar();
    e->salary=e->salary + (e->salary * raise_percentage/100);
}
