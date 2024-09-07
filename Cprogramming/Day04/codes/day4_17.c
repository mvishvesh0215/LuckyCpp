// static 

#include<stdio.h>

void fun1();
void fun2();

int main()
{
    fun1();
    fun1();
    fun1();
    printf("\n Static :\n");
    fun2();
    fun2();
    fun2();
    
    return 0;
}

void fun1()
{
    int num1 = 10;

    printf("local num1 = %d\n",num1); // 10  10 10
    num1++; // 11
}

void fun2()
{
    static int num1 = 10;
// initializing the static variable is imp to retain the value
   
    printf("static num1 = %d\n",num1); // 10  11 12
    num1++; // 11  12  13
}