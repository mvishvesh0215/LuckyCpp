// // anonymous enum

#include<stdio.h>

enum {red,blue,green,yellow}c1; // anonymous enum
// c1 is a variable of anonymous enum

int main()
{
    c1 = red; // 0
    printf("green = %d\n",green);// 2
    
    typedef enum {car,bus,truck}vehicles;
    // vehicles is a name of enum
    vehicles v1; // v1 is a variable

    return 0;
}