// operators :Assignment, comma, comma with brackets

#include<stdio.h>

int main()
{
    int num1 = 25; // assignment operator

   //  int num2 = 11,12,13; // error

   int num2; 
   num2 = 11,12,13;
   // initializing multiple values is not allowed
   // but declaraing a variable and assiging multiple values
   // is a valid syntax
   // in this case the leftmost value is assigned to num2

   printf("num2 = %d\n",num2); // 11

   int num3 = (1,2,3);
   // initializing multiple values with brackets is allowed

   // in this case rightmost value is stored in the variable

   printf("num3 = %d\n",num3); // 3
    return 0;
}
