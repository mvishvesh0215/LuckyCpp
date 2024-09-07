// Format Specifiers

#include<stdio.h>


void main()
{
    int num1 = 10; // integer variable

    char ch = 'z';

    float fvar = 1.3f;

    double dnum = 2.6;

    printf("num1 = %d\n",num1);
    // %d is the format specifier for integer

    printf("ch = %c\n",ch);
    // %c is the format specifier for character value

    printf("fvar = %.2f\n",fvar);
    // %f is the format specifier for float
    // .2 denotes 2 digits to be printed after the .

    printf("dnum = %.3lf\n",dnum);
    // %lf is the format specifier for double
    // lf means long float as double is the extention of float

}   