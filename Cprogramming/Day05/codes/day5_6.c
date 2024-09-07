// pass by value
// pas by address


#include<stdio.h>

void swap(int num1, int num2);
void swap_by_address(int *ptr1, int *ptr2);
int main()
{
    int num1 = 10, num2 = 20;
    printf("Before SWap num1 = %d  num2 = %d\n",num1,num2);
    swap(num1,num2); // 10 20
    // pass by value
    printf("After SWap by value num1 = %d  num2 = %d\n",num1,num2);
   
   printf("Before SWap num1 = %d  num2 = %d\n",num1,num2);
   swap_by_address(&num1,&num2);
   // pass by address
   printf("After SWap by address num1 = %d  num2 = %d\n",num1,num2);

    return 0;
}

void swap(int num1, int num2) // 10 20
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap_by_address(int *ptr1, int *ptr2)
{
    int temp;
    temp= *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}