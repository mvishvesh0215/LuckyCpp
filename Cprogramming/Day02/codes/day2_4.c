// signed unsigned ranges : limits. h

#include<stdio.h>
#include<limits.h>

int main()
{
    int num1 = -10; // by default the variable is signed variable

    unsigned int num2 = 20;

    short int num3; // 2 bytes 

    printf("Signed Int Max = %d\n",INT_MAX);
    printf("Signed Int Min = %d\n",INT_MIN);
    printf("signed char MAx = %d\n",CHAR_MAX);
    printf("signed Char min = %d\n",CHAR_MIN);
    printf("Unsigned int Max = %u\n",UINT_MAX);
    // %u is the format specifier for unsigned int
    
    
    return 0;
}