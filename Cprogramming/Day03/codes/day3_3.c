// Logical ops : &&  ||  !
// return 1(true) or 0(false)
/*
&& : requires both the conditions to be true.
if first condition for && is false, it does not check the 2nd
condition.

|| : returns true is either of one condition is true
if first condition is true , || does not check the 2nd condition.

!: it returns true for false and vice versa
*/

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Enter 2 numbers :");
    scanf("%d%d",&num1,&num2); // 0  25  

    printf("num1 && num2  %d\n", num1 && num2); // 0
    printf("num1 || num2  %d\n",num1 || num2); // 1

    printf("!num1 = %d\n",!num1); // 1
    printf("!num2 = %d\n",!num2); // 0

    return 0;
}