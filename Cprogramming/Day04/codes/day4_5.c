// Loops : for loop

/*
for(step 1; step 2; step 4)
{
    step 3;
}

*/

#include<stdio.h>

int main()
{
/*
    for(int i = 1; i<=10; i++)
    {
        printf("%4d",i);
    }
*/
    int num = 5;

    for(int i=1;i<=10;i++)
    {
        // 5 * 1 = 5
        // 5 * 2 = 10
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}