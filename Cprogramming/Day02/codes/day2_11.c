// Arithmetic operators : + - * / %

/*
operators : operation
operands : variables on which the operation is performed

unary operator : 1 operand 
binary operators : 2 operands
ternary operators : 3 operands
*/

#include<stdio.h>

int main()
{
    int num1 = 50, num2 = 20;

    printf("Addition = %d\n",num1 + num2);
    printf("Subtraction = %d\n",num1 - num2);
    printf("Multiplication = %d\n",num1 * num2);
    printf("Division = %d\n",num1 / num2); // Quotient
    printf("Mod = %d\n",num1 % num2); // Remainder
    
    return 0;
}