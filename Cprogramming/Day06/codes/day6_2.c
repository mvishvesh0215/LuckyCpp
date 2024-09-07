// printf execution using pointer arithmetic
// Function parameter internal execution


#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("num = %d ++*ptr = %d\n",num,++*ptr); 
   

    return 0;
}





