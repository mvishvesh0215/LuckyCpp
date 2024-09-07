// conditional op : ternary op:
// syntax : condition ? exp1 (if condition true) : exp2 (if condition false)

#include<stdio.h>

int main()
{
    int num1 = 29, num2 = 25;
    num1 > num2 ? printf("Num1 is Greater !\n") : printf("Num2 is Greater !");
    return 0;
}