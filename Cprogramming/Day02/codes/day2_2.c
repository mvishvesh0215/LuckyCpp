// %*c

#include<stdio.h>

int main()
{
    int num1,num2;

    char ch;

   printf("Enter the 2 numbers :");
    scanf("%d%d",&num1,&num2);

    printf("Enter the character :");
    scanf("%*c%c",&ch); // %*c is used to suppress the enter or tab

   printf("num1 = %d  num2 = %d  ch = %c",num1,num2,ch);
   
    return 0;
}