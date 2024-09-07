// global variable with extern

#include<stdio.h>

int num1; // global variable
// default value is 0
void fun();

extern int num2; // declaration of global variable
int main()
{
    int num1 = 10; // local 
    fun();
    printf("num1 in main() = %d\n",num1); // 10
    printf("num2 = %d\n",num2);
    return 0;
}

int num2 = 25; // global 

void fun()
{
    printf("num1 in fun() = %d\n",num1); // 0
    // global num1 is accessible 
}