// Functions - with parameters, with return type

#include<stdio.h>


int addition(int n1,int n2);
//int addition(int,int);
void main()
{
    int num1, num2;
    printf("Enter the values for num1 and num2 :");
    scanf("%d%d",&num1,&num2); // 50 25

        int result = addition(num1,num2);// 50 25
        // result = 75
        printf("result = %d\n",result);
    
}


int addition(int n1,int n2) // 50  25
{
    int sum = n1 + n2; // 50 + 25

    return sum; // return 75
}