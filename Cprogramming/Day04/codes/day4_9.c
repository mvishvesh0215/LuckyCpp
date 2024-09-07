// jump statements : break, continue,go-to,return
// break : used in switch and loops
// it helps to jump/break out of the current block

#include<stdio.h>

int main()
{
    int i = 1;

    while(i <= 10)
    {
        printf("%4d",i); // 1 2 3 4
        i++; // 2 3 4 5

        if(i == 5)
            break;
    }
    return 0;
}