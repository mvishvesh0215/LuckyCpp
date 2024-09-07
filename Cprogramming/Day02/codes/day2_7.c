// upcasting, downcasting

#include<stdio.h>

int main()
{
    float result = 5/3; // 1.66
    /*
    5 : int
    3 : int
    int / int : output int
    result = 1.00000
    */

    printf("Result = %.2f\n",result); // 1.00

    //result = 5.0f/3;

    result = (float)5/3; // explicit typecasting
    /*
    float / int = float
    */
   printf("Result = %.2f\n",result); // 1.67

   int num1 = 1.23;
   // 1.23 : double value stored in the int variable
   // only int value is stored in num1
   // this causes data loss
   // this is called downcasting

   printf("num1 = %d\n",num1); // 1
    return 0;
}