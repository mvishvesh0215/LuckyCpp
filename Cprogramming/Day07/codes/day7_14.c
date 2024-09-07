// structure : user defined data type
// variable declaration, initialization

#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s1 = {1,"Abc",75};

    struct student s2;
    s2.roll_no = 2;
    strcpy (s2.name ,"Xyz");
    s2.marks = 86;

    printf("student info :\n");
    printf("Rollno = %d\n",s1.roll_no);
    printf("Name = %s\n",s1.name);
    printf("MArks = %.2f\n",s1.marks);
    return 0;
}