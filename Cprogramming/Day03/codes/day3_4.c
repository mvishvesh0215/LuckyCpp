// unary ops : 
/* 
increment ++ : 
pre-increment : ++num1
post-increment : num1++

decrement -- :
pre-decrement :  --num1
post-decrement :  num1--
*/

#include<stdio.h>

int main()
{
    int num1 = 20;

    int result = ++num1; // pre-increment

    // ++num1 :   num1 = num1 + 1
    /*
        increment the value of num1 by 1 and then assign
        the latest value to result
    */

   printf("num1 = %d  result = %d\n",num1,result);
   // 21   21

   int num2 = 25;

   int result2 = num2++; // post-increment
   /*
   associate the current value of num2 (25) to result2
   increment the value of num2 by 1 . num2 = 26
   assign the value 25 to result2
   */

  printf("num2 = %d  result2 = %d\n",num2,result2);
  // 26  25
    return 0;
}