// enum : user-defined datatype

#include<stdio.h>

enum year {jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

int main()
{
    enum year month; // month is the variable of enum year data type
    printf("Enter the month :");
    scanf("%d",&month); // 5
    printf("size of enum year = %d\n",sizeof(enum year));
    
    printf("august = %d\n",aug);
    switch(month) // 5
    {
        case jan:  // case 1
        case mar: // case 3
        case may: // case 5
        case jul:
        case aug:
        case oct:
        case dec:
            printf("This month has 31 days !");
            break;
        case feb:
            printf("This month has 28/29 days !");
            break;
        case apr:
        case jun:
        case sep:
        case nov:
            printf("This month has 30 days !");
            break;
    }
    return 0;
}


