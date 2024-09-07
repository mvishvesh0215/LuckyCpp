// Multiple switch cases
#include<stdio.h>

int main()
{
    int month;
    printf("Enter the month !");
    scanf("%d",&month);

    switch(month)
    {
        case 1: // jan
        case 3: // mar
        case 5:
        case 7:
        case 8:
        case 10 :
        case 12 :
                printf("This month has 31 days !\n");
                break;
        case 2: // Feb
                printf("This month has 28/29 days !\n");
                break;

        case 4:case 6:case 9:case 11:
                printf("This month has 30 Days !\n");
                break;

        default :
                printf("Invalid month !\n");
                break;
        
    }
    return 0;
}