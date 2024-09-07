// recursion
// factorial : 5 
// power : 2^3 = 2 * 2 * 2
#include<stdio.h>
int my_fact(int num);// function declaration
int main()
{
    int num = 5;
    int result = my_fact(num);// result = 120
    printf("result = %d",result);

    return 0;
}

int my_fact(int num)// 5
{
    if(num == 0)// terminating condition
        return 1;
    return num * my_fact(num-1);
}