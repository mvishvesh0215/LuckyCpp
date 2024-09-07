// passing structure to function
#include<stdio.h>

typedef struct employee
{
    int emp_id;
    char name[20];
    float salary;
}emp;

void accept_Data(emp e1);
void print_data(emp e1);
void accept_data_by_address(emp *ptr);

int main()
{
    emp e1; 
   // accept_Data(e1); // pass by value
    accept_data_by_address(&e1); // pass by address
    print_data(e1);

    return 0;
}


void accept_data_by_address(emp *ptr)
{
     printf("Enter the data :");
    scanf("%d%s%f",&ptr->emp_id,&ptr->name,&ptr->salary);
}



// pass by value
void accept_Data(emp e1)
{
    printf("Enter the data :");
    scanf("%d%s%f",&e1.emp_id,&e1.name,&e1.salary);
}

void print_data(emp e1)
{
    printf("emp data = %d   %s   %.2f\n",e1.emp_id,e1.name,e1.salary);
}