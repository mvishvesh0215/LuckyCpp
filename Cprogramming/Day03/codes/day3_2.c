// Relational ops : < <= > >= != ==
// return as 0(false) or 1(true)

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the 2 numbers :");
    scanf("%d%d",&num1,&num2);// 15  19

    printf("num1 > num2 = %d\n",num1 > num2);
    // num1 > num2 = 0

    printf("%d  >= %d  =  %d\n",num1,num2, num1 >= num2);
    // 15  >= 19 ? 0
    
    printf("%d < %d = %d\n",num1,num2,num1 < num2);
    // 15 < 19 ? 1

    printf("%d <= %d = %d\n",num1,num2, num1 <= num2);
    // 15 <= 19 ? 0

    printf("num1 ! = num2 ? %d\n",num1 != num2);
    // 15 != 19 ? 1

    printf("num1 == num2 ? %d\n", num1 == num2);
    // num1 == num2 ? 0
    return 0;   
}