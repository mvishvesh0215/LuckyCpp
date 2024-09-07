// Loops : while loop

/*
Entry controlled loops : The condition is checked
before entering the loop
1. While loop
2. For loop

Exit controlled loops : The condition is checked at the exit level
Here the loop executes atleast once even if the condition is false
1. Do while loop

*/

/*
step 1 : loop variable initialization
step 2 : condition check
step 3 : execute the loop
step 4 : loop variable modification
repeat steps 2,3 and 4 till condition is false

*/

#include<stdio.h>

int main()
{
    int i = 1; //1. i is a loop variable

    while(i <= 10) //2. condition // while(1)... while(0)
    {
        //3. execute the loop block
        printf("%4d",i); // 1 2 3.... 10

        //4. loop variable modification
        i++; // 2 3 4.... 11
    }
    return 0;
}

