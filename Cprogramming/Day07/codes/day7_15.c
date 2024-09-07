// anonymous structure
// typedef
// scanf
// structure pointer variable

#include<stdio.h>

struct
{
    int x;
    int y;
    char z;
}demo; // demo is a variable of anonymous structure

typedef struct employee
{
    int emp_id;
    char name[20];
    float salary;
}emp; // emp is another name of struct employee

int main()
{
    emp e1;

    printf("Enter the employee details :");

    scanf("%d%s%f",&e1.emp_id,&e1.name,&e1.salary);

    printf("Employee details :\n");
    printf("%d   %s    %.2f\n",e1.emp_id,e1.name,e1.salary);

    emp e2 = {200,"XYZ",20000};

    emp *ptr = &e2;
    // struct employee *ptr = &e2;

    printf("E2 employee details :\n");
    printf("%d   %s   %.2f\n",ptr->emp_id,ptr->name,ptr->salary);
}