// Auto variable
// register variable


#include<stdio.h>

int main()
{
    int num1 = 15; // auto 
    register int num2 = 20;
    
    {
        int num3 = 20;
        printf("num1 = %d\n",num1);
    }
   // printf("num3 = %d\n",num3); // not accessible outside the block
    return 0;
}

void fun()
{
  //  printf("num1 = %d\n",num1); // not accessible
}