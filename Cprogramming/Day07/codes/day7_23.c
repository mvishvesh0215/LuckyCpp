// union using strcuture
#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    int standard;
    union  // nested union
    {
        char grade;
        int marks;        
    }result; // result is a variable 
};

int main()
{
    struct student s1;

    printf("enter the student info :");
    printf("Enter the roll no name and standard :");
    scanf("%d%s%d",&s1.roll_no,&s1.name,&s1.standard);

    if(s1.standard >= 1  && s1.standard <=4)
    {
        printf("Enter the grade :");
        scanf("%*c%c",&s1.result.grade);
    }
    else
    {
        printf("Enter the marks :\n");
        scanf("%d",&s1.result.marks);
    }

    printf("roll no = %d  name = %s  standard = %d\n",s1.roll_no,s1.name,s1.standard);

    if(s1.standard >= 1  && s1.standard <=4)
    {
        printf("grade = %c\n",s1.result.grade);
    }
    else
    {
        printf("Marks = %d\n",s1.result.marks);
    }

    return 0;

}