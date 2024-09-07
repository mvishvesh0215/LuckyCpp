// functions : with parameters, without return type

#include<stdio.h>

void addition (int num1,int num2);// function declaration
int main()
{
    addition(75,89); // function call
    addition(125,147); // actual parameters
    addition(345,267);
    return 0;
}

// function definition
// return_type   function_name   (intput parameters)
void addition (int num1,int num2)// formal parameters
{
    int sum = num1 + num2;// 75 + 89
    printf("sum = %d\n",sum);
}