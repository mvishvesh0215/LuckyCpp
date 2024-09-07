// short hand operators : 
//  +=  -=   *=  /=  %=

#include<stdio.h>

int main()
{
    int num1 = 25,num2 = 20;

    printf("num1 = %d num2 = %d\n",num1,num2);
    // 25  20

    num1 += num2;
    // num1  = num1 + num2;

    printf("num1 = %d num2 = %d\n",num1,num2);
    // 45   20

    num1 *= num2;
    // num1 = num1 * num2;
    // num1 = 45 * 20

    printf("num1 = %d num2 = %d\n",num1,num2);

    num1 -= num2;
    // num1 = num1 - num2;
    // num1 = 900 - 20

    printf("num1 = %d num2 = %d\n",num1,num2);

    num1 =- num2; // not a short hand operator
   // num1 = - 20
   printf("num1 = %d num2 = %d\n",num1,num2);

   num1 =+ num2; // not a short hand op
   // num1 = + 20

   
   printf("num1 = %d num2 = %d\n",num1,num2);
    return 0;
}