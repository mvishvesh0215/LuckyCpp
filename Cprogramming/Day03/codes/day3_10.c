// NEsted if-else

#include<stdio.h>

int main()
{
    int num1 = 50, num2 = 45,num3 = 35;

    if(num1 > num2)
    {
        if(num1 > num3) // nested if- block
        {
            printf("Num1 is Greatest !\n");
        }
        else
        {
            printf("Num3 is Greatest !\n");
        }
    }
    else if (num2 > num3)
    {
        printf("Num2 is Greatest !\n");
    }
    else
        printf("Num3 is Greatest !\n");
    
    return 0;
}