// Unary ops(++,--) with comma and brackets
#include<stdio.h>

int main()
{
    int num1 = 10;

    int result;
    result = num1++,++num1,num1++;
    //       10++,   ++11,  12++
    //        10,     12,     12     13

    printf("num1  = %d  result = %d\n",num1,result);
    // 13  10

    int num2 = 20;
    int result2 = (++num2,num2++,++num2,num2++);
    //              ++20, 21++,  ++22,   23++
    //               (21,  21,     23,   23 )     24
    // result2 = (23++)

    printf("num2 = %d  result2 = %d\n",num2,result2);
    // 24   23
    
    return 0;
}
