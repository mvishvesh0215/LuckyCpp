// unary ops with logical ops
// ++ -- with && || !

#include<stdio.h>

int main()
{
    int num1 = 10 , num2 = 25;
    int result = ++num1  && num2++;
//                 11(true)  && 25++(true)

    printf("num1 = %d  num2 = %d  result = %d\n",num1,num2,result);
//            11      26     1


   result = num1++  || ++num2;
    //       11++ (true)  || (not executed)
    // num2 remains unchanged as || gets first condition
    // as true

    printf("num1 = %d num2 = %d  result = %d\n",num1,num2,result);
    // 12      26(unchanged)   1
   
   
   int num3 = 0, num4 = 15;

   result = num3++   &&  ++num4;
   //       0++   &&  (not executed)
   //       false   && 
   printf("num3 = %d  num4 = %d  result = %d\n",num3,num4,result);
   // 1    15    0
   
    return 0;
}