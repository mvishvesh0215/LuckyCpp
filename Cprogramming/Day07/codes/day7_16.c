// array of structure variables

#include<stdio.h>
#define SIZE 3

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student std[SIZE];

    printf("Enter the data :\n");

    for(int i =0;i<SIZE;i++)
    {
        printf("student %d :",i);
        scanf("%d%s%f",&std[i].roll_no,&std[i].name,&std[i].marks);
    }

    printf("Student details :\n");

    for(int i =0;i<SIZE;i++)
    {
        printf("%d  %s  %.2f\n",std[i].roll_no,std[i].name,std[i].marks);
    }
    return 0;
}