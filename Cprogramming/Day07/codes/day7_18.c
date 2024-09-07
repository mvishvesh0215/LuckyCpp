// copying 1 structure variable into another

#include<stdio.h>
typedef struct employee
{
    int emp_id;
    char name[20];
    float salary;
}emp;


int main()
{
    emp e1 = {10,"xyz",10000};
    emp e2;
    e2 = e1;
    printf("E1 : empid = %d name = %s salary = %.2f\n",e1.emp_id,e1.name,e1.salary);
    printf("E2 : empid = %d name = %s salary = %.2f\n",e2.emp_id,e2.name,e2.salary);
    

    
    
    if(e1.emp_id == e2.emp_id)
    {
        printf("They the equal !");
    }
    else
        printf("Not Equal !");
    
    return 0;
}