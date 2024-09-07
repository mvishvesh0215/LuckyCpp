// pointers declaration 
// changing state of variable using pointer variable

#include<stdio.h>

int main()
{
    int num1 = 10;

    int *ptr = &num1;

    printf("num1 = %d\n",num1); // 10
    printf("&num1 = %u\n",&num1); // 100
    printf("ptr = %u\n",ptr); // 100
    printf("&ptr = %u\n",&ptr); // 500
    printf("*ptr = %d\n",*ptr); // 10

    num1 = 25;

    printf("\n changing the value of num1 using num1 :\n");
    printf("num1 = %d\n",num1); // 25
    printf("&num1 = %u\n",&num1); // 100
    printf("ptr = %u\n",ptr); // 100
    printf("&ptr = %u\n",&ptr); // 500
    printf("*ptr = %d\n",*ptr); // 25

    *ptr = 50; 
    // value at ptr = 50;
    // value at 100 = 50;

    printf("\n changing the value of num1 using ptr :\n");
    printf("num1 = %d\n",num1); // 50
    printf("&num1 = %u\n",&num1); // 100
    printf("ptr = %u\n",ptr); // 100
    printf("&ptr = %u\n",&ptr); // 500
    printf("*ptr = %d\n",*ptr); // 50
            
    return 0;
}