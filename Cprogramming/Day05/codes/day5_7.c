//pointer to pointer
#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;
    int **p_ptr = &ptr;

    printf("num = %d\n",num); // 10
    printf("*ptr = %d\n",*ptr); // 10 
    printf("**p_ptr = %d\n",**p_ptr); // 10

    **p_ptr = 50;

    printf("num = %d\n",num); // 50
    printf("*ptr = %d\n",*ptr); // 50 
    printf("**p_ptr = %d\n",**p_ptr); // 50
    return 0;
}