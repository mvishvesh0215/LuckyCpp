// types of pointers : Wild, NUll, void

#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num; 
    int *ptr1; // wild pointer
    ptr1 = NULL; // NULL pointer
    int *ptr2 = NULL;


    void *vptr = NULL;
    int num1 = 25;
    char ch = 'A';
    vptr = &num1;
    printf("*vptr = %d\n",*(int *)vptr); // 25

    vptr = &ch;
    printf("*vptr = %c\n",*(char *)vptr); // A


    return 0;
}