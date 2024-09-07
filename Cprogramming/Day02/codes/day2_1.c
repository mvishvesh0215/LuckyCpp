// scanf 

#include<stdio.h>

int main()
{
    int num;

    printf("Enter the value for num :");
    scanf("%d",&num); // & is an address of operator

    printf("Num = %d\n",num);

    int num1,num2;

    printf("Enter the value for num1 and num2 :");
    scanf("%d%d",&num1,&num2);

    printf("num1 = %d  num2 = %d\n",num1,num2);
    return 0;
}