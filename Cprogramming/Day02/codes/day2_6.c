// integer, octal hexadecimal

#include<stdio.h>

int main()
{
    int num1 = 100; // integer : decimal %d : base 10
    int num2 = 0100; // octal : octal %o : base 8
    int num3 = 0X100; // Hexadecimal : %x  : base 16


    printf("dec num1 = %d\n",num1); // 100
    printf("octal num2 = %o\n",num2); // 100
    printf("Hexa num3 = %x\n",num3); // 100

    printf("octal num2 in decimal format = %d\n",num2); // 64

    printf("hexa num3 in decimal format = %d\n",num3); // 256
    return 0;
}