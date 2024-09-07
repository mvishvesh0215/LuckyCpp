// bitfields

#include<stdio.h>

struct employee
{
    int emp_id; // 4
    char name[20]; // 20 
    unsigned int age : 9; // 4
    unsigned int gender : 1; 
};

int main()
{
    struct employee e1 = {100,"Abc",10000,35,1};
    printf("size = %d\n",sizeof(struct employee));
    return 0;
}