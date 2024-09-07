// using 1 structure into another
#include<stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yy;
}date;

typedef struct employee
{
    int emp_id;
    char name[20];
    float salary;
    date DOB; // date of birth
    date DOJ; // date of joining
    
}emp;

int main()
{
    emp e1;
    printf("Enter the data : empid name and salary :\n");
    scanf("%d%s%f",&e1.emp_id,&e1.name,&e1.salary);

    printf("Enter the date of birth :\n");
    scanf("%d%d%d",&e1.DOB.dd,&e1.DOB.mm,&e1.DOB.yy);

    printf("enter the date of joining :\n");
    scanf("%d%d%d",&e1.DOJ.dd,&e1.DOJ.mm,&e1.DOJ.yy);

    printf("Employee Details :\n");
    printf("%d   %s  %.2f\n",e1.emp_id,e1.name,e1.salary);

    printf("DOB : %d - %d - %d\n",e1.DOB.dd,e1.DOB.mm,e1.DOB.yy);

    printf("DOJ : %d - %d - %d\n",e1.DOJ.dd,e1.DOJ.mm,e1.DOJ.yy);
    return 0;
}