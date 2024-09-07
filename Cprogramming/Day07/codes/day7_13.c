// conditional directives

#include<stdio.h>
 #define PI 3.14

int main()
{

    #ifdef PI  // if defined PI
        printf("PI is defined !\n ");
    #else 
        printf("PI is undefined !\n");
    #endif

    #ifndef PI // if not defined PI
        #error "PI is undefined !"
    #else
        printf("PI is defined !\n ");
    #endif
    return 0;
}