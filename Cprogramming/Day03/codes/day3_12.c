// Nested ternary op

#include<stdio.h>

int main()
{
    int num1 = 25, num2 = 35, num3 = 45;

   int max = num1 > num2 ?(num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    
    printf("max = %d\n",max);
    return 0;
}